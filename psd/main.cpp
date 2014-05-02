#include "psd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    printf("******************before burg\n");

    QApplication a(argc, argv);
    printf("******************before burg\n");

    Psd w;
    printf("******************before burg\n");
//    burg(pri.dt, pri.n, 4);

    w.show();

    return a.exec();
}
