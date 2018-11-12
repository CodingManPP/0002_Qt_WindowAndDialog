/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mywidget
{
public:
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *Mywidget)
    {
        if (Mywidget->objectName().isEmpty())
            Mywidget->setObjectName(QStringLiteral("Mywidget"));
        Mywidget->resize(400, 300);
        timeEdit = new QTimeEdit(Mywidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(20, 20, 118, 22));
        dateEdit = new QDateEdit(Mywidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 50, 110, 22));
        dateEdit->setCalendarPopup(true);
        dateTimeEdit = new QDateTimeEdit(Mywidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(20, 80, 231, 21));

        retranslateUi(Mywidget);

        QMetaObject::connectSlotsByName(Mywidget);
    } // setupUi

    void retranslateUi(QWidget *Mywidget)
    {
        Mywidget->setWindowTitle(QApplication::translate("Mywidget", "Mywidget", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Mywidget", "H:mm:ssA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mywidget: public Ui_Mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
