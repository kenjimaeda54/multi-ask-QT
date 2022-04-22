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


void Multi_Ask::on_pushButton_clicked()
{
     QString response;

     if(ui->rad_a->isChecked()){

        response = ui->rad_a->text(); //consigo pegar o texto que eta no campo do checkbox

     }else if(ui->rad_b->isChecked()){

       response = ui->rad_b->text();

     }else if(ui->rad_c->isChecked()){

       response = ui->rad_c->text();

     }else if(ui->rad_d->isChecked()){

        response = ui->rad_d->text();

     }else {

          ui->statusbar->showMessage("Please select your response");
          return;
     };

      ui->statusbar->clearMessage();
      ui->label_res->setText("Sua reponsta foi: <b>" +  response + "</b>");

}

