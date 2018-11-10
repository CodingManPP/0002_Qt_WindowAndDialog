#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>

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

/*【颜色对话框】*/
void MyWidget::on_pushButton_clicked()
{
#if 0
    /**
     * 【1】静态显示
     * @brief color
     * 参数1：设置初始颜色
     * 参数2：指定父窗口
     * 参数3：设置对话框的标题
     * color: QColor(ARGB 1, 1, 0, 0)
     * 4个数值代表的含义：透明度alpha、红色、绿色、蓝色
     * 数值都是从0~1，有效数字是6位
     * 透明度alpha：1.0 完全不透明，默认值；0.0 完全透明
     * 三基色红绿蓝可以使用0~255表示，0表示最浅，1表示最深
     */
    QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"));
    qDebug()<<"color:"<<color;
#endif

#if 0
    /**
     * 【2】静态显示：使用alpha设置
     */
    QColor localShowAlphaChannel = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    qDebug()<<"localShowAlphaChannel:"<<localShowAlphaChannel;
#endif

#if 1
    /**
     * 【3】动态显示
     */
    QColorDialog dialog(Qt::red,this);                  //创建对象
    dialog.setOption(QColorDialog::ShowAlphaChannel);   //显示alph选项
    dialog.exec();                                      //模态的方式运行对话框
    QColor color = dialog.currentColor();               //获取当前的颜色
    qDebug() <<"color:"<<color;                         //输入颜色信息

#endif


}















