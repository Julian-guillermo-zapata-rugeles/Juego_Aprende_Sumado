#include "aprendesumando.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aprendeSumando w;
    w.show();
    return a.exec();
}
