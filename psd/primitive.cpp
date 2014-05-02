#include "primitive.h"

double randn()
{
    double sum = 0.0; int i;
    for(i = 0; i < 12; i++)
    {
     sum += random();
    }
    sum -= 6;
    return sum;
}


void init()
{
    int j; double i; double step = (double)1/fs;
    if( pri.dt ) free( pri.dt );
    pri.dt = ( Complex * )malloc( (fs+1) * sizeof(Complex) );
    for(i = 0.0, j = 0; i < 1; i += step, j++) {
        (pri.dt+j)->real = cos(2*PI*40*i)+3*cos(2*PI*100*i)+randn();
        (pri.dt+j)->img = 0.0;
    }
    pri.n = j;
}


void input()
{
    int j; double i; double step = (double)1/fs;
    if( ret.x ) free(ret.x); if( ret.y ) free( ret.y );
    ret.x = (double *)malloc( (pri.n) *sizeof(double));
    ret.y = (double *)malloc( (pri.n) *sizeof(double));
    for(i = 0.0, j = 0; j < pri.n; i += step, j++) {
        *(ret.x+j) = (double)i;
        *(ret.y+j) = (pri.dt+j)->real;
    }
    ret.xlabel = "时间";
    ret.ylabel = "幅值";
    ret.n = pri.n;
}
