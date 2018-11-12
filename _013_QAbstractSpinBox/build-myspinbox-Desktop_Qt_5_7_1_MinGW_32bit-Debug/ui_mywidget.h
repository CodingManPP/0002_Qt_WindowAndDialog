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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mywidget
{
public:
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QLabel *label_2;

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
        spinBox = new QSpinBox(Mywidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 140, 61, 21));
        spinBox->setValue(99);
        doubleSpinBox = new QDoubleSpinBox(Mywidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(80, 180, 62, 22));
        doubleSpinBox->setDecimals(7);
        label = new QLabel(Mywidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 150, 54, 12));
        label_2 = new QLabel(Mywidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 180, 71, 16));

        retranslateUi(Mywidget);

        QMetaObject::connectSlotsByName(Mywidget);
    } // setupUi

    void retranslateUi(QWidget *Mywidget)
    {
        Mywidget->setWindowTitle(QApplication::translate("Mywidget", "Mywidget", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("Mywidget", "H:mm:ssA", Q_NULLPTR));
        spinBox->setSuffix(QApplication::translate("Mywidget", "%", Q_NULLPTR));
        spinBox->setPrefix(QApplication::translate("Mywidget", "\357\277\245", Q_NULLPTR));
        label->setText(QApplication::translate("Mywidget", "\350\256\276\347\275\256\346\225\264\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Mywidget", "\350\256\276\347\275\256\346\265\256\347\202\271\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Mywidget: public Ui_Mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
