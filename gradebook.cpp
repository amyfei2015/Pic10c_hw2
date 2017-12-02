#include "gradebook.h"
#include "ui_gradebook.h"
#include <QObject>
#include <QMessageBox>
#include <QString>
#include <QRadioButton>
#include <QDebug>

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

    //spinbox -> setrange
    ui->spinBox_1->setRange(0,100);
    ui->spinBox_2->setRange(0,100);
    ui->spinBox_3->setRange(0,100);
    ui->spinBox_4->setRange(0,100);
    ui->spinBox_5->setRange(0,100);
    ui->spinBox_6->setRange(0,100);
    ui->spinBox_7->setRange(0,100);
    ui->spinBox_8->setRange(0,100);
    ui->spinBox_9->setRange(0,100);
    ui->spinBox_10->setRange(0,100);
    ui->spinBox_11->setRange(0,100);

    //horizontalSlider -> setrange
    ui->horizontalSlider_1->setRange(0,100);
    ui->horizontalSlider_2->setRange(0,100);
    ui->horizontalSlider_3->setRange(0,100);
    ui->horizontalSlider_4->setRange(0,100);
    ui->horizontalSlider_5->setRange(0,100);
    ui->horizontalSlider_6->setRange(0,100);
    ui->horizontalSlider_7->setRange(0,100);
    ui->horizontalSlider_8->setRange(0,100);
    ui->horizontalSlider_9->setRange(0,100);
    ui->horizontalSlider_10->setRange(0,100);
    ui->horizontalSlider_11->setRange(0,100);

    //combobox
    ui->comboBox->addItem("Pic 10b");
    ui->comboBox->addItem("Pic 10c");


    //calcuate the result
    QObject::connect(ui->spinBox_1,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_2,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_3,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_4,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_5,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_6,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_7,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_8,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_9,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_10,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));
    QObject::connect(ui->spinBox_11,SIGNAL(valueChanged(int)),
                         this,SLOT(update_overall(int)));


    ui->radioButton->setChecked(1);
     ui->radioButton_2->setChecked(0);

    //I dont know how to do thisssssssssssssssssssss

    //calculate result by different schemes
    QObject::connect(ui->radioButton,SIGNAL(pressed()), //don't know what to do with it  tried Clicked(); isChecked(); QObject::sender()
                         this,SLOT(update_overall(int)));

    QObject::connect(ui->radioButton_2,SIGNAL(pressed()),
                         this,SLOT(update_overall(int)));
/**/

}


gradebook::~gradebook()
{
    delete ui;
}


//just for fun
void gradebook::on_pushButton_2_clicked()
{
    QString clas = ui->comboBox->currentText();
    QString score = ui->label_13->text();
    QString res = "Your score for \n"+clas + " is " + score +"!";
    QMessageBox:: information(this, "Result",res);
}


//calculate the score
void gradebook::update_overall(int unused){
    // double score = 31.4;

    int hw_sum = 0;
    hw_sum = ui->spinBox_1->value() + ui->spinBox_2->value() + ui->spinBox_3->value() + ui->spinBox_4->value() + ui->spinBox_5->value() + ui->spinBox_6->value() + ui->spinBox_7->value() + ui->spinBox_8->value();
    //+ ui->spinBox_9->value() + ui->spinBox_10->value() + ui->spinBox_11->value()
    double score = 0;
    score += hw_sum/800.0*25;

 if (ui->radioButton->isChecked())
        score += (ui->spinBox_9->value() + ui->spinBox_10->value()) /200.0*40.0 +ui->spinBox_11->value()/100.0 *35.0;
 else if (ui->radioButton_2->isChecked())
 {
        int higher_midterm = std::max (ui->spinBox_9->value(), ui->spinBox_10->value());
        score += higher_midterm/100.0*30.0 +ui->spinBox_11->value()/100.0 *44.0;

    }


    //qDebug() << "nothing wrong!";
    ui->label_13->setText(QString::number(score));

    return;
}
