#include "gradebook.h"
#include "ui_gradebook.h"

gradebook::gradebook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gradebook)
{
    ui->setupUi(this);
}

gradebook::~gradebook()
{
    delete ui;
}
