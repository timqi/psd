#include "primitive.h"

ARModel burg(Complex *x, int n, int order)
{
    double *efn, *efp, *ebn, *ebp;
    double suma, sumb;
    KNode k; INIT_NODE(&k);
    int i, m;

    efn = (double *)malloc(n*sizeof(double)); efp = NULL;
    ebn = (double *)malloc(n*sizeof(double)); ebp = NULL;
    for(i = 0; i < n; i++) {
        efn[i] = x[i].real;
        ebn[i] = x[i].real;
    }

    for(m = 1; m <= order; m++) {
        free(efp); efp = efn;
        free(ebp); ebp = ebn;
        efn = (double *)malloc(n*sizeof(double));
        ebn = (double *)malloc(n*sizeof(double));
        suma = 0.0; sumb = 0.0;

        for(i = m; i < n-1; i++) {
            suma += (efp[i]*ebp[i-1]);
            sumb += (efp[i]*efp[i] + ebp[i-1]*ebp[i-1]);
        }
        double tmp = (-2*suma/sumb);
        insert_d( tmp, &k);

        efn[0] = 0; ebn[0] = 0;
        for(i = 1; i < n; i++) {
            efn[i] = efp[i] + tmp*ebp[i-1];
        ebn[i] = ebp[i-1] + tmp*efp[i];
        }
    }

    free(efn); free(efp); free(ebn); free(ebp);
    double *kk = (double *)malloc(order*sizeof(double));
    KNode *t;
    for(t = k.prev, i = 0; t != NULL; t = t->prev, i++)
        kk[order-i-1] = t->dt;
    destroy_d(&k);

    double *ap, *an;
    an = (double *)malloc(sizeof(double)); ap = NULL;
    *an = kk[0];
    for(i = 1; i < order; i++) {
        free(ap); ap = an;
        an = (double *)malloc((i+1)*sizeof(double));
        for(m = 0; m < i; m++) {
            an[m] = ap[m] + kk[i] * ap[i-m-1];
            an[i] = kk[i];
        }
    }

    ARModel ret;
    ret.p = 1; ret.i = order+1;
    ret.a = (Complex *)malloc((i+1)*sizeof(Complex));
    (*(ret.a)).real = 1.0; (*(ret.a)).img = 0.0;
    for(m = 1; m < i+1; m++) {
        (ret.a+m)->real = an[m-1];
        (ret.a+m)->img = 0;
    }
    free(ap); free(an);
    return ret;
}

void burg_order()
{
    ARModel model = burg(pri.dt, pri.n, burg_order_var);
    psd(model);
}
