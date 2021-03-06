#ifndef APRENDESUMANDO_H
#define APRENDESUMANDO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class aprendeSumando; }
QT_END_NAMESPACE

class aprendeSumando : public QMainWindow
{
    Q_OBJECT

public:
    aprendeSumando(QWidget *parent = nullptr);
    ~aprendeSumando();

private slots:
    void on_nivel1_clicked();

    void on_respuesta1_clicked();

    void on_respuesta2_clicked();

    void on_respuesta3_clicked();

    void on_nivel2_clicked();

    void on_nivel3_clicked();

    void on_nivel4_clicked();

    void on_nivel4_2_clicked();

    void on_nivel4_3_clicked();

    void on_nivel4_4_clicked();

private:
    Ui::aprendeSumando *ui;
    void sumasAletorias(int);
    void activarBotones();
    int respuesta=0;
    int intento1=0;
    int intento2=0;
    int intento3=0;
    int progreso=0;
    int numeroTemporal=0;
    int aciertos=0;
    int nivelActual=0;

    QString qlogro1="",qlogro2="",qlogro3="",qlogro4="",qlogro5="",qlogro6="",qlogro7="";
    int l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0;
};
#endif // APRENDESUMANDO_H
