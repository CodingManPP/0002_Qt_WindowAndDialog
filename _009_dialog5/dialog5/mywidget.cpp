#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>

#include <QFileDialog>

#include <QFontDialog>

#include <QInputDialog>

#include <QMessageBox>

#include <QProgressDialog>

#include <QErrorMessage>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    //声明变量QErrorMessage
    errordlg = new QErrorMessage(this);
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
    //【4-4】获取条目
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

/*【5】消息对话框*/
void MyWidget::on_pushButton_5_clicked()
{
    /**
      * 参数1：设置父窗口
      * 参数2：设置标题栏
      * 参数3：显示信息
      * 参数4：具有的按钮
      */
    //【5-1】问题对话框
    int ret1 = QMessageBox::question(this,tr("问题对话框"),tr("你了解Qt吗？"),QMessageBox::Yes,QMessageBox::No);
    if (ret1 == QMessageBox::Yes){
        qDebug()<<tr("问题！");
    }

    //【5-2】提示对话框
    int ret2= QMessageBox::information(this,tr("提示对话框"),tr("这是书籍"),QMessageBox::Ok);
    if (ret2 == QMessageBox::Ok){
        qDebug()<<tr("提示");
    }

    //【5-3】警告对话框
    int ret3 = QMessageBox::warning(this,tr("警告对话框"),tr("不能提前结束！"),QMessageBox::Abort);
    if (ret3 == QMessageBox::Abort){
        qDebug()<<tr("警告");
    }

    //【5-4】错误对话框
    int ret4 = QMessageBox::critical(this,tr("严重错误对话框"),tr("发现一个严重错误！现在请关闭所有文件！"),QMessageBox::YesAll);
    if (ret4 == QMessageBox::YesAll){
        qDebug()<<tr("错误");
    }

    //【5-5】关于对话框
    // 没有返回值
    QMessageBox::about(this,tr("关于对话框"),tr("AAA通信制造"));

}

/*【6】进度对话框*/
void MyWidget::on_pushButton_6_clicked()
{
    /**
     * 参数1：设置对话框的标签内容
     * 参数2：取消按钮显示的文本
     * 参数3：最小值
     * 参数4：最大值
     * 参数5：父窗口
     */
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,50000,this);
    dialog.setWindowTitle(tr("进度对话框"));         //设置窗口标题
    dialog.setWindowModality(Qt::WindowModal);      //将对话框设置为模态
    dialog.show();
    for (int i=0; i<5000000; i++){                     //演示复制进度
        dialog.setValue(i);                         //设置进度条的当前值
        QCoreApplication::processEvents();          //避免界面冻结
        if (dialog.wasCanceled()){                  //按下取消按钮则中断
            break;
        }
    }

    dialog.setValue(5000000); //设置此值才可以显示满100%，for循环中少加了一个数
    qDebug()<<tr("复制结束！");
}

/*【7】错误信息对话框*/
void MyWidget::on_pushButton_7_clicked()
{
    errordlg->setWindowTitle(tr("错误信息对话框"));
    //以非模态形式显示
    errordlg->showMessage(tr("这里是出错信息！"));
}

/*【8】创建向导页面*/
QWizardPage * MyWidget::createPage1(){
    QWizardPage *localQWizardPage = new QWizardPage;
    localQWizardPage->setTitle(tr("介绍"));
    return localQWizardPage;
}

QWizardPage * MyWidget::createPage2(){
    QWizardPage *localQWizardPage = new QWizardPage;
    localQWizardPage->setTitle(tr("用户选择信息"));
    return localQWizardPage;
}

QWizardPage * MyWidget::createPage3(){
    QWizardPage *localQWizardPage = new QWizardPage;
    localQWizardPage->setTitle(tr("结束"));
    return localQWizardPage;
}

void MyWidget::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导对话框"));
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}
