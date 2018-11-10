#include "mywidget.h"
#include "ui_mywidget.h"
#include <QMovie>
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    /**
      * 【1】QFrame
      */
    /*用代码实现QFrame*/
    ui->frame->setFrameShape(QFrame::Box);
    ui->frame->setFrameShadow(QFrame::Sunken);

   // ui->frame->setFrameStyle(QFrame::Box|QFrame::Sunken);
    ui->frame->setLineWidth(5);
    ui->frame->setMidLineWidth(10);

    /**
      * 【2】QLabel
      */
    QFont font;
    font.setFamily("华文行楷");
    font.setPointSize(50);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);

    /**
      * 【3】QFont
      */
    QString localTr = tr("标题太长，需要省略");
    QString localElidedText = ui->label->fontMetrics().elidedText(localTr,Qt::ElideRight,180);
    ui->label->setText(localElidedText);

    /**
      *【4】QLabel中添加一张照片
      */
    ui->label->setPixmap(QPixmap("G:/logo.png"));

    /**
      *【5】QLabel中添加一张gif
      */
    QMovie *movie = new QMovie("G:/1.gif");
    ui->label_2->setMovie(movie);
    movie->start();

    /**
      *【6】QLCDNumber显示数字
      */
    ui->lcdNumber->display(12563.02558);




}

MyWidget::~MyWidget()
{
    delete ui;
}
