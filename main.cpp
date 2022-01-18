#include "digitaluhr.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //Digitaluhr w;
    Digitaluhr *meineUhr = new Digitaluhr();
    //die Größe anpassen
    meineUhr->resize(450, 100);
    //den Titel setzen
    meineUhr->setWindowTitle("Digitaluhr");

    //das Formular anzeigen
    meineUhr->show();
    return app.exec();


}
