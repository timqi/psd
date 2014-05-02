#include "primitive.h"

ARModel ld(Complex *x, int n, double preci)
{
    int i, j, other = 1;

    RNode r; INIT_NODE(&r);
    r.dt = xcorr(x, n, 0);
    insert(xcorr(x, n, 1), &r);

    Complex *an, *ap; Complex sum;
    double pn, pp = DBL_MAX;

    an = (Complex *)malloc(sizeof(Complex)); ap = NULL;
    *an = com_neg( com_div(r.prev->dt, abs(r.dt)));
    pn = abs(r.dt)*(1-abs(com_multi(*an, *an)));

    for(i = 1; pp - pn > preci || other; i++) {
        if(pp - pn <= preci) other = 0;
        sum.real = 0.0; sum.img = 0.0;
        free(ap); ap = an; pp = pn;
        an = (Complex *)malloc((i+1)*sizeof(Complex));

        RNode *tmp; j = 0;
        for(tmp = r.prev; tmp != NULL; tmp = tmp->prev)
            sum = com_add( sum, com_multi( ap[j++], tmp->dt ) );

        insert(xcorr(x, n, i+1), &r);
        an[i] = com_neg( com_div( com_add(r.prev->dt, sum), pp ) );
        pn = pp*(1-abs(com_multi(an[i], an[i])));
        for(j = 0; j < i; j++)
            an[j] = com_add(ap[j], com_multi(an[i], ap[i-j-1]));
    }
    ARModel ret;
    ret.p = pn; ret.i = i+1;
    ret.a = (Complex *)malloc((i+1)*sizeof(Complex));
    (*(ret.a)).real = 1.0; (*(ret.a)).img = 0.0;
    for(j = 1; j < i+1; j++)
        *(ret.a+j) = an[j-1];
    free(ap); free(an); destroy(&r);
    return ret;
}

ARModel ld_order(Complex *x, int n, int order)
{
    int i, j;

    RNode r; INIT_NODE(&r);
    r.dt = xcorr(x, n, 0);
    insert(xcorr(x, n, 1), &r);

    Complex *an, *ap; Complex sum;
    double pn, pp = DBL_MAX;

    an = (Complex *)malloc(sizeof(Complex)); ap = NULL;
    *an = com_neg( com_div(r.prev->dt, abs(r.dt)));
    pn = abs(r.dt)*(1-abs(com_multi(*an, *an)));

    for(i = 1; i < order; i++) {
        sum.real = 0.0; sum.img = 0.0;
        free(ap); ap = an; pp = pn;
        an = (Complex *)malloc((i+1)*sizeof(Complex));

        RNode *tmp; j = 0;
        for(tmp = r.prev; tmp != NULL; tmp = tmp->prev)
            sum = com_add( sum, com_multi( ap[j++], tmp->dt ) );

        insert(xcorr(x, n, i+1), &r);
        an[i] = com_neg( com_div( com_add(r.prev->dt, sum), pp ) );
        pn = pp*(1-abs(com_multi(an[i], an[i])));
        for(j = 0; j < i; j++)
            an[j] = com_add(ap[j], com_multi(an[i], ap[i-j-1]));
    }
    ARModel ret;
    ret.p = pn; ret.i = i+1;
    ret.a = (Complex *)malloc((i+1)*sizeof(Complex));
    (*(ret.a)).real = 1.0; (*(ret.a)).img = 0.0;
    for(j = 1; j < i+1; j++)
        *(ret.a+j) = an[j-1];
    free(ap); free(an); destroy(&r);
    return ret;
}

void psd(ARModel model)
{
    int tmp_nfft = nfft/2;
    if( ret.x ) free(ret.x); if( ret.y ) free( ret.y );
    ret.x = (double *)malloc(tmp_nfft*sizeof(double));
    ret.y = (double *)malloc(tmp_nfft*sizeof(double));
    Complex *x = fft(model.a, model.i, nfft);
    for(int i = 0; i < tmp_nfft; i++) {
        *(ret.x+i) = (double)i*fs/nfft;
        double tmp = abs(*(x+i));
        tmp = model.p/(tmp*tmp);
        *(ret.y+i) = 10*log10(tmp);
    }
    free(x);
    ret.n = tmp_nfft;
    ret.xlabel = "(Hz)";
    ret.ylabel = "(db)";
}

void arcorr()
{
    ARModel model = ld(pri.dt, pri.n, arcorr_preci);
    psd(model);
}

void arcorr_or()
{
    ARModel model = ld_order(pri.dt, pri.n, arcorr_order);
    psd(model);
}
