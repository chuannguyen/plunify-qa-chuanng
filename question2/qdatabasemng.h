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
    void create_spl_tbl();

    QSqlDatabase m_db;
};

#endif // QDATABASEMNG_H
