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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Psd
{
public:
    QHBoxLayout *horizontalLayout_2;
    QwtPlot *plot;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *fs_spinBox;
    QLabel *label_2;
    QLabel *nfft_label;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *primitive_radioButton;
    QRadioButton *direct_radioButton;
    QRadioButton *corr_radioButton;
    QRadioButton *arcorr_radioButton;
    QRadioButton *burg_radioButton;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *argroup;
    QGridLayout *gridLayout;
    QRadioButton *accuracy_radioButton;
    QRadioButton *order_radioButton;
    QSpinBox *order_spinBox;
    QDoubleSpinBox *accuracy_doubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *burg_order_spinBox;
    QSpacerItem *verticalSpacer;

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
        horizontalLayout_2 = new QHBoxLayout(Psd);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        plot = new QwtPlot(Psd);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setMinimumSize(QSize(858, 482));
        plot->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(plot);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, 6, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Psd);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 46));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_3->setMargin(0);

        verticalLayout_3->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Psd);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        fs_spinBox = new QSpinBox(Psd);
        fs_spinBox->setObjectName(QStringLiteral("fs_spinBox"));
        fs_spinBox->setMinimum(10);
        fs_spinBox->setMaximum(9999);
        fs_spinBox->setSingleStep(100);
        fs_spinBox->setValue(1000);

        horizontalLayout->addWidget(fs_spinBox);

        label_2 = new QLabel(Psd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        nfft_label = new QLabel(Psd);
        nfft_label->setObjectName(QStringLiteral("nfft_label"));
        sizePolicy1.setHeightForWidth(nfft_label->sizePolicy().hasHeightForWidth());
        nfft_label->setSizePolicy(sizePolicy1);
        nfft_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(nfft_label);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(Psd);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        primitive_radioButton = new QRadioButton(Psd);
        primitive_radioButton->setObjectName(QStringLiteral("primitive_radioButton"));
        primitive_radioButton->setChecked(true);

        verticalLayout_2->addWidget(primitive_radioButton);

        direct_radioButton = new QRadioButton(Psd);
        direct_radioButton->setObjectName(QStringLiteral("direct_radioButton"));

        verticalLayout_2->addWidget(direct_radioButton);

        corr_radioButton = new QRadioButton(Psd);
        corr_radioButton->setObjectName(QStringLiteral("corr_radioButton"));

        verticalLayout_2->addWidget(corr_radioButton);

        arcorr_radioButton = new QRadioButton(Psd);
        arcorr_radioButton->setObjectName(QStringLiteral("arcorr_radioButton"));

        verticalLayout_2->addWidget(arcorr_radioButton);

        burg_radioButton = new QRadioButton(Psd);
        burg_radioButton->setObjectName(QStringLiteral("burg_radioButton"));

        verticalLayout_2->addWidget(burg_radioButton);


        verticalLayout_4->addLayout(verticalLayout_2);

        line_2 = new QFrame(Psd);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        argroup = new QGroupBox(Psd);
        argroup->setObjectName(QStringLiteral("argroup"));
        argroup->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(argroup->sizePolicy().hasHeightForWidth());
        argroup->setSizePolicy(sizePolicy3);
        argroup->setFlat(true);
        argroup->setCheckable(false);
        gridLayout = new QGridLayout(argroup);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 10, 0, 0);
        accuracy_radioButton = new QRadioButton(argroup);
        accuracy_radioButton->setObjectName(QStringLiteral("accuracy_radioButton"));
        accuracy_radioButton->setEnabled(false);
        accuracy_radioButton->setChecked(false);

        gridLayout->addWidget(accuracy_radioButton, 1, 0, 1, 1);

        order_radioButton = new QRadioButton(argroup);
        order_radioButton->setObjectName(QStringLiteral("order_radioButton"));
        order_radioButton->setEnabled(false);
        order_radioButton->setChecked(true);

        gridLayout->addWidget(order_radioButton, 0, 0, 1, 1);

        order_spinBox = new QSpinBox(argroup);
        order_spinBox->setObjectName(QStringLiteral("order_spinBox"));
        order_spinBox->setEnabled(false);
        order_spinBox->setMaximum(200);
        order_spinBox->setValue(20);

        gridLayout->addWidget(order_spinBox, 0, 1, 1, 1);

        accuracy_doubleSpinBox = new QDoubleSpinBox(argroup);
        accuracy_doubleSpinBox->setObjectName(QStringLiteral("accuracy_doubleSpinBox"));
        accuracy_doubleSpinBox->setEnabled(false);
        accuracy_doubleSpinBox->setDecimals(7);
        accuracy_doubleSpinBox->setMaximum(10);
        accuracy_doubleSpinBox->setSingleStep(1e-05);
        accuracy_doubleSpinBox->setValue(0.0001);

        gridLayout->addWidget(accuracy_doubleSpinBox, 1, 1, 1, 1);


        verticalLayout->addWidget(argroup);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(Psd);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(label_5);

        burg_order_spinBox = new QSpinBox(Psd);
        burg_order_spinBox->setObjectName(QStringLiteral("burg_order_spinBox"));
        burg_order_spinBox->setEnabled(false);
        burg_order_spinBox->setMaximum(200);
        burg_order_spinBox->setValue(20);

        horizontalLayout_4->addWidget(burg_order_spinBox);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(13, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);

        label_3->raise();
        plot->raise();
        line->raise();
        line_2->raise();

        retranslateUi(Psd);

        QMetaObject::connectSlotsByName(Psd);
    } // setupUi

    void retranslateUi(QWidget *Psd)
    {
        Psd->setWindowTitle(QApplication::translate("Psd", "\345\212\237\347\216\207\350\260\261\345\210\206\346\236\220     ----\344\275\234\350\200\205\357\274\232\346\210\232\346\227\227 [ QiQiHyper@gmail.com ]", 0));
        label_3->setText(QApplication::translate("Psd", "[0,1)\344\271\213\351\227\264\346\214\211fs[10,9999]\n"
"\351\207\207\346\240\267\357\274\214\345\201\232nfft\347\202\271fft\345\217\230\346\215\242\343\200\202", 0));
        label->setText(QApplication::translate("Psd", "fs:", 0));
        label_2->setText(QApplication::translate("Psd", "nfft:", 0));
        nfft_label->setText(QApplication::translate("Psd", "1024", 0));
        primitive_radioButton->setText(QApplication::translate("Psd", "\345\216\237\345\207\275\346\225\260:", 0));
        direct_radioButton->setText(QApplication::translate("Psd", "\347\233\264\346\216\245\346\263\225", 0));
        corr_radioButton->setText(QApplication::translate("Psd", "\347\233\270\345\205\263\345\207\275\346\225\260\346\263\225", 0));
        arcorr_radioButton->setText(QApplication::translate("Psd", "\347\233\270\345\205\263AR\346\250\241\345\236\213\346\263\225", 0));
        burg_radioButton->setText(QApplication::translate("Psd", "burg", 0));
        argroup->setTitle(QApplication::translate("Psd", "\347\233\270\345\205\263AR\346\250\241\345\236\213\350\256\276\347\275\256:", 0));
        accuracy_radioButton->setText(QApplication::translate("Psd", "\347\262\276\345\272\246:", 0));
        order_radioButton->setText(QApplication::translate("Psd", "\351\230\266\346\225\260:", 0));
        label_5->setText(QApplication::translate("Psd", "burg \351\230\266\346\225\260:", 0));
    } // retranslateUi

};

namespace Ui {
    class Psd: public Ui_Psd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSD_H
