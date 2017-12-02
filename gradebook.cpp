#include "gradebook.h"
#include "ui_gradebook.h"
#include <QObject>

gradebook::gradebook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gradebook)
{
    ui->setupUi(this);
    ui->pushButton->setText("Close");



//connect horizontal sliders to spin boxes
    connect(ui->horizontalSlider_1,SIGNAL(valueChanged(int)),
            ui->spinBox_1,SLOT(setValue(int)));

    connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),
            ui->spinBox_2,SLOT(setValue(int)));

    connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),
            ui->spinBox_3,SLOT(setValue(int)));

    connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),
            ui->spinBox_4,SLOT(setValue(int)));

    connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),
            ui->spinBox_5,SLOT(setValue(int)));

    connect(ui->horizontalSlider_6,SIGNAL(valueChanged(int)),
            ui->spinBox_6,SLOT(setValue(int)));

    connect(ui->horizontalSlider_7,SIGNAL(valueChanged(int)),
            ui->spinBox_7,SLOT(setValue(int)));

    connect(ui->horizontalSlider_8,SIGNAL(valueChanged(int)),
            ui->spinBox_8,SLOT(setValue(int)));

    connect(ui->horizontalSlider_9,SIGNAL(valueChanged(int)),
            ui->spinBox_9,SLOT(setValue(int)));

    connect(ui->horizontalSlider_10,SIGNAL(valueChanged(int)),
            ui->spinBox_10,SLOT(setValue(int)));

    connect(ui->horizontalSlider_11,SIGNAL(valueChanged(int)),
            ui->spinBox_11,SLOT(setValue(int)));


 //connect spin boxes back to horizontal sliders
    connect(ui->spinBox_1,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_1,SLOT(setValue(int)));

    connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_2,SLOT(setValue(int)));

    connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_3,SLOT(setValue(int)));

    connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_4,SLOT(setValue(int)));

    connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_5,SLOT(setValue(int)));

    connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_6,SLOT(setValue(int)));

    connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_7,SLOT(setValue(int)));

    connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_8,SLOT(setValue(int)));

    connect(ui->spinBox_9,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_9,SLOT(setValue(int)));

    connect(ui->spinBox_10,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_10,SLOT(setValue(int)));

    connect(ui->spinBox_11,SIGNAL(valueChanged(int)),
            ui->horizontalSlider_11,SLOT(setValue(int)));





}


gradebook::~gradebook()
{
    delete ui;
}
