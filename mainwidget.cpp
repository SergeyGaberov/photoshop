#include "mainwidget.h"
#include "./ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_pushButton_clicked()
{
    qDebug("Hello");
}


void MainWidget::on_pushButton_2_clicked()
{
    qDebug("Goodbye");
}

void MainWidget::on_pushButton_3_clicked()
{
    QFileDialog* dialog = new QFileDialog();
    dialog->getOpenFileName();
}

