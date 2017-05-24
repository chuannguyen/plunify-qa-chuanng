#include "mainwindow.h"
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setCentralWidget(new QWidget());
    m_layout = new QVBoxLayout();
    this->centralWidget()->setLayout(m_layout);

    view = new QTableView;
    m_layout->addWidget(view);
    view->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    view->show();

    q_db = new QDataBaseMNG("people.db");
    q_db->printAll();

    // Create the data model
    model = new QStandardItemModel();
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NAMES"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("POLICY"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ISSUE"));

    view->setModel(model);

    connect(q_db, SIGNAL(resultready(QStandardItem*)), this, SLOT(updateData(QStandardItem*)));
    q_db->start();
//    view->setCurrentIndex(model->index(0, 0));
}

void MainWindow::showError(const QSqlError &err)
{
    QMessageBox::critical(this, "Unable to initialize Database",
                "Error initializing database: " + err.text());
}

void MainWindow::updateData(QStandardItem *stdItem)
{
    while(stdItem->rowCount() > 0) {
        model->appendRow(stdItem->takeRow(0));
    }
}

MainWindow::~MainWindow()
{

}
