/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *Email;
    QLineEdit *FullName;
    QPushButton *Register_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(372, 139);
        Email = new QLineEdit(Register);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setGeometry(QRect(90, 30, 251, 20));
        FullName = new QLineEdit(Register);
        FullName->setObjectName(QString::fromUtf8("FullName"));
        FullName->setGeometry(QRect(90, 70, 251, 20));
        Register_2 = new QPushButton(Register);
        Register_2->setObjectName(QString::fromUtf8("Register_2"));
        Register_2->setGeometry(QRect(150, 100, 75, 23));
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 47, 13));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 61, 16));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        Register_2->setText(QCoreApplication::translate("Register", "Register", nullptr));
        label->setText(QCoreApplication::translate("Register", "EMAIL", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "FULLNAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
