#include "multi_ask.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Multi_Ask w;
    w.show();
    return a.exec();
}
