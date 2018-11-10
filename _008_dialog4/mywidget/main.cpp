#include "mywidget.h"
#include <QApplication>
#include "mydialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    MyDialog dialog;                         //新建QDialog类
    if (dialog.exec() == QDialog::Accepted){ //判断dialog执行的结果
        w.show();                            //如果是按下“进入主界面的按钮”，则显示主界面
        return a.exec();                     //程序正常执行
    }else{
        return 0;                            //否则：程序退出
    }

}
