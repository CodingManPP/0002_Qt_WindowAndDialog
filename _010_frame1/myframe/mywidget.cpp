#include "mywidget.h"
#include "ui_mywidget.h"

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


}

MyWidget::~MyWidget()
{
    delete ui;
}
