#include "webwindow.h"
#include "ui_webwindow.h"

webWindow::webWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::webWindow)
{
    ui->setupUi(this);
}

webWindow::~webWindow()
{
    delete ui;
}
