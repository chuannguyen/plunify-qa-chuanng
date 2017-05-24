#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QVBoxLayout>
#include <QSqlRelationalTableModel>
#include <QMessageBox>

#include "qdatabasemng.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void openconnection(QString dbpath);

private slots:
    void updateData(QStandardItem *stdItem);

private:
    void showError(const QSqlError &err);
    QTableView *view ;
    QStandardItemModel *model;
    QVBoxLayout *m_layout;
    QDataBaseMNG *q_db;
};

#endif // MAINWINDOW_H
