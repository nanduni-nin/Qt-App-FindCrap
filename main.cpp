#include "findcrap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindCrap w;
    w.show();

    return a.exec();
}
