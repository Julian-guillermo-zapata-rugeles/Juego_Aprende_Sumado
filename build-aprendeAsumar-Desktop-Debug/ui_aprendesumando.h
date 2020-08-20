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
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *logro1;
    QLabel *logro2;
    QLabel *logro3;
    QLabel *logro4;
    QLabel *logro5;
    QLabel *logro6;
    QLabel *logro7;
    QLabel *nivel7;
    QLabel *label_4;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *aprendeSumando)
    {
        if (aprendeSumando->objectName().isEmpty())
            aprendeSumando->setObjectName(QString::fromUtf8("aprendeSumando"));
        aprendeSumando->resize(780, 580);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
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
        nivel1 = new QPushButton(centralwidget);
        nivel1->setObjectName(QString::fromUtf8("nivel1"));
        nivel1->setGeometry(QRect(230, 100, 121, 41));
        nivel1->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel2 = new QPushButton(centralwidget);
        nivel2->setObjectName(QString::fromUtf8("nivel2"));
        nivel2->setGeometry(QRect(360, 100, 121, 41));
        nivel2->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel3 = new QPushButton(centralwidget);
        nivel3->setObjectName(QString::fromUtf8("nivel3"));
        nivel3->setGeometry(QRect(490, 100, 121, 41));
        nivel3->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4 = new QPushButton(centralwidget);
        nivel4->setObjectName(QString::fromUtf8("nivel4"));
        nivel4->setGeometry(QRect(620, 100, 151, 41));
        nivel4->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 0, 541, 91));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 127, 168);\n"
"color:white;\n"
"padding:5px;"));
        label_2->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(230, 370, 531, 23));
        progressBar->setMaximum(10);
        progressBar->setValue(0);
        respuesta1 = new QPushButton(centralwidget);
        respuesta1->setObjectName(QString::fromUtf8("respuesta1"));
        respuesta1->setGeometry(QRect(230, 410, 171, 71));
        respuesta1->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"font: 30pt \"Cantarell\";\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;"));
        respuesta2 = new QPushButton(centralwidget);
        respuesta2->setObjectName(QString::fromUtf8("respuesta2"));
        respuesta2->setGeometry(QRect(410, 410, 171, 71));
        respuesta2->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;\n"
"font: 30pt \"Cantarell\";"));
        respuesta3 = new QPushButton(centralwidget);
        respuesta3->setObjectName(QString::fromUtf8("respuesta3"));
        respuesta3->setGeometry(QRect(590, 410, 171, 71));
        respuesta3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 92, 0);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:15px;\n"
"font: 30pt \"Cantarell\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 510, 391, 21));
        banner = new QLabel(centralwidget);
        banner->setObjectName(QString::fromUtf8("banner"));
        banner->setGeometry(QRect(230, 240, 531, 101));
        banner->setAlignment(Qt::AlignCenter);
        well = new QLabel(centralwidget);
        well->setObjectName(QString::fromUtf8("well"));
        well->setGeometry(QRect(690, 260, 61, 61));
        well->setPixmap(QPixmap(QString::fromUtf8(":/files/congratulation.png")));
        well->setScaledContents(true);
        well2 = new QLabel(centralwidget);
        well2->setObjectName(QString::fromUtf8("well2"));
        well2->setGeometry(QRect(230, 260, 61, 61));
        well2->setPixmap(QPixmap(QString::fromUtf8(":/files/congratulation.png")));
        well2->setScaledContents(true);
        nivel4_2 = new QPushButton(centralwidget);
        nivel4_2->setObjectName(QString::fromUtf8("nivel4_2"));
        nivel4_2->setGeometry(QRect(230, 150, 121, 41));
        nivel4_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4_3 = new QPushButton(centralwidget);
        nivel4_3->setObjectName(QString::fromUtf8("nivel4_3"));
        nivel4_3->setGeometry(QRect(360, 150, 121, 41));
        nivel4_3->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        nivel4_4 = new QPushButton(centralwidget);
        nivel4_4->setObjectName(QString::fromUtf8("nivel4_4"));
        nivel4_4->setGeometry(QRect(490, 150, 281, 41));
        nivel4_4->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 80, 123);\n"
