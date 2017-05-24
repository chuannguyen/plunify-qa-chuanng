#include <QCoreApplication>
#include <QDebug>
#include <QByteArray>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    const QString strsrc = arguments.size() > 2 ? (arguments.at(1).compare(QString("-i"), Qt::CaseInsensitive) ==0 ) ? arguments.at(2) : "" : "";
    qDebug() << strsrc;

    QByteArray batmp;
    batmp.append(strsrc);
    qDebug() << batmp.toBase64();

    return a.exec();
}
