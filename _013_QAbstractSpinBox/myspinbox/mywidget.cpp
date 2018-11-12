#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>

Mywidget::Mywidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mywidget)
{
    ui->setupUi(this);
    //设置时间为现在的系统时间
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    //设置时间的显示格式
    /**
      *说明：
      * y：年
      * M：月
      * d：日
      * ddd：星期
      * H：小时，使用24小时制显示
      * h：小时，如果后面有AM/PM,则是12h制显示，否则使用24h制
      * m：分
      * s：秒
      * z：毫秒
      */
    ui->dateTimeEdit->setDisplayFormat(tr("yyyy年MM月dd日ddd HH时mm分ss秒zz毫秒"));

    ui->timeEdit->setDateTime(QDateTime::currentDateTime());

    qDebug()<<ui->spinBox->value();


}

Mywidget::~Mywidget()
{
    delete ui;
}

void Mywidget::on_spinBox_valueChanged(const QString &arg1)
{
    qDebug()<<ui->spinBox->value();
}
