#include "mywidget.h"
#include "ui_mywidget.h"
#include <QCompleter>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    /* LineEdit3功能设置：输入验证 */
    //【1】新建验证器，指定范围是100-999
    QIntValidator *validator = new QIntValidator(100,999,this);
    //【2】可以设置浮点数
//    new QDoubleValidator();
    //在行编辑器中使用验证器
    ui->lineEdit_3->setValidator(validator);
#if 0
    //【3】正则表达式:开始输入"-"号或者不输入，然后输入1~3个数字的限制
    QRegExp rx("-?//d{1,3}");
    QIntValidator *validator1 = new QIntValidator(rx,this);
    //在行编辑器中使用验证器
    ui->lineEdit_3->setValidator(validator1);
#endif

    /*LineEdit4:自动补全*/
    QStringList wordList;
    wordList<<"Qt"<<"QtCreator"<<tr("您好");
    QCompleter *completer = new QCompleter(wordList,this);      //新建自动完成
    completer->setCaseSensitivity(Qt::CaseInsensitive);         //设置大小写不敏感
    ui->lineEdit_4->setCompleter(completer);

}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();                      //让lineEdit3获取焦点
    qDebug()<<ui->lineEdit_2->text();                //输出lineEdit2的内容
    qDebug()<<ui->lineEdit_2->displayText();         //输出lineEdit2的显示内容

}

void MyWidget::on_lineEdit_3_returnPressed()
{
     qDebug()<<ui->lineEdit_3->text();
}
