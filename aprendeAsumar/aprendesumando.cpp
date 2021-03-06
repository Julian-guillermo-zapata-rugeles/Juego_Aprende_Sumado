#include "aprendesumando.h"
#include "ui_aprendesumando.h"
#include <time.h>
#include <QString>
#include <chrono>
#include <thread>
#include<QDebug>
#include<iostream>

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; //
using namespace std;

aprendeSumando::aprendeSumando(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::aprendeSumando)
{
    ui->setupUi(this);
    progreso=0;
    ui->respuesta1->hide();
    ui->respuesta2->hide();
    ui->respuesta3->hide();
    ui->progressBar->hide();
    ui->well->hide();
    ui->well2->hide();


}

aprendeSumando::~aprendeSumando()
{
    delete ui;
}

void aprendeSumando::activarBotones(){
    ui->respuesta1->show();
    ui->respuesta2->show();
    ui->respuesta3->show();
    ui->progressBar->show();
}
void aprendeSumando::sumasAletorias(int maximo){
    //timer();

    int numero1=0 ,position= 0 +rand() % 3;
    int numero2=0;
    int suma=0;
    ui->well->hide();
    ui->well2->hide();
    numero1=1+ rand() % maximo;
    numero2=1+ rand() % maximo;
    suma=numero1+numero2;
    respuesta=suma;
    QString question=QString::number(numero1)+" + "+QString::number(numero2);
    ui->banner->setText(question);
    ui->banner->setStyleSheet("font-size:36pt; font-weight:600; color:#204a87");
    int data[3]={suma+(1 + rand() % 4 ),suma+(1 + rand() % 4 ),suma+(1 + rand() % 4 )};
    data[position]=suma;
    ui->respuesta1->setText(QString::number(data[0]));
    ui->respuesta2->setText(QString::number(data[1]));
    ui->respuesta3->setText(QString::number(data[2]));
    intento1=data[0]; intento2=data[1]; intento3=data[2];
    progreso++;

    ui->progressBar->setValue(progreso);
    if(progreso>10){
        if(aciertos==10){
            ui->banner->setText("TU PUNTAJE ES PERFECTO ");
            ui->banner->setStyleSheet("font-size:20pt; font-weight:600; color:green");
            ui->well->show();
            ui->well2->show();
            if(nivelActual==1){
                if(l1<6){
                    qlogro1=qlogro1+" X ";
                    ui->logro1->setText(qlogro1);
                    ui->logro1->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l1++;
                }
            }
            else if(nivelActual==2){
                if(l2<6){
                    qlogro2=qlogro2+" X ";
                    ui->logro2->setText(qlogro2);
                    ui->logro2->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l2++;
                }

            }
            else if(nivelActual==3){
                if(l3<6){
                    qlogro3=qlogro3+" X ";
                    ui->logro3->setText(qlogro3);
                    ui->logro3->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l3++;
                }

            }
            else if(nivelActual==4){
                if(l4<6){
                    qlogro4=qlogro4+" X ";
                    ui->logro4->setText(qlogro4);
                    ui->logro4->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l4++;
                }

            }
            else if (nivelActual==5){
                if(l5<6){
                    qlogro5=qlogro5+" X ";
                    ui->logro5->setText(qlogro5);
                    ui->logro5->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l5++;
                }
            }
            else if (nivelActual==6){
                if(l6<6){
                    qlogro6=qlogro6+" X ";
                    ui->logro6->setText(qlogro6);
                    ui->logro6->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l6++;
                }
            }
            else if(nivelActual==7){
                if(l7<6){
                    qlogro7=qlogro7+" X ";
                    ui->logro7->setText(qlogro7);
                    ui->logro7->setStyleSheet(" font-size:16pt; font-weight:600; color:green;");
                    l7++;
                }
            }
            else{
                  std::cout<<"ok";
               }

        }

        else if(aciertos>6){
            ui->banner->setText("POR POCO ! TU PUNTAJE ES "+QString::number(aciertos)+" DE  10");
            ui->banner->setStyleSheet("font-size:15pt; font-weight:600; color:#204a87");
        }
        else{
            ui->banner->setText("DEBES PRACTICAR MAS =(   PUNTAJE "+QString::number(aciertos)+" DE  10");
            ui->banner->setStyleSheet("font-size:15pt; font-weight:600; color:red");
        }
        ui->respuesta1->hide();
        ui->respuesta2->hide();
        ui->respuesta3->hide();
        aciertos=0;
    }
}
void aprendeSumando::on_nivel1_clicked()
{
    nivelActual=1;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=5+rand() %10;
    sumasAletorias(numeroTemporal);

}



void aprendeSumando::on_respuesta1_clicked()
{
    if(intento1==respuesta){
        ui->banner->setText("MUY BIEN ");
        ui->banner->setStyleSheet("font-size:36pt; font-weight:600; color:green");
        aciertos++;
    }
    else{
        ui->banner->setText("LA RESPUESTA ERA "+QString::number(respuesta));
        ui->banner->setStyleSheet("font-size:34pt; font-weight:600; color:red");
    }
    sumasAletorias(numeroTemporal);
}

void aprendeSumando::on_respuesta2_clicked()
{
    if(intento2==respuesta){
        ui->banner->setText("MUY BIEN ");
        ui->banner->setStyleSheet("font-size:36pt; font-weight:600; color:green");
        aciertos++;
    }
    else{
        ui->banner->setText("LA RESPUESTA ERA "+QString::number(respuesta));
        ui->banner->setStyleSheet("font-size:34pt; font-weight:600; color:red");
    }
    sumasAletorias(numeroTemporal);
}

void aprendeSumando::on_respuesta3_clicked()
{
    if(intento3==respuesta){
        ui->banner->setText("MUY BIEN ");
        ui->banner->setStyleSheet("font-size:36pt; font-weight:600; color:green");
        aciertos++;
    }
    else{
        ui->banner->setText("LA RESPUESTA ERA "+QString::number(respuesta));
        ui->banner->setStyleSheet("font-size:34pt; font-weight:600; color:red");
    }
    sumasAletorias(numeroTemporal);
}

void aprendeSumando::on_nivel2_clicked()
{
    nivelActual=2;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=10+rand() %20;
    sumasAletorias(numeroTemporal);

}

void aprendeSumando::on_nivel3_clicked()
{
    nivelActual=3;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=20+rand() %30;
    sumasAletorias(numeroTemporal);

}

void aprendeSumando::on_nivel4_clicked()
{
    nivelActual=4;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=30+rand() %40;
    sumasAletorias(numeroTemporal);

}

void aprendeSumando::on_nivel4_2_clicked()
{
    nivelActual=5;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=40+rand() %50;
    sumasAletorias(numeroTemporal);
}

void aprendeSumando::on_nivel4_3_clicked()
{
    nivelActual=6;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=50+rand() %100;
    sumasAletorias(numeroTemporal);
}

void aprendeSumando::on_nivel4_4_clicked()
{
    nivelActual=7;
    aciertos=0;
    progreso=0;
    activarBotones();
    ui->progressBar->setValue(progreso);
    srand(time(0));
    numeroTemporal=100+rand() %1000;
    sumasAletorias(numeroTemporal);
}
