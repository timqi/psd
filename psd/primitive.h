#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <qapplication.h>
#include <qlayout.h>
#include <qwt_plot.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_curve.h>
#include <qwt_legend.h>
#include <qwt_point_data.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_magnifier.h>
#include <qwt_text.h>
#include <qwt_symbol.h>
#include <qwt_math.h>
#include <math.h>

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define PI M_PI
#define DBL_MAX 9999
#define INIT_NODE(r) ((r)->prev = NULL)
#define random() ((double)rand()/RAND_MAX)

typedef struct func {
    double *x;
    double *y;
    QString xlabel;
    QString ylabel;
    int n;
} Func;

typedef struct {
    double real;
    double img;
} Complex;

typedef struct input_pri {
    Complex *dt;
    int n;
} Pri;

typedef struct rnode {
    Complex dt;
    struct rnode *prev;
} RNode;

typedef struct knode {
    double dt;
    struct knode *prev;
} KNode;

typedef struct ar_model {
    int i;
    Complex *a;
    double p;
} ARModel;

typedef void (*PF)();

extern int fs;
extern int nfft;
extern Pri pri;
extern Func ret;
extern void init();
extern double arcorr_preci;
extern int arcorr_order;
extern int burg_order_var;
extern PF pf;

extern double abs( Complex );
extern Complex com_add(Complex , Complex );
extern Complex com_multi(Complex, Complex );
extern Complex com_multi(Complex, Complex );
extern Complex com_neg(Complex );
extern Complex com_div(Complex, double );
extern Complex com_di(double, Complex);


extern void insert(Complex, RNode *);
extern void destroy(RNode *);
extern void insert_d(double, KNode *);
extern void destroy_d(KNode *);

extern void psd(ARModel);
extern ARModel burg(Complex *, int, int);
extern void burg_order();
extern Complex *fft(Complex *, int, int);
extern Complex xcorr(Complex *, int, int);
extern void corr();
extern void arcorr();
extern void arcorr_or();
extern void input();
extern void direct();

#endif // PRIMITIVE_H
