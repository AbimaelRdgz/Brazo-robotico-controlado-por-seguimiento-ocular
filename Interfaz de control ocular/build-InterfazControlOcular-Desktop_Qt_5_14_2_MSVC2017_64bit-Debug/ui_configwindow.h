/********************************************************************************
** Form generated from reading UI file 'configwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWINDOW_H
#define UI_CONFIGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QDoubleSpinBox *SBox_YHome;
    QDoubleSpinBox *SBox_ZHome;
    QLabel *label_7;
    QLabel *label_4;
    QDoubleSpinBox *SBox_PitchHome;
    QDoubleSpinBox *SBox_RowHome;
    QLabel *label_8;
    QDoubleSpinBox *SBox_YawHome;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *SBox_XHome;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QSpinBox *SBox_Vmax;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *CBox_Port;
    QLabel *label_3;
    QComboBox *CBox_BRate;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_12;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *SBox_EDT;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *Dir_Label;
    QPushButton *Btn_Dir;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QDoubleSpinBox *SBox_ArmStep;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLineEdit *IPCam;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_15;
    QDoubleSpinBox *SBox_RightLimit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QDoubleSpinBox *SBox_LeftLimit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QDoubleSpinBox *SBox_UpperLimit;

    void setupUi(QWidget *ConfigWindow)
    {
        if (ConfigWindow->objectName().isEmpty())
            ConfigWindow->setObjectName(QString::fromUtf8("ConfigWindow"));
        ConfigWindow->resize(437, 330);
        layoutWidget = new QWidget(ConfigWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 112, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SBox_YHome = new QDoubleSpinBox(layoutWidget);
        SBox_YHome->setObjectName(QString::fromUtf8("SBox_YHome"));

        gridLayout->addWidget(SBox_YHome, 1, 1, 1, 1);

        SBox_ZHome = new QDoubleSpinBox(layoutWidget);
        SBox_ZHome->setObjectName(QString::fromUtf8("SBox_ZHome"));

        gridLayout->addWidget(SBox_ZHome, 2, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        SBox_PitchHome = new QDoubleSpinBox(layoutWidget);
        SBox_PitchHome->setObjectName(QString::fromUtf8("SBox_PitchHome"));

        gridLayout->addWidget(SBox_PitchHome, 4, 1, 1, 1);

        SBox_RowHome = new QDoubleSpinBox(layoutWidget);
        SBox_RowHome->setObjectName(QString::fromUtf8("SBox_RowHome"));

        gridLayout->addWidget(SBox_RowHome, 3, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        SBox_YawHome = new QDoubleSpinBox(layoutWidget);
        SBox_YawHome->setObjectName(QString::fromUtf8("SBox_YawHome"));

        gridLayout->addWidget(SBox_YawHome, 5, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        SBox_XHome = new QDoubleSpinBox(layoutWidget);
        SBox_XHome->setObjectName(QString::fromUtf8("SBox_XHome"));

        gridLayout->addWidget(SBox_XHome, 0, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_9->addLayout(horizontalLayout);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        SBox_Vmax = new QSpinBox(layoutWidget);
        SBox_Vmax->setObjectName(QString::fromUtf8("SBox_Vmax"));
        SBox_Vmax->setMinimum(1);
        SBox_Vmax->setMaximum(400);
        SBox_Vmax->setValue(100);

        horizontalLayout_9->addWidget(SBox_Vmax);


        verticalLayout_2->addLayout(horizontalLayout_9);

        layoutWidget_2 = new QWidget(ConfigWindow);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(210, 10, 131, 67));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        CBox_Port = new QComboBox(layoutWidget_2);
        CBox_Port->setObjectName(QString::fromUtf8("CBox_Port"));

        gridLayout_2->addWidget(CBox_Port, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1, Qt::AlignRight);

        CBox_BRate = new QComboBox(layoutWidget_2);
        CBox_BRate->setObjectName(QString::fromUtf8("CBox_BRate"));

        gridLayout_2->addWidget(CBox_BRate, 1, 1, 1, 1);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ConfigWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(250, 280, 151, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_12 = new QLabel(ConfigWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 80, 121, 16));
        layoutWidget1 = new QWidget(ConfigWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(202, 170, 223, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(160, 0));

        horizontalLayout_2->addWidget(label_2);

        SBox_EDT = new QDoubleSpinBox(layoutWidget1);
        SBox_EDT->setObjectName(QString::fromUtf8("SBox_EDT"));
        SBox_EDT->setSingleStep(0.500000000000000);
        SBox_EDT->setValue(1.800000000000000);

        horizontalLayout_2->addWidget(SBox_EDT);

        layoutWidget2 = new QWidget(ConfigWindow);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(160, 100, 231, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Dir_Label = new QLineEdit(layoutWidget2);
        Dir_Label->setObjectName(QString::fromUtf8("Dir_Label"));

        horizontalLayout_3->addWidget(Dir_Label);

        Btn_Dir = new QPushButton(layoutWidget2);
        Btn_Dir->setObjectName(QString::fromUtf8("Btn_Dir"));
        Btn_Dir->setMaximumSize(QSize(25, 20));

        horizontalLayout_3->addWidget(Btn_Dir);

        layoutWidget_3 = new QWidget(ConfigWindow);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 250, 131, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(label_13);

        SBox_ArmStep = new QDoubleSpinBox(layoutWidget_3);
        SBox_ArmStep->setObjectName(QString::fromUtf8("SBox_ArmStep"));
        SBox_ArmStep->setMaximumSize(QSize(50, 16777215));
        SBox_ArmStep->setMaximum(5.000000000000000);
        SBox_ArmStep->setSingleStep(0.500000000000000);

        horizontalLayout_4->addWidget(SBox_ArmStep);

        layoutWidget3 = new QWidget(ConfigWindow);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(220, 140, 171, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_5->addWidget(label_14);

        IPCam = new QLineEdit(layoutWidget3);
        IPCam->setObjectName(QString::fromUtf8("IPCam"));
        IPCam->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(IPCam);

        layoutWidget4 = new QWidget(ConfigWindow);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(250, 200, 141, 80));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(label_15);

        SBox_RightLimit = new QDoubleSpinBox(layoutWidget4);
        SBox_RightLimit->setObjectName(QString::fromUtf8("SBox_RightLimit"));
        SBox_RightLimit->setMaximumSize(QSize(50, 16777215));
        SBox_RightLimit->setMaximum(5.000000000000000);
        SBox_RightLimit->setSingleStep(0.100000000000000);
        SBox_RightLimit->setValue(2.000000000000000);

        horizontalLayout_6->addWidget(SBox_RightLimit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_16 = new QLabel(layoutWidget4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_7->addWidget(label_16);

        SBox_LeftLimit = new QDoubleSpinBox(layoutWidget4);
        SBox_LeftLimit->setObjectName(QString::fromUtf8("SBox_LeftLimit"));
        SBox_LeftLimit->setMaximumSize(QSize(50, 16777215));
        SBox_LeftLimit->setMaximum(5.000000000000000);
        SBox_LeftLimit->setSingleStep(0.100000000000000);
        SBox_LeftLimit->setValue(0.400000000000000);

        horizontalLayout_7->addWidget(SBox_LeftLimit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_17 = new QLabel(layoutWidget4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_8->addWidget(label_17);

        SBox_UpperLimit = new QDoubleSpinBox(layoutWidget4);
        SBox_UpperLimit->setObjectName(QString::fromUtf8("SBox_UpperLimit"));
        SBox_UpperLimit->setMaximumSize(QSize(50, 16777215));
        SBox_UpperLimit->setMaximum(10.000000000000000);
        SBox_UpperLimit->setSingleStep(0.100000000000000);
        SBox_UpperLimit->setValue(7.500000000000000);

        horizontalLayout_8->addWidget(SBox_UpperLimit);


        verticalLayout_3->addLayout(horizontalLayout_8);


        retranslateUi(ConfigWindow);

        QMetaObject::connectSlotsByName(ConfigWindow);
    } // setupUi

    void retranslateUi(QWidget *ConfigWindow)
    {
        ConfigWindow->setWindowTitle(QCoreApplication::translate("ConfigWindow", "Configuraciones", nullptr));
        label_10->setText(QCoreApplication::translate("ConfigWindow", "Posicion Home:", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">PITCH:</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">Y:</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">YAW:</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">Z:</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">ROW:</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">X:</p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigWindow", "Velocidad:", nullptr));
        CBox_Port->setCurrentText(QString());
        label_3->setText(QCoreApplication::translate("ConfigWindow", "Baud Rate:", nullptr));
        label->setText(QCoreApplication::translate("ConfigWindow", "<html><head/><body><p align=\"right\">Puerto:</p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("ConfigWindow", "Direccion de archivos:", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigWindow", "Timepo de comando ocular:", nullptr));
        Btn_Dir->setText(QCoreApplication::translate("ConfigWindow", "...", nullptr));
        label_13->setText(QCoreApplication::translate("ConfigWindow", "Paso (cm):", nullptr));
        label_14->setText(QCoreApplication::translate("ConfigWindow", "Camara IP:", nullptr));
        IPCam->setText(QCoreApplication::translate("ConfigWindow", "192.168.1.70:8080", nullptr));
        label_15->setText(QCoreApplication::translate("ConfigWindow", "Limite Derecho:", nullptr));
        label_16->setText(QCoreApplication::translate("ConfigWindow", "Limite Izquierdo:", nullptr));
        label_17->setText(QCoreApplication::translate("ConfigWindow", "Limite Superior:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigWindow: public Ui_ConfigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
