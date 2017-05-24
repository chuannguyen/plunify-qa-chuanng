#include "qdatabasemng.h"
#include <QSqlError>

QDataBaseMNG::QDataBaseMNG()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("people.db");
    if (!m_db.open()) {
        qDebug() << "Cannot open database" << endl << m_db.lastError();
        return;
    }
    create_spl_tbl();
}

QDataBaseMNG::QDataBaseMNG(QString dbpath)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(dbpath);
    if (!m_db.open()) {
        qDebug() << "Cannot open database" << endl << m_db.lastError();
        return;
    }
}

QDataBaseMNG::~QDataBaseMNG()
{
    m_db.close();
}

void QDataBaseMNG::run() Q_DECL_OVERRIDE
{
    QStandardItem *stdtmp = queryAll();
    emit resultready(stdtmp);
}

QStandardItem *QDataBaseMNG::queryAll()
{
    QStandardItem *stdItem = new QStandardItem;
    QList<QStandardItem *> stdItems;

    const QString queryStr = QString::fromLatin1("SELECT * FROM PEOPLE");
    QSqlQuery query(queryStr);
    if (!query.exec()) {
        qDebug() << "Cannot query" << endl << query.lastError();
        return new QStandardItem("");
    }

    while (query.next()) {
        qDebug() << "| NAME: " << query.value("NAME").toString();
        stdItems.append(new QStandardItem(query.value("NAME").toString()));
        qDebug() << "| ID: " << query.value("ID").toString();
        stdItems.append(new QStandardItem(query.value("ID").toString()));
        qDebug() << "| NAMES: " << query.value("NAMES").toString();
        stdItems.append(new QStandardItem(query.value("NAMES").toString()));
        qDebug() << "| POLICY: " << query.value("POLICY").toString();
        stdItems.append(new QStandardItem(query.value("POLICY").toString()));
        qDebug() << "| ISSUE: " << query.value("ISSUE").toString() << endl;
        stdItems.append(new QStandardItem(query.value("ISSUE").toString()));

        stdItem->appendRow(stdItems);
        stdItems.clear();
    }

    return stdItem;
}

void QDataBaseMNG::printAll()
{
    const QString queryStr = QString::fromLatin1("SELECT * FROM PEOPLE");
    QSqlQuery query(queryStr);
    if (!query.exec()) {
        qDebug() << "Cannot query" << endl << query.lastError();
        return;
    }

    while (query.next()) {
        qDebug() << "| NAME: " << query.value("NAME").toString();
        qDebug() << "| ID: " << query.value("ID").toString();
        qDebug() << "| NAMES: " << query.value("NAMES").toString();
        qDebug() << "| POLICY: " << query.value("POLICY").toString();
        qDebug() << "| ISSUE: " << query.value("ISSUE").toString() << endl;
    }
}

void QDataBaseMNG::create_spl_tbl()
{
    QSqlQuery query;
    query.exec("create table PEOPLE (NAME TEXT, ID INT, NAMES TEXT, POLICY TEXT, ISSUE DATE)");
    query.exec("insert into PEOPLE values('Grocery', 1, 'Grocery Patan', 'Trial POLICY 1', 2014-01-01')");
    query.exec("insert into PEOPLE values('Italen', 2, 'Italen Gyno', 'Trial POLICY 2', '2014-04-02')");
    query.exec("insert into PEOPLE values('David', 3, 'David Rachel', 'Trial POLICY 3', 2014-01-01')");
    query.exec("insert into PEOPLE values('Michael', 4, 'Michael Pheil', 'Trial POLICY 4', '2015-03-05')");
    query.exec("insert into PEOPLE values('Jack', 5, 'Jack Paul', 'Trial POLICY 7', '2014-02-06')");

    return;
}
