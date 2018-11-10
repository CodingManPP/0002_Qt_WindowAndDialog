#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>

#include <QFileDialog>

#include <QFontDialog>

#include <QInputDialog>

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

/*【1】【颜色对话框】*/
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

/* 【2】文件对话框*/
void MyWidget::on_pushButton_2_clicked()
{

#if 0
    /**
      * 功能：文件对话框选择文件，只能选择单个文件
      * 参数1：指定父窗口
      * 参数2：设置对话框标题
      * 参数3：指定默认打开的目录路径
      * 参数4：设置文件类型过滤器，如果不指定文件过滤器则默认显示选择所有类型的文件
      * 注意：*png 和 *jpg 中间需要空格
      */
    QString fileName = QFileDialog::getOpenFileName(this,tr("文件对话框"),"H:",tr("图片文件(*png *jpg)"));
    qDebug()<<"fileName"<<fileName;
#endif

#if 0
    /**
      * 功能：文件对话框选择文件，选择不同类型的文件
      * 参数1：指定父窗口
      * 参数2：设置对话框标题
      * 参数3：指定默认打开的目录路径
      * 参数4：设置文件类型过滤器，如果不指定文件过滤器则默认显示选择所有类型的文件
      * 不同类型：需要使用“;;”隔开
      */
    QString fileName = QFileDialog::getOpenFileName(this,tr("文件对话框"),"H:",tr("图片文件(*png *jpg);;文本文件(*txt)"));
    qDebug()<<"fileName"<<fileName;
#endif

#if 1
    /**
      * 功能：文件对话框选择文件，选择不同类型的多个文件，使用此函数getOpenFileNames
      * 参数1：指定父窗口
      * 参数2：设置对话框标题
      * 参数3：指定默认打开的目录路径
      * 参数4：设置文件类型过滤器，如果不指定文件过滤器则默认显示选择所有类型的文件
      */
    QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("文件对话框"),"H:",tr("图片文件(*png *jpg);;文本文件(*txt)"));
    qDebug()<<"fileNames"<<fileNames;
    int fileNameSize = fileNames.size();
    for (int i=0; i<fileNameSize; i++){
       qDebug()<<fileNames.at(i)<<endl;
    }
#endif

}

/*【3】字体对话框*/
void MyWidget::on_pushButton_3_clicked()
{
    //用于标记是否单击了ok按钮
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    //如果单机OK按钮，让"字体对话框"按钮使用新字体
    //如果单机cancle，那么输出信息
    if (ok){
        ui->pushButton_3->setFont(font);
    }else {
        qDebug()<<tr("没有选中字体");
    }

}

/*【4】输入对话框*/
void MyWidget::on_pushButton_4_clicked()
{
    bool ok;
    /*【4-1】获取字符串*/
    /**
     * 功能：获取字符串
     * @brief string
     * 参数1：指定父窗口
     * 参数2：设置窗口标题
     * 参数3：设置对话框中的标签显示文本
     * 参数4：设置输入字符串的显示模式（密码显示成为小黑点，此处选择的是用户输入的实际内容）
     * 参数5：设置输入框中的默认字符串
     * 参数6：设置获取按下按钮信息的bool变量
     */
    QString string = QInputDialog::getText(this,tr("输入字符串对话框"),tr("请输入用户名："),QLineEdit::Normal,tr("admin"),&ok);
    if (ok){
        qDebug()<<"string"<<string;
    }
    /*【4-2】获取整数*/
    /**
     * 功能：获取摸个范围内的整数值
     * 参数1：指定父窗口
     * 参数2：设置窗口标题
     * 参数3：设置对话框中的标签显示文本
     * 参数4：默认数值
     * 参数5：可以输入的最小值
     * 参数6：可以输入的最大值
     * 参数7：使用箭头按钮，数值每次变化的步进值
     * 参数8：设置获取按下按钮信息的bool变量
     */
    int value1 = QInputDialog::getInt(this,tr("输入整数对话框"),tr("请输入-1000到1000之间的整数"),100,-1000,1000,10,&ok);
    if (ok){
        qDebug()<<"value1"<<value1;
    }

    //【4-3】获取浮点数
    /**
     * 功能：获取摸个范围内的整数值
     * 参数1：指定父窗口
     * 参数2：设置窗口标题
     * 参数3：设置对话框中的标签显示文本
     * 参数4：默认数值
     * 参数5：可以输入的最小值
     * 参数6：可以输入的最大值
     * 参数7：小数的位数
     * 参数8：设置获取按下按钮信息的bool变量
     */
    double value2 = QInputDialog::getDouble(this,tr("请输入浮点对话框"),tr("请输入-1000到1000之间的数值"),0.00,-1000,1000,2,&ok);
    if(ok){
        qDebug()<<"value2"<<value2;
    }
    //【4-3】获取条目
    /**
     * 功能：获取摸个范围内的整数值
     * 参数1：指定父窗口
     * 参数2：设置窗口标题
     * 参数3：设置对话框中的标签显示文本
     * 参数4：待选择的条目
     * 参数6：默认选中的条目
     * 参数7：条目是否可以被更改，true：可以更改；false：不可以更改
     * 参数8：设置获取按下按钮信息的bool变量
     */
    QStringList items;
    items<<tr("苹果")<<tr("香蕉")<<tr("梨子")<<tr("凤梨");
    QString item = QInputDialog::getItem(this,tr("输入条目对话框"),tr("请选择或者输入一个条目"),items,0,true,&ok);
    if (ok){
        qDebug()<<"item"<<item;
    }



}
