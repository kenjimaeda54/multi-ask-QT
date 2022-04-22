#include "multi_ask.h"
#include "ui_multi_ask.h"

Multi_Ask::Multi_Ask(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Multi_Ask)
{
    ui->setupUi(this);
}

Multi_Ask::~Multi_Ask()
{
    delete ui;
}

