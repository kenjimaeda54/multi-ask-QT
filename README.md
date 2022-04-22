# Selecao de resposta
Pequena aplicacao com campo de multiplas escolhas

## Motivacao
Entender o funcionamento do checkbox com uma simples aplicacao de multpla escolha

## Feature
- Apliquiei o uso do componente checkbox
- Com ele consigo caputrar o campo selecionado e o texto 




``` c++

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

```


## ScreenShoot

![multiCorrect.jpeg](https://github.com/kenjimaeda54/multi-ask-QT/blob/develop/multiCorrect.jpeg)
![multiWrong.jpeg](https://github.com/kenjimaeda54/multi-ask-QT/blob/develop/multiWrong.jpeg)

