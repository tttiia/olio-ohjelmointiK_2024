#include "laskin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    laskin w;
    w.show();
    return a.exec();
}
