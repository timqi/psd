#include "psd.h"
#include "ui_psd.h"
//#include "primitive.h"



Psd::Psd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Psd)
{
    ui->setupUi(this);

    ui->plot->setTitle("原函数：cos(2*PI*40*i)+3*cos(2*PI*100*i)+w(n)");
    ui->plot->setAutoFillBackground( true );
    ui->plot->insertLegend( new QwtLegend(), QwtPlot::RightLegend );
    ui->plot->setAutoReplot( false );

    // canvas
    QwtPlotCanvas *canvas = new QwtPlotCanvas();
    canvas->setLineWidth( 1 );
    canvas->setFrameStyle( QFrame::Box | QFrame::Plain );
    canvas->setBorderRadius( 15 );

    QPalette canvasPalette( Qt::white );
    canvasPalette.setColor( QPalette::Foreground, QColor( 133, 190, 232 ) );
    canvas->setPalette( canvasPalette );
    ui->plot->setCanvas( canvas );

    // panning with the left mouse button
    ( void ) new QwtPlotPanner( canvas );
    // zoom in/out with the wheel
    ( void ) new QwtPlotMagnifier( canvas );

    cSin->setRenderHint( QwtPlotItem::RenderAntialiased );
    cSin->setLegendAttribute( QwtPlotCurve::LegendShowLine, false );
    cSin->setPen( Qt::red );
    cSin->attach( ui->plot );

    QwtPlotMarker *mY = new QwtPlotMarker();
    mY->setLabelAlignment( Qt::AlignRight | Qt::AlignTop );
    mY->setLineStyle( QwtPlotMarker::HLine );
    mY->setYValue( 0.0 );
    mY->attach( ui->plot );

    init();
    pf();
    populate();
}

Psd::~Psd()
{
    delete ui;
}

void Psd::populate()
{
    ui->plot->setAxisAutoScale( QwtPlot::xBottom );
    ui->plot->setAxisAutoScale( QwtPlot::yLeft );

    ui->plot->setAxisTitle( ui->plot->xBottom, ret.xlabel );
    ui->plot->setAxisTitle( ui->plot->yLeft, ret.ylabel );
    cSin->setRawSamples( ret.x, ret.y, ret.n);
    ui->plot->replot();
}

void Psd::enable_corr(bool judge)
{
    if(judge) {
        en_corr = true;
        ui->label_4->setEnabled(true);
        ui->accuracy_doubleSpinBox->setEnabled(true);
        ui->accuracy_radioButton->setEnabled(true);
        ui->order_radioButton->setEnabled(true);
        ui->order_spinBox->setEnabled(true);
    } else {
        en_corr = false;
        ui->label_4->setEnabled(false);
        ui->accuracy_doubleSpinBox->setEnabled(false);
        ui->accuracy_radioButton->setEnabled(false);
        ui->order_radioButton->setEnabled(false);
        ui->order_spinBox->setEnabled(false);
    }
}

void Psd::enable_burg(bool judge)
{
    if(judge) {
        en_burg = true;
        ui->label_5->setEnabled(true);
        ui->burg_order_spinBox->setEnabled(true);
    } else {
        en_burg = false;
        ui->label_5->setEnabled(false);
        ui->burg_order_spinBox->setEnabled(false);
    }
}

void Psd::on_fs_spinBox_valueChanged(int value)
{
    fs = value;
    nfft =  1 << (int)ceil(log((double)fs)/log(2.0));
    ui->nfft_label->setText( QString::number(nfft));
    init();
    pf();
    populate();
}

void Psd::on_direct_radioButton_clicked()
{
    if(en_corr)
        enable_corr(false);
    if(en_burg)
        enable_burg(false);
    pf = direct;
    pf();
    populate();
}

void Psd::on_primitive_radioButton_clicked()
{
    if(en_corr)
        enable_corr(false);
    if(en_burg)
        enable_burg(false);
    pf = input;
    pf();
    populate();
}

void Psd::on_corr_radioButton_clicked()
{
    if(en_corr)
        enable_corr(false);
    if(en_burg)
        enable_burg(false);
    pf = corr;
    pf();
    populate();
}

void Psd::on_arcorr_radioButton_clicked()
{
    if(en_burg)
        enable_burg(false);
    enable_corr(true);
    if(ui->accuracy_radioButton->isChecked())
        pf = arcorr;
    if(ui->order_radioButton->isChecked())
        pf = arcorr_or;
    pf();
    populate();

}

void Psd::on_accuracy_doubleSpinBox_valueChanged(double value)
{
    arcorr_preci = value;
    if(ui->accuracy_radioButton->isChecked()) {
        pf = arcorr;
        pf();
        populate();
    }
}

void Psd::on_accuracy_radioButton_clicked()
{
    pf = arcorr;
    pf();
    populate();
}

void Psd::on_order_radioButton_clicked()
{
    pf = arcorr_or;
    pf();
    populate();
}

void Psd::on_order_spinBox_valueChanged(int value)
{
    arcorr_order = value;
    if(ui->order_radioButton->isChecked()) {
        pf = arcorr_or;
        pf();
        populate();
    }
}

void Psd::on_burg_radioButton_clicked()
{
    if(en_corr)
        enable_corr(false);
    enable_burg(true);
    pf = burg_order;
    pf();
    populate();
}

void Psd::on_burg_order_spinBox_valueChanged(int value)
{
    burg_order_var = value;
    pf = burg_order;
    pf();
    populate();
}
