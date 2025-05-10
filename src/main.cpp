#include "crm.hpp"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CRM w;
    w.show();
    return a.exec();
}
