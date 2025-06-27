#include "aboutwindow.h"
#include "ui_aboutwindow.h"

AboutWindow::AboutWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setEnabled(true);
    ui->label->setOpenExternalLinks(true);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

void AboutWindow::closeEvent(QCloseEvent* evt)
{
    QWidget::closeEvent(evt);
    dynamic_cast<QMainWindow*>(parent())->setEnabled(true);
}
