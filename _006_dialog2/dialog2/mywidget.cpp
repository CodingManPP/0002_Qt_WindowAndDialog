#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    /**
     * 【手动关联：信号-->槽】
     * 将按钮的单击信号clicked与新建的槽进行关联。
     * clicked信号在QPushButton类中定义
     * connect()在QObject类中定义，因为MyWidget类继承自QObject，所以可以直接使用该函数
     * 参数1：发射信号的对象
     * 参数2：发射的信号
     * 参数3：接收信号的对象
     * 参数4：要执行的槽
     */

    connect(ui->showChildButton,&QPushButton::clicked,this,&MyWidget::showChildDialog);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::showChildDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}
