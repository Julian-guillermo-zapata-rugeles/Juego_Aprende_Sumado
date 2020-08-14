/********************************************************************************
** Form generated from reading UI file 'aprendesumando.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APRENDESUMANDO_H
#define UI_APRENDESUMANDO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aprendeSumando
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *nivel1;
    QPushButton *nivel2;
    QPushButton *nivel3;
    QPushButton *nivel4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QPushButton *respuesta1;
    QPushButton *respuesta2;
    QPushButton *respuesta3;
    QLabel *label_3;
    QLabel *banner;
    QLabel *well;
    QLabel *well2;
    QPushButton *nivel4_2;
    QPushButton *nivel4_3;
    QPushButton *nivel4_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *aprendeSumando)
    {
        if (aprendeSumando->objectName().isEmpty())
            aprendeSumando->setObjectName(QString::fromUtf8("aprendeSumando"));
        aprendeSumando->resize(780, 580);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aprendeSumando->sizePolicy().hasHeightForWidth());
        aprendeSumando->setSizePolicy(sizePolicy);
        aprendeSumando->setMinimumSize(QSize(780, 580));
        aprendeSumando->setMaximumSize(QSize(780, 580));
        aprendeSumando->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        aprendeSumando->setWindowIcon(icon);
        aprendeSumando->setWindowOpacity(0.7);
        aprendeSumando->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(aprendeSumando);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(780, 580));
        centralwidget->setCursor(QCursor(Qt::OpenHandCursor));
        centralwidget->setMouseTracking(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 181, 181));
        label->setPixmap(QPixmap(QString::fromUtf8(":/files/question.png")));
        label->setScaledContents(true);
        nivel1 = new QPushButton(centralwidget);
        nivel1->setObjectName(QString::fromUtf8("nivel1"));
        nivel1->setGeometry(QRect(220, 100, 121, 41));
        nivel1->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel2 = new QPushButton(centralwidget);
        nivel2->setObjectName(QString::fromUtf8("nivel2"));
        nivel2->setGeometry(QRect(350, 100, 121, 41));
        nivel2->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel3 = new QPushButton(centralwidget);
        nivel3->setObjectName(QString::fromUtf8("nivel3"));
        nivel3->setGeometry(QRect(480, 100, 121, 41));
        nivel3->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4 = new QPushButton(centralwidget);
        nivel4->setObjectName(QString::fromUtf8("nivel4"));
        nivel4->setGeometry(QRect(610, 100, 121, 41));
        nivel4->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 30, 511, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 127, 168);\n"
"color:white;\n"
"padding:5px;"));
        label_2->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(40, 370, 711, 23));
        progressBar->setMaximum(10);
        progressBar->setValue(0);
        respuesta1 = new QPushButton(centralwidget);
        respuesta1->setObjectName(QString::fromUtf8("respuesta1"));
        respuesta1->setGeometry(QRect(40, 410, 221, 71));
        respuesta1->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"font: 30pt \"Cantarell\";\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;"));
        respuesta2 = new QPushButton(centralwidget);
        respuesta2->setObjectName(QString::fromUtf8("respuesta2"));
        respuesta2->setGeometry(QRect(280, 410, 231, 71));
        respuesta2->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;\n"
"font: 30pt \"Cantarell\";"));
        respuesta3 = new QPushButton(centralwidget);
        respuesta3->setObjectName(QString::fromUtf8("respuesta3"));
        respuesta3->setGeometry(QRect(530, 410, 221, 71));
        respuesta3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;\n"
"font: 30pt \"Cantarell\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 500, 711, 19));
        banner = new QLabel(centralwidget);
        banner->setObjectName(QString::fromUtf8("banner"));
        banner->setGeometry(QRect(40, 240, 711, 111));
        banner->setAlignment(Qt::AlignCenter);
        well = new QLabel(centralwidget);
        well->setObjectName(QString::fromUtf8("well"));
        well->setGeometry(QRect(660, 240, 121, 111));
        well->setPixmap(QPixmap(QString::fromUtf8(":/files/congratulation.png")));
        well->setScaledContents(true);
        well2 = new QLabel(centralwidget);
        well2->setObjectName(QString::fromUtf8("well2"));
        well2->setGeometry(QRect(0, 240, 121, 111));
        well2->setPixmap(QPixmap(QString::fromUtf8(":/files/congratulation.png")));
        well2->setScaledContents(true);
        nivel4_2 = new QPushButton(centralwidget);
        nivel4_2->setObjectName(QString::fromUtf8("nivel4_2"));
        nivel4_2->setGeometry(QRect(220, 150, 121, 41));
        nivel4_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4_3 = new QPushButton(centralwidget);
        nivel4_3->setObjectName(QString::fromUtf8("nivel4_3"));
        nivel4_3->setGeometry(QRect(350, 150, 121, 41));
        nivel4_3->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4_4 = new QPushButton(centralwidget);
        nivel4_4->setObjectName(QString::fromUtf8("nivel4_4"));
        nivel4_4->setGeometry(QRect(480, 150, 251, 41));
        nivel4_4->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        aprendeSumando->setCentralWidget(centralwidget);
        label->raise();
        nivel1->raise();
        nivel2->raise();
        nivel3->raise();
        nivel4->raise();
        label_2->raise();
        progressBar->raise();
        respuesta1->raise();
        respuesta2->raise();
        respuesta3->raise();
        label_3->raise();
        banner->raise();
        well->raise();
        nivel4_2->raise();
        nivel4_3->raise();
        nivel4_4->raise();
        well2->raise();
        menubar = new QMenuBar(aprendeSumando);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 780, 24));
        aprendeSumando->setMenuBar(menubar);
        statusbar = new QStatusBar(aprendeSumando);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        aprendeSumando->setStatusBar(statusbar);

        retranslateUi(aprendeSumando);

        QMetaObject::connectSlotsByName(aprendeSumando);
    } // setupUi

    void retranslateUi(QMainWindow *aprendeSumando)
    {
        aprendeSumando->setWindowTitle(QApplication::translate("aprendeSumando", "Aprende sumando", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        nivel1->setText(QApplication::translate("aprendeSumando", "Nivel 1", 0, QApplication::UnicodeUTF8));
        nivel2->setText(QApplication::translate("aprendeSumando", "Nivel 2", 0, QApplication::UnicodeUTF8));
        nivel3->setText(QApplication::translate("aprendeSumando", "Nivel 3", 0, QApplication::UnicodeUTF8));
        nivel4->setText(QApplication::translate("aprendeSumando", "Nivel 4", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\302\277QUE TANTO SABES SUMAR?</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        respuesta1->setText(QString());
        respuesta2->setText(QString());
        respuesta3->setText(QString());
        label_3->setText(QApplication::translate("aprendeSumando", "Desarollado por : Julian Guillermo Zapata Rugeles. C++", 0, QApplication::UnicodeUTF8));
        banner->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#204a87;\">VAMOS A SUMAR</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        well->setText(QString());
        well2->setText(QString());
        nivel4_2->setText(QApplication::translate("aprendeSumando", "Nivel 5", 0, QApplication::UnicodeUTF8));
        nivel4_3->setText(QApplication::translate("aprendeSumando", "Nivel 6", 0, QApplication::UnicodeUTF8));
        nivel4_4->setText(QApplication::translate("aprendeSumando", "Nivel  maestro", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class aprendeSumando: public Ui_aprendeSumando {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APRENDESUMANDO_H
