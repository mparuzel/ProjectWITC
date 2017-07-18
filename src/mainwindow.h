#ifndef MAINWINDOW_H
#define MAINWINDOW_H

namespace Ui {
class Form;
}

#include <QtGui>
class TMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TMainWidget(QWidget *parent = 0);
    ~TMainWidget();

private:
    Ui::Form *ui;
};

#endif // MAINWINDOW_H
