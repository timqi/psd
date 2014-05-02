#include "primitive.h"

int fs = 1000;
int nfft = 1024;
double arcorr_preci = 0.0001;
int arcorr_order = 20;
int burg_order_var = 20;
Pri pri;
Func ret;
PF pf = input;
