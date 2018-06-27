#include "performdatabase.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PerformDatabase w;
    w.show();

    return a.exec();
}
