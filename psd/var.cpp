#include "primitive.h"

int fs = 1000;
int nfft = 1024;
double arcorr_preci = 0.001;
int arcorr_order = 4;
int burg_order_var = 4;
Pri pri;
Func ret;
PF pf = input;
