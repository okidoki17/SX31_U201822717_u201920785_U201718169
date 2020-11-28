/********************************************************************************
** Form generated from reading UI file 'muro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MURO_H
#define UI_MURO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Muro
{
public:
    QLineEdit *Mail;
    QLineEdit *Nombre;
    QLineEdit *JoinDate;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ExitButton;
    QListWidget *Publications;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *Muro)
    {
        if (Muro->objectName().isEmpty())
            Muro->setObjectName(QString::fromUtf8("Muro"));
        Muro->resize(729, 400);
        Mail = new QLineEdit(Muro);
        Mail->setObjectName(QString::fromUtf8("Mail"));
        Mail->setGeometry(QRect(560, 30, 151, 20));
        Mail->setReadOnly(true);
        Nombre = new QLineEdit(Muro);
        Nombre->setObjectName(QString::fromUtf8("Nombre"));
        Nombre->setGeometry(QRect(560, 80, 151, 20));
        Nombre->setReadOnly(true);
        JoinDate = new QLineEdit(Muro);
        JoinDate->setObjectName(QString::fromUtf8("JoinDate"));
        JoinDate->setGeometry(QRect(560, 140, 151, 20));
        JoinDate->setReadOnly(true);
        label = new QLabel(Muro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 10, 47, 13));
        label_2 = new QLabel(Muro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 60, 47, 13));
        label_3 = new QLabel(Muro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 120, 61, 16));
        ExitButton = new QPushButton(Muro);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(640, 180, 75, 23));
        Publications = new QListWidget(Muro);
        Publications->setObjectName(QString::fromUtf8("Publications"));
        Publications->setGeometry(QRect(20, 40, 511, 341));
        label_4 = new QLabel(Muro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 10, 81, 16));
        pushButton = new QPushButton(Muro);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(550, 180, 75, 23));

        retranslateUi(Muro);

        QMetaObject::connectSlotsByName(Muro);
    } // setupUi

    void retranslateUi(QWidget *Muro)
    {
        Muro->setWindowTitle(QCoreApplication::translate("Muro", "Form", nullptr));
        label->setText(QCoreApplication::translate("Muro", "MAIL", nullptr));
        label_2->setText(QCoreApplication::translate("Muro", "NOMBRE", nullptr));
        label_3->setText(QCoreApplication::translate("Muro", "JOIN DATE", nullptr));
        ExitButton->setText(QCoreApplication::translate("Muro", "Exit", nullptr));
        label_4->setText(QCoreApplication::translate("Muro", "PUBLICATIONS", nullptr));
        pushButton->setText(QCoreApplication::translate("Muro", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Muro: public Ui_Muro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MURO_H
