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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_3;
    QWidget *page_2;
    QLabel *label_4;
    QWidget *page_3;
    QLabel *label_5;
    QToolBox *toolBox;
    QWidget *page_4;
    QWidget *page_6;
    QWidget *page_5;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(635, 883);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 10, 151, 121));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        frame->setMidLineWidth(10);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 191, 131));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 278, 364));
        label_2->setAutoFillBackground(true);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(400, 260, 181, 51));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(456123));
        lcdNumber->setProperty("intValue", QVariant(456123));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(360, 320, 256, 192));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(380, 550, 120, 80));
        stackedWidget->setFrameShape(QFrame::Panel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 54, 12));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 54, 12));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 54, 12));
        stackedWidget->addWidget(page_3);
        toolBox = new QToolBox(MyWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(50, 590, 69, 121));
        toolBox->setFrameShape(QFrame::Box);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 67, 41));
        toolBox->addItem(page_4, QString::fromUtf8("\345\245\275\345\217\213"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        toolBox->addItem(page_6, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        page_5->setGeometry(QRect(0, 0, 67, 41));
        toolBox->addItem(page_5, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", Q_NULLPTR));
        label->setText(QApplication::translate("MyWidget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; text-decoration: underline; color:#ff0000;\">\345\274\240\344\270\211\346\235\216\345\233\233\347\216\213\351\272\273\345\255\220</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyWidget", "TextLabel", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", Q_NULLPTR));
        label_5->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\211\351\241\265", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MyWidget", "\345\245\275\345\217\213", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("MyWidget", "\351\273\221\345\220\215\345\215\225", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("MyWidget", "\351\231\214\347\224\237\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
