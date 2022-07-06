/********************************************************************************
** Form generated from reading UI file 'interfazocular.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZOCULAR_H
#define UI_INTERFAZOCULAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfazOcular
{
public:
    QWidget *centralwidget;
    QPushButton *Btn_L;
    QPushButton *Btn_R;
    QPushButton *Btn_Settings;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *in_Y;
    QLabel *label_2;
    QLineEdit *in_X;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *in_Z;
    QLineEdit *in_Pitch;
    QLineEdit *in_Roll;
    QLineEdit *in_Yaw;
    QLabel *Box_faceVideo;
    QLabel *Box_armVideo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *Option_Left2;
    QLabel *Option_Left1;
    QPushButton *Btn_Up;
    QLabel *Option_Right1;
    QLabel *Option_Right2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InterfazOcular)
    {
        if (InterfazOcular->objectName().isEmpty())
            InterfazOcular->setObjectName(QString::fromUtf8("InterfazOcular"));
        InterfazOcular->resize(1051, 600);
        centralwidget = new QWidget(InterfazOcular);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Btn_L = new QPushButton(centralwidget);
        Btn_L->setObjectName(QString::fromUtf8("Btn_L"));
        Btn_L->setGeometry(QRect(61, 500, 51, 61));
        Btn_R = new QPushButton(centralwidget);
        Btn_R->setObjectName(QString::fromUtf8("Btn_R"));
        Btn_R->setGeometry(QRect(920, 499, 51, 61));
        Btn_Settings = new QPushButton(centralwidget);
        Btn_Settings->setObjectName(QString::fromUtf8("Btn_Settings"));
        Btn_Settings->setGeometry(QRect(10, 9, 31, 31));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(-20, 69, 301, 121));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 2, 1, 1, Qt::AlignRight);

        in_Y = new QLineEdit(layoutWidget_2);
        in_Y->setObjectName(QString::fromUtf8("in_Y"));
        in_Y->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_Y, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignRight);

        in_X = new QLineEdit(layoutWidget_2);
        in_X->setObjectName(QString::fromUtf8("in_X"));
        in_X->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_X, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(80, 16777215));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 2, 1, 1, Qt::AlignRight);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(80, 16777215));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignRight);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(80, 16777215));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignRight);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(80, 16777215));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 2, 1, 1, Qt::AlignRight);

        in_Z = new QLineEdit(layoutWidget_2);
        in_Z->setObjectName(QString::fromUtf8("in_Z"));
        in_Z->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_Z, 2, 1, 1, 1);

        in_Pitch = new QLineEdit(layoutWidget_2);
        in_Pitch->setObjectName(QString::fromUtf8("in_Pitch"));
        in_Pitch->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_Pitch, 1, 3, 1, 1);

        in_Roll = new QLineEdit(layoutWidget_2);
        in_Roll->setObjectName(QString::fromUtf8("in_Roll"));
        in_Roll->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_Roll, 0, 3, 1, 1);

        in_Yaw = new QLineEdit(layoutWidget_2);
        in_Yaw->setObjectName(QString::fromUtf8("in_Yaw"));
        in_Yaw->setMaximumSize(QSize(69, 16777215));

        gridLayout->addWidget(in_Yaw, 2, 3, 1, 1);

        Box_faceVideo = new QLabel(centralwidget);
        Box_faceVideo->setObjectName(QString::fromUtf8("Box_faceVideo"));
        Box_faceVideo->setGeometry(QRect(10, 209, 300, 200));
        Box_faceVideo->setFrameShape(QFrame::Box);
        Box_armVideo = new QLabel(centralwidget);
        Box_armVideo->setObjectName(QString::fromUtf8("Box_armVideo"));
        Box_armVideo->setGeometry(QRect(320, 9, 720, 480));
        Box_armVideo->setFrameShape(QFrame::Box);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(121, 500, 791, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Option_Left2 = new QLabel(layoutWidget);
        Option_Left2->setObjectName(QString::fromUtf8("Option_Left2"));
        Option_Left2->setMaximumSize(QSize(153, 16777215));
        Option_Left2->setAutoFillBackground(true);
        Option_Left2->setStyleSheet(QString::fromUtf8(""));
        Option_Left2->setFrameShape(QFrame::NoFrame);
        Option_Left2->setFrameShadow(QFrame::Plain);
        Option_Left2->setScaledContents(false);
        Option_Left2->setWordWrap(false);
        Option_Left2->setMargin(15);

        horizontalLayout->addWidget(Option_Left2);

        Option_Left1 = new QLabel(layoutWidget);
        Option_Left1->setObjectName(QString::fromUtf8("Option_Left1"));
        Option_Left1->setMaximumSize(QSize(153, 16777215));
        Option_Left1->setAutoFillBackground(true);
        Option_Left1->setStyleSheet(QString::fromUtf8(""));
        Option_Left1->setFrameShape(QFrame::NoFrame);
        Option_Left1->setFrameShadow(QFrame::Plain);
        Option_Left1->setScaledContents(false);
        Option_Left1->setWordWrap(false);
        Option_Left1->setMargin(15);

        horizontalLayout->addWidget(Option_Left1);

        Btn_Up = new QPushButton(layoutWidget);
        Btn_Up->setObjectName(QString::fromUtf8("Btn_Up"));
        Btn_Up->setMinimumSize(QSize(0, 59));
        Btn_Up->setMaximumSize(QSize(153, 16777215));
        Btn_Up->setAutoDefault(false);

        horizontalLayout->addWidget(Btn_Up);

        Option_Right1 = new QLabel(layoutWidget);
        Option_Right1->setObjectName(QString::fromUtf8("Option_Right1"));
        Option_Right1->setMaximumSize(QSize(153, 16777215));
        Option_Right1->setAutoFillBackground(true);
        Option_Right1->setStyleSheet(QString::fromUtf8(""));
        Option_Right1->setFrameShape(QFrame::NoFrame);
        Option_Right1->setFrameShadow(QFrame::Plain);
        Option_Right1->setScaledContents(false);
        Option_Right1->setWordWrap(false);
        Option_Right1->setMargin(15);

        horizontalLayout->addWidget(Option_Right1);

        Option_Right2 = new QLabel(layoutWidget);
        Option_Right2->setObjectName(QString::fromUtf8("Option_Right2"));
        Option_Right2->setMaximumSize(QSize(153, 16777215));
        Option_Right2->setAutoFillBackground(true);
        Option_Right2->setStyleSheet(QString::fromUtf8(""));
        Option_Right2->setFrameShape(QFrame::NoFrame);
        Option_Right2->setFrameShadow(QFrame::Plain);
        Option_Right2->setScaledContents(false);
        Option_Right2->setWordWrap(false);
        Option_Right2->setMargin(15);

        horizontalLayout->addWidget(Option_Right2);

        InterfazOcular->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InterfazOcular);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1051, 21));
        InterfazOcular->setMenuBar(menubar);
        statusbar = new QStatusBar(InterfazOcular);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InterfazOcular->setStatusBar(statusbar);

        retranslateUi(InterfazOcular);

        Btn_Up->setDefault(false);


        QMetaObject::connectSlotsByName(InterfazOcular);
    } // setupUi

    void retranslateUi(QMainWindow *InterfazOcular)
    {
        InterfazOcular->setWindowTitle(QCoreApplication::translate("InterfazOcular", "InterfazOcular", nullptr));
        Btn_L->setText(QCoreApplication::translate("InterfazOcular", "PushButton", nullptr));
        Btn_R->setText(QCoreApplication::translate("InterfazOcular", "PushButton", nullptr));
        Btn_Settings->setText(QCoreApplication::translate("InterfazOcular", "Configuracion", nullptr));
        label_6->setText(QCoreApplication::translate("InterfazOcular", "Yaw:", nullptr));
        label_2->setText(QCoreApplication::translate("InterfazOcular", "Y:", nullptr));
        label_4->setText(QCoreApplication::translate("InterfazOcular", "Roll:", nullptr));
        label_3->setText(QCoreApplication::translate("InterfazOcular", "Z:", nullptr));
        label->setText(QCoreApplication::translate("InterfazOcular", "X:", nullptr));
        label_5->setText(QCoreApplication::translate("InterfazOcular", "Pitch:", nullptr));
        Box_faceVideo->setText(QString());
        Box_armVideo->setText(QString());
        Option_Left2->setText(QCoreApplication::translate("InterfazOcular", "Left2", nullptr));
        Option_Left1->setText(QCoreApplication::translate("InterfazOcular", "Left1", nullptr));
        Btn_Up->setText(QCoreApplication::translate("InterfazOcular", "PushButton", nullptr));
        Option_Right1->setText(QCoreApplication::translate("InterfazOcular", "Right1", nullptr));
        Option_Right2->setText(QCoreApplication::translate("InterfazOcular", "Right2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfazOcular: public Ui_InterfazOcular {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZOCULAR_H
