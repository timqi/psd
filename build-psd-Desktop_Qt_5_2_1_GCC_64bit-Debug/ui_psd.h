/********************************************************************************
** Form generated from reading UI file 'psd.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSD_H
#define UI_PSD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Psd
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *accuracy_radioButton;
    QDoubleSpinBox *accuracy_doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *order_radioButton;
    QSpinBox *order_spinBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *primitive_radioButton;
    QRadioButton *direct_radioButton;
    QRadioButton *corr_radioButton;
    QRadioButton *arcorr_radioButton;
    QRadioButton *burg_radioButton;
    QLabel *label_4;
    QwtPlot *plot;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *fs_spinBox;
    QLabel *label_2;
    QLabel *nfft_label;
    QFrame *line;
    QFrame *line_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *burg_order_spinBox;

    void setupUi(QWidget *Psd)
    {
        if (Psd->objectName().isEmpty())
            Psd->setObjectName(QStringLiteral("Psd"));
        Psd->resize(1049, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Psd->sizePolicy().hasHeightForWidth());
        Psd->setSizePolicy(sizePolicy);
        label_3 = new QLabel(Psd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 30, 181, 51));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_3->setMargin(0);
        layoutWidget = new QWidget(Psd);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(850, 320, 181, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        accuracy_radioButton = new QRadioButton(layoutWidget);
        accuracy_radioButton->setObjectName(QStringLiteral("accuracy_radioButton"));
        accuracy_radioButton->setEnabled(false);
        accuracy_radioButton->setChecked(true);

        horizontalLayout_3->addWidget(accuracy_radioButton);

        accuracy_doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        accuracy_doubleSpinBox->setObjectName(QStringLiteral("accuracy_doubleSpinBox"));
        accuracy_doubleSpinBox->setEnabled(false);
        accuracy_doubleSpinBox->setDecimals(7);
        accuracy_doubleSpinBox->setMaximum(10);
        accuracy_doubleSpinBox->setSingleStep(0.0001);
        accuracy_doubleSpinBox->setValue(0.0001);

        horizontalLayout_3->addWidget(accuracy_doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        order_radioButton = new QRadioButton(layoutWidget);
        order_radioButton->setObjectName(QStringLiteral("order_radioButton"));
        order_radioButton->setEnabled(false);

        horizontalLayout_2->addWidget(order_radioButton);

        order_spinBox = new QSpinBox(layoutWidget);
        order_spinBox->setObjectName(QStringLiteral("order_spinBox"));
        order_spinBox->setEnabled(false);
        order_spinBox->setMaximum(200);
        order_spinBox->setValue(4);

        horizontalLayout_2->addWidget(order_spinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Psd);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(830, 140, 191, 131));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        primitive_radioButton = new QRadioButton(layoutWidget1);
        primitive_radioButton->setObjectName(QStringLiteral("primitive_radioButton"));
        primitive_radioButton->setChecked(true);

        verticalLayout_2->addWidget(primitive_radioButton);

        direct_radioButton = new QRadioButton(layoutWidget1);
        direct_radioButton->setObjectName(QStringLiteral("direct_radioButton"));

        verticalLayout_2->addWidget(direct_radioButton);

        corr_radioButton = new QRadioButton(layoutWidget1);
        corr_radioButton->setObjectName(QStringLiteral("corr_radioButton"));

        verticalLayout_2->addWidget(corr_radioButton);

        arcorr_radioButton = new QRadioButton(layoutWidget1);
        arcorr_radioButton->setObjectName(QStringLiteral("arcorr_radioButton"));

        verticalLayout_2->addWidget(arcorr_radioButton);

        burg_radioButton = new QRadioButton(layoutWidget1);
        burg_radioButton->setObjectName(QStringLiteral("burg_radioButton"));

        verticalLayout_2->addWidget(burg_radioButton);

        label_4 = new QLabel(Psd);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(830, 290, 141, 31));
        plot = new QwtPlot(Psd);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(0, 10, 821, 481));
        plot->setAutoFillBackground(true);
        layoutWidget2 = new QWidget(Psd);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(820, 90, 181, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fs_spinBox = new QSpinBox(layoutWidget2);
        fs_spinBox->setObjectName(QStringLiteral("fs_spinBox"));
        fs_spinBox->setMinimum(100);
        fs_spinBox->setMaximum(99999);
        fs_spinBox->setSingleStep(100);
        fs_spinBox->setValue(1000);

        horizontalLayout->addWidget(fs_spinBox);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        nfft_label = new QLabel(layoutWidget2);
        nfft_label->setObjectName(QStringLiteral("nfft_label"));
        nfft_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(nfft_label);

        line = new QFrame(Psd);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(820, 120, 211, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Psd);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(820, 270, 211, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(Psd);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(830, 380, 201, 25));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);

        horizontalLayout_4->addWidget(label_5);

        burg_order_spinBox = new QSpinBox(widget);
        burg_order_spinBox->setObjectName(QStringLiteral("burg_order_spinBox"));
        burg_order_spinBox->setEnabled(false);
        burg_order_spinBox->setMaximum(200);
        burg_order_spinBox->setValue(4);

        horizontalLayout_4->addWidget(burg_order_spinBox);

        label_3->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_4->raise();
        plot->raise();
        line->raise();
        line_2->raise();
        label_5->raise();
        burg_order_spinBox->raise();

        retranslateUi(Psd);

        QMetaObject::connectSlotsByName(Psd);
    } // setupUi

    void retranslateUi(QWidget *Psd)
    {
        Psd->setWindowTitle(QApplication::translate("Psd", "\345\212\237\347\216\207\350\260\261\345\210\206\346\236\220     ----\344\275\234\350\200\205\357\274\232\346\210\232\346\227\227 [ QiQiHyper@gmail.com ]", 0));
        label_3->setText(QApplication::translate("Psd", "[0,1)\344\271\213\351\227\264\346\214\211fs[100,9999 9]\351\207\207\346\240\267\357\274\214\345\201\232nfft\347\202\271fft\345\217\230\346\215\242\343\200\202", 0));
        accuracy_radioButton->setText(QApplication::translate("Psd", "\347\262\276\345\272\246:", 0));
        order_radioButton->setText(QApplication::translate("Psd", "\351\230\266\346\225\260:", 0));
        primitive_radioButton->setText(QApplication::translate("Psd", "\345\216\237\345\207\275\346\225\260:", 0));
        direct_radioButton->setText(QApplication::translate("Psd", "\347\233\264\346\216\245\346\263\225", 0));
        corr_radioButton->setText(QApplication::translate("Psd", "\347\233\270\345\205\263\345\207\275\346\225\260\346\263\225", 0));
        arcorr_radioButton->setText(QApplication::translate("Psd", "\347\233\270\345\205\263AR\346\250\241\345\236\213\346\263\225", 0));
        burg_radioButton->setText(QApplication::translate("Psd", "burg", 0));
        label_4->setText(QApplication::translate("Psd", "\347\233\270\345\205\263AR\346\250\241\345\236\213\350\256\276\347\275\256:", 0));
        label->setText(QApplication::translate("Psd", "fs:", 0));
        label_2->setText(QApplication::translate("Psd", "nfft:", 0));
        nfft_label->setText(QApplication::translate("Psd", "1024", 0));
        label_5->setText(QApplication::translate("Psd", "burg \351\230\266\346\225\260:", 0));
    } // retranslateUi

};

namespace Ui {
    class Psd: public Ui_Psd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSD_H
