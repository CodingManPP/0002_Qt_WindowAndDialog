#include <QtWidgets>

int main(int argc, char *argv[]){

    QApplication a(argc,argv);
    //【1】新建QWidget类对象，默认parent是0，所以它只是个窗口
    QWidget *widget = new QWidget();
    //设置窗口标题
    widget->setWindowTitle(QObject::tr("我是widget"));

    //【2】新建QLabel对象，默认parent是0，所以它只是个窗口
    QLabel *label1 = new QLabel();
    label1->setWindowTitle(QObject::tr("label1:我是Label"));
    label1->setText(QObject::tr("label1:我是个窗口"));
    label1->resize(180,20);

    //【3】label2指定了父窗口为widget，所以不是窗口
    QLabel *label2 = new QLabel(widget);
    label2->setText("Label2:我不是独立的窗口，只是widget的子部件");
    label2->resize(250,20);

    //显示
    label1->show();
    widget->show();

    int ret = a.exec();

    delete label1;
    delete widget;

    return ret;

}
