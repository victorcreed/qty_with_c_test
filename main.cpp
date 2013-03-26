#include "craptest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CrapTest w;
    w.show();
    
    return a.exec();
}
