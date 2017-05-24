#ifndef QDATABASEMNG_H
#define QDATABASEMNG_H

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>

class QDataBaseMNG
{
public:
    QDataBaseMNG();
    QDataBaseMNG(QString dbpath);
    ~QDataBaseMNG();

    void printAll();

private:
    QSqlDatabase m_db;

    void create_spl_tbl();
};

#endif // QDATABASEMNG_H
