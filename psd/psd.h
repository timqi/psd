#ifndef PSD_H
#define PSD_H

#include "primitive.h"
#include <QWidget>
#include <qwt_plot_curve.h>

namespace Ui {
class Psd;
}

class Psd : public QWidget
{
    Q_OBJECT

public:
    explicit Psd(QWidget *parent = 0);
    ~Psd();

private slots:
    void on_fs_spinBox_valueChanged(int);
    void on_direct_radioButton_clicked();
    void on_primitive_radioButton_clicked();
    void on_corr_radioButton_clicked();
    void on_arcorr_radioButton_clicked();
    void on_accuracy_doubleSpinBox_valueChanged(double);
    void on_accuracy_radioButton_clicked();
    void on_order_radioButton_clicked();
    void on_order_spinBox_valueChanged(int);

    void on_burg_radioButton_clicked();

    void on_burg_order_spinBox_valueChanged(int);

private:
    Ui::Psd *ui;
    void populate();
    QwtPlotCurve *cSin = new QwtPlotCurve();
    void enable_corr(bool);
    void enable_burg(bool);

    bool en_corr = false;
    bool en_burg = false;
};

#endif // PSD_H