"color:white;\n"
"font:bold;\n"
"border-radius:10px;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 230, 171, 31));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 270, 21, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 300, 21, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 330, 21, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 360, 21, 31));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 390, 21, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 420, 21, 31));
        logro1 = new QLabel(centralwidget);
        logro1->setObjectName(QString::fromUtf8("logro1"));
        logro1->setGeometry(QRect(50, 270, 141, 31));
        logro2 = new QLabel(centralwidget);
        logro2->setObjectName(QString::fromUtf8("logro2"));
        logro2->setGeometry(QRect(50, 300, 141, 31));
        logro3 = new QLabel(centralwidget);
        logro3->setObjectName(QString::fromUtf8("logro3"));
        logro3->setGeometry(QRect(50, 330, 141, 31));
        logro4 = new QLabel(centralwidget);
        logro4->setObjectName(QString::fromUtf8("logro4"));
        logro4->setGeometry(QRect(50, 360, 141, 31));
        logro5 = new QLabel(centralwidget);
        logro5->setObjectName(QString::fromUtf8("logro5"));
        logro5->setGeometry(QRect(50, 390, 141, 31));
        logro6 = new QLabel(centralwidget);
        logro6->setObjectName(QString::fromUtf8("logro6"));
        logro6->setGeometry(QRect(50, 420, 141, 31));
        logro7 = new QLabel(centralwidget);
        logro7->setObjectName(QString::fromUtf8("logro7"));
        logro7->setGeometry(QRect(50, 450, 141, 31));
        nivel7 = new QLabel(centralwidget);
        nivel7->setObjectName(QString::fromUtf8("nivel7"));
        nivel7->setGeometry(QRect(20, 450, 21, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 191, 161));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/files/question.png")));
        label_4->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 0, 16, 571));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(180, 180, 180, 55);"));
        aprendeSumando->setCentralWidget(centralwidget);
        nivel1->raise();
        nivel2->raise();
        nivel3->raise();
        nivel4->raise();
        label_2->raise();
        progressBar->raise();
        respuesta1->raise();
        respuesta2->raise();
        respuesta3->raise();
        banner->raise();
        nivel4_2->raise();
        nivel4_3->raise();
        nivel4_4->raise();
        well2->raise();
        well->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        logro1->raise();
        logro2->raise();
        logro3->raise();
        logro4->raise();
        logro5->raise();
        logro6->raise();
        logro7->raise();
        nivel7->raise();
        label_4->raise();
        label_3->raise();
        label->raise();
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
        nivel1->setText(QApplication::translate("aprendeSumando", "Nivel 1", 0, QApplication::UnicodeUTF8));
        nivel2->setText(QApplication::translate("aprendeSumando", "Nivel 2", 0, QApplication::UnicodeUTF8));
        nivel3->setText(QApplication::translate("aprendeSumando", "Nivel 3", 0, QApplication::UnicodeUTF8));
        nivel4->setText(QApplication::translate("aprendeSumando", "Nivel 4", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">APRENDE SUMANDO</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        respuesta1->setText(QString());
        respuesta2->setText(QString());
        respuesta3->setText(QString());
        label_3->setText(QApplication::translate("aprendeSumando", "Desarollado por : Julian Guillermo Zapata Rugeles. C++", 0, QApplication::UnicodeUTF8));
        banner->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600; color:#4e9a06;\">BIENVENIDO</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        well->setText(QString());
        well2->setText(QString());
        nivel4_2->setText(QApplication::translate("aprendeSumando", "Nivel 5", 0, QApplication::UnicodeUTF8));
        nivel4_3->setText(QApplication::translate("aprendeSumando", "Nivel 6", 0, QApplication::UnicodeUTF8));
        nivel4_4->setText(QApplication::translate("aprendeSumando", "Nivel  maestro", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#4e9a06;\">Mis logros hoy</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">1</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">2</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">3</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">4</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">5</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">6</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro1->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro2->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro3->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro4->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro5->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro6->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        logro7->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        nivel7->setText(QApplication::translate("aprendeSumando", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#204a87;\">7</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aprendeSumando: public Ui_aprendeSumando {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APRENDESUMANDO_H
