#include "primitive.h"

void direct( )
{
    int i; int tmp_nfft = nfft/2;
    Complex *tmp = fft(pri.dt, pri.n, nfft);
    if( ret.x ) free(ret.x); if( ret.y ) free( ret.y );
    ret.x = (double *)malloc( (tmp_nfft) *sizeof(double));
    ret.y = (double *)malloc( (tmp_nfft) *sizeof(double));
    for(i = 0; i < tmp_nfft; i++) {
        double l = abs( *(tmp+i) );
        *(ret.y+i) = 10*log10(l*l/pri.n);
        *(ret.x+i) = i*fs/nfft;
    }
    free(tmp);
    ret.xlabel = "(Hz)";
    ret.ylabel = "(db)";
    ret.n = tmp_nfft;
}
