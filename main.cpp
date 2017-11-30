#include "gradebook.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gradebook w;
    w.show();

    return a.exec();
}
