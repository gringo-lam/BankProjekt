#include "frmmain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::libraryPaths();
    QApplication a(argc, argv);
    frmMain w;
    w.show();
    return a.exec();
}
