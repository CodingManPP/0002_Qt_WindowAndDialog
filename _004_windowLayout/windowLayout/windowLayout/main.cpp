#include <QApplication>
#include <QWidget>
#include <QDebug>

/**
 * 从上图可以看出这些成员函数有三类：
 * QWidget直接提供的成员函数：x()、y()获得窗口左上角的坐标，width()、height()获得客户区的宽和高
 * QWidget的geometry()提供的成员函数：x()、y()获得客户区左上角的坐标，width()、height()获得客户区的宽和高
 * QWidget的frameGeometry()提供的成员函数：x()、y()获得窗口左上角的坐标，width()、height()获得包含客户区、标题栏和边框在内的整个窗口的宽和高
 */

int main(int argc, char* argv[]){

    QApplication a(argc,argv);

    /**
     * @brief widget
     */
    QWidget widget;
    widget.resize(400,300);
    widget.move(200,100);
    widget.show();
    int x = widget.x();
    qDebug("x: %d",x);
    int y = widget.y();
    qDebug("y: %d",y);
    //客户区
    const QRect geometry = widget.geometry();
    int geometrywidth = geometry.width();
    int geometryHeight = geometry.height();
    int geometryX = geometry.x();
    int geometryY = geometry.y();
    //窗口
    QRect frameGeometry = widget.frameGeometry();
    int framewidth = frameGeometry.width();
    int frameHeight = frameGeometry.height();
    int frameX = frameGeometry.x();
    int frameY = frameGeometry.y();

    qDebug()<<"geometry:"<<geometry;
    qDebug()<<"geometryX:"<<geometryX<<"geometryY:"<<geometryY;
    qDebug()<<"geometrywidth:"<<geometrywidth<<"geometryHeight:"<<geometryHeight;

    qDebug()<<"frame:"<<frameGeometry;
    qDebug()<<"frameX:"<<frameX<<"frameY:"<<frameY;
    qDebug()<<"framewidth:"<<framewidth<<"frameHeight:"<<frameHeight;

    return a.exec();


}
