#include "mainwindow.h"
#include "ui_form.h"

TMainWidget::TMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
        ui->setupUi(this);
}

TMainWidget::~TMainWidget()
{
        delete ui;
}
