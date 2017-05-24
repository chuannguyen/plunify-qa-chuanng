#include "mainwindow.h"
#include "coder.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setCentralWidget(new QWidget());
    m_layout = new QVBoxLayout();
    this->centralWidget()->setLayout(m_layout);

    textIn = new QPlainTextEdit;
    m_layout->addWidget(textIn);

    translateBtn = new QPushButton("Translate");
    QObject::connect(translateBtn, SIGNAL(clicked()), this, SLOT(translateBtnClick()));
    m_layout->addWidget(translateBtn);

    textOut = new QPlainTextEdit;
    textOut->setReadOnly(true);
    m_layout->addWidget(textOut);
}

MainWindow::~MainWindow()
{
}

void MainWindow::translateBtnClick()
{
    Coder *coders = new Coder();
    coders->text = textIn->toPlainText();
    connect(coders, SIGNAL(resultready(QByteArray)), this, SLOT(updatebase64(QByteArray)));
    coders->start();
}

void MainWindow::updatebase64(const QByteArray bytes)
{
    textOut->clear();
    textOut->insertPlainText(QString(bytes));
}
