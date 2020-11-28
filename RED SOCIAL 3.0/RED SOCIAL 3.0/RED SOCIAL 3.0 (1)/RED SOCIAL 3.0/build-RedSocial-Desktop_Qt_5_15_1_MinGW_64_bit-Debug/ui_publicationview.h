/********************************************************************************
** Form generated from reading UI file 'publicationview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLICATIONVIEW_H
#define UI_PUBLICATIONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PublicationView
{
public:
    QLineEdit *Title;
    QLineEdit *Desc;
    QLineEdit *PubDate;
    QLineEdit *NumLikes;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *Comments;
    QPushButton *Exit;
    QPushButton *Add;
    QLineEdit *NewComment;
    QLabel *label_4;

    void setupUi(QWidget *PublicationView)
    {
        if (PublicationView->objectName().isEmpty())
            PublicationView->setObjectName(QString::fromUtf8("PublicationView"));
        PublicationView->resize(612, 404);
        Title = new QLineEdit(PublicationView);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(40, 10, 531, 20));
        Title->setReadOnly(true);
        Desc = new QLineEdit(PublicationView);
        Desc->setObjectName(QString::fromUtf8("Desc"));
        Desc->setGeometry(QRect(90, 50, 141, 20));
        Desc->setReadOnly(true);
        PubDate = new QLineEdit(PublicationView);
        PubDate->setObjectName(QString::fromUtf8("PubDate"));
        PubDate->setGeometry(QRect(90, 80, 141, 20));
        PubDate->setReadOnly(true);
        NumLikes = new QLineEdit(PublicationView);
        NumLikes->setObjectName(QString::fromUtf8("NumLikes"));
        NumLikes->setGeometry(QRect(90, 110, 51, 20));
        NumLikes->setReadOnly(true);
        label = new QLabel(PublicationView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 47, 13));
        label_2 = new QLabel(PublicationView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 61, 16));
        label_3 = new QLabel(PublicationView);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 51, 16));
        Comments = new QListWidget(PublicationView);
        Comments->setObjectName(QString::fromUtf8("Comments"));
        Comments->setGeometry(QRect(10, 150, 581, 161));
        Exit = new QPushButton(PublicationView);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(520, 370, 75, 23));
        Add = new QPushButton(PublicationView);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(520, 340, 75, 23));
        NewComment = new QLineEdit(PublicationView);
        NewComment->setObjectName(QString::fromUtf8("NewComment"));
        NewComment->setGeometry(QRect(10, 350, 481, 41));
        label_4 = new QLabel(PublicationView);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 330, 111, 16));

        retranslateUi(PublicationView);

        QMetaObject::connectSlotsByName(PublicationView);
    } // setupUi

    void retranslateUi(QWidget *PublicationView)
    {
        PublicationView->setWindowTitle(QCoreApplication::translate("PublicationView", "Form", nullptr));
        label->setText(QCoreApplication::translate("PublicationView", "DESC", nullptr));
        label_2->setText(QCoreApplication::translate("PublicationView", "PUB DATE", nullptr));
        label_3->setText(QCoreApplication::translate("PublicationView", "NUM LIKES", nullptr));
        Exit->setText(QCoreApplication::translate("PublicationView", "Exit", nullptr));
        Add->setText(QCoreApplication::translate("PublicationView", "Add", nullptr));
        label_4->setText(QCoreApplication::translate("PublicationView", "WRITE A COMMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PublicationView: public Ui_PublicationView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLICATIONVIEW_H
