#include "primitive.h"

double abs(Complex a)
{
    return 	sqrt(a.real*a.real+a.img*a.img);
}

Complex com_add(Complex a, Complex b)
{
    Complex ret;
    ret.real = a.real + b.real;
    ret.img = a.img + b.img;
    return ret;
}

Complex com_multi(Complex a, Complex b)
{
    Complex ret;
    ret.real = a.real*b.real - a.img*b.img;
    ret.img = a.real*b.img + a.img*b.real;
    return ret;
}

Complex com_neg(Complex a)
{
    Complex ret;
    ret.real = (-a.real);
    ret.img = (-a.img);
    return ret;
}

Complex com_div(Complex a, double b)
{
    Complex ret;
    ret.real = a.real/b;
    ret.img = a.img/b;
    return ret;
}

Complex com_di(double c, Complex a)
{
    Complex ret;
    double tmp = a.real*a.real + a.img*a.img;
    ret.real = a.real*c/tmp;
    ret.img = - a.img*c/tmp;
    return ret;
}
