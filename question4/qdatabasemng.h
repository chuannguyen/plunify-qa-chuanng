#ifndef QDATABASEMNG_H
#define QDATABASEMNG_H

#include <QtCore>
#include <QThread>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItem>

class QDataBaseMNG : public QThread
{
    Q_OBJECT
public:
    QDataBaseMNG();
    QDataBaseMNG(QString dbpath);
    ~QDataBaseMNG();

    void run();
    void printAll();
    QSqlDatabase getdb() { return m_db;}

signals:
    resultready(QStandardItem *stdItem);

private:
    void create_spl_tbl();
    QStandardItem *queryAll();

    QSqlDatabase m_db;
};

#endif // QDATABASEMNG_H
