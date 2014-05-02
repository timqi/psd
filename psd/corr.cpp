#include "primitive.h"

Complex xcorr(Complex *arr, int n, int m)
{
    int i;
    Complex ret;
    ret.real = 0.0; ret.img = 0.0;
    if(m < n)
        for(i = 0; i < n-m; i++)
            ret = com_add(ret, com_multi(arr[i], arr[i+m]));
    if(ret.real) ret.real /= n;
    if(ret.img) ret.img /= n;
    return ret;
}

void corr()
{
    int i; int tmp; int tmp_nfft = nfft/2;
    Complex *rm = (Complex *)malloc( nfft * sizeof( Complex ));
    for(i = 0; i < nfft; i++) {
        tmp = pri.n - i -1;
        tmp = (tmp>0) ? tmp : (-tmp);
        *(rm+i) = xcorr(pri.dt, pri.n, tmp);
    }
    Complex *nf = fft(rm, nfft, nfft);
    free(rm);

    if( ret.x ) free(ret.x); if( ret.y ) free( ret.y );
    ret.x = (double *)malloc( (tmp_nfft) *sizeof(double));
    ret.y = (double *)malloc( (tmp_nfft) *sizeof(double));
    for(i = 0; i < tmp_nfft; i++) {
        double l = abs( *(nf+i) );
        *(ret.y+i) = 10*log10(l);
        *(ret.x+i) = i*fs/nfft;
    }
    free(nf);
    ret.xlabel = "(Hz)";
    ret.ylabel = "(db)";
    ret.n = tmp_nfft;
}
