#include <QCoreApplication>
#include "qdatabasemng.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    const QString db_path = arguments.size() > 2 ? (arguments.at(1).compare(QString("-i"), Qt::CaseInsensitive) ==0 ) ? arguments.at(2) : "" : "";
    qDebug() << "Get input database: " << db_path;

    QDataBaseMNG q_db(db_path);
    q_db.printAll();

    return a.exec();
}
