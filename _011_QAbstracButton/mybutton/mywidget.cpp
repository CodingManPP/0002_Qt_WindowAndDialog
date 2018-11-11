#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QMenu>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->pushButton->setText("&nihao");

    ui->pushButton_2->setText("帮助(&H)");
    ui->pushButton_2->setIcon(QIcon("../mybutton/images/help.png"));

    ui->pushButton_3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("../mybutton/image/zoom-in.png"),tr("放大"));
    ui->pushButton_3->setMenu(menu);


}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_toggled(bool checked)
{
    qDebug()<<tr("按钮是否按下")<<checked;
}
