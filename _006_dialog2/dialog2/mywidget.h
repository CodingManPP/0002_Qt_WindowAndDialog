#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private:
    Ui::MyWidget *ui;

//声明槽,此处自定义了一个槽，一般使用slots关键字修饰
public slots:
    void showChildDialog();
};




#endif // MYWIDGET_H
