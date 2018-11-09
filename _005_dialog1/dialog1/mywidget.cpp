#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
#if 0
    //【1】指定了dialog的父窗口为MyWidget类对象，dialog一闪而过
    QDialog dialog1(this);
    dialog1.show();
#endif

#if 0
    //【2】【非模态对话框】定义一个指针变量，避免一闪而过
    QDialog *dialog2 = new QDialog(this);
    dialog2->show();
#endif

#if 0
    //【3】定义模态对话框，定义方式1,开始显示Dialog，不显示MyWidget；关闭Dialog之后，才显示MyWidget
    QDialog dialog3(this);
    dialog3.exec();
#endif

#if 0
   //【4】定义模态对话框，定义方式2，Dialog和MyWidget一起显示，开始只能操作Dialog，不能操作MyWidget；只有关闭Dialog之后，才可以操作MyWidget
    QDialog *dialog3 = new QDialog(this);
    dialog3->setModal(true);
    dialog3->show();
#endif

#if 0
    //【5-1】setWindowModality(Qt::NonModal)（不阻塞任何窗口，非模态）
    QDialog *dialog4 = new QDialog(this);
    dialog4->setWindowModality(Qt::NonModal);
    dialog4->show();
#endif

#if 0
    //【5-2】setWindowModality(Qt::WindowModal)（阻塞父窗口及所有的祖先窗口和他们的子窗口）
    QDialog *dialog5 = new QDialog(this);
    dialog5->setWindowModality(Qt::WindowModal);
    dialog5->show();
#endif

#if 1
    //【5-3】setWindowModality(Qt::ApplicationModal)（阻塞所有窗口）
    QDialog *dialog5 = new QDialog(this);
    dialog5->setWindowModality(Qt::ApplicationModal);
    dialog5->show();
#endif


}

MyWidget::~MyWidget()
{
    delete ui;
}
