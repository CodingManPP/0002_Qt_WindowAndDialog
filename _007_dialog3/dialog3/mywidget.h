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

/**
 * 使用信号和槽的方法2：通过修改槽的名称
 */
public slots:
    void on_showChildButton_clicked();
};
#endif // MYWIDGET_H
