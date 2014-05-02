#include "primitive.h"

Complex *fft(Complex *in, int n, int nfft)
{
    if(n > nfft) {
        printf("In fft().\nn must <= nfft.\nExit...\n");
        exit(5);
    }
    int i, j=0, k;
    Complex tmp;

    Complex *x = (Complex *)malloc(nfft*sizeof(Complex));
    for(i = 0; i < n; i++)
        *(x+i) = *(in+i);
    for(; i < nfft; i++) {
        Complex tmp;
        tmp.real = 0.0; tmp.img = 0.0;
        *(x+i) = tmp;
    }

    for(i = 0; i < nfft-1; i++) {
        if(i < j) {
            tmp = x[j];
            x[j] = x[i];
            x[i] = tmp;
        }
        k = nfft/2;
        while(k <= j) {
            j -= k;
            k /= 2;
        }
        j += k;
    }

    int stage, le, lei, ip;
    Complex u, w;

    j = nfft;
    for(stage = 1; (j = j/2) != 1; stage++);

    for(k = 1; k <= stage; k++) {
        le = 2 << (k-1);
            lei = le/2;
        u.real = 1.0; u.img = 0.0;
        w.real = cos(PI/lei); w.img = sin(PI/lei);
        for(j = 0; j <= lei-1; j++) {
            for(i = j; i <= nfft-1; i += le) {
                ip = i + lei;
                tmp = com_multi(x[ip], u);
                x[ip].real = x[i].real - tmp.real;
                x[ip].img = x[i].img - tmp.img;
                x[i].real = x[i].real + tmp.real;
                x[i].img = x[i].img + tmp.img;

            }
            u = com_multi(u, w);
        }
    }
    return x;
}
