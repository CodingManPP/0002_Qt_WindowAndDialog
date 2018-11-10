#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

}

MyWidget::~MyWidget()
{
    delete ui;
}

/**
 * 使用信号和槽的方法2：通过修改槽的名称
 */
void MyWidget::on_showChildButton_clicked()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}
