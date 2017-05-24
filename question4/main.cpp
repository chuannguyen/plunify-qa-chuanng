#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    const QString db_path = arguments.size() > 2 ? (arguments.at(1).compare(QString("-i"), Qt::CaseInsensitive) ==0 ) ? arguments.at(2) : "" : "";
    qDebug() << "Get input database: " << db_path;

    MainWindow w;
    w.openconnection(db_path);
    w.show();

    return a.exec();
}
