#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPlainTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void translateBtnClick();
    void updatebase64(const QByteArray bytes);

private:
    QVBoxLayout * m_layout;
    QPlainTextEdit *textIn;
    QPushButton * translateBtn;
    QPlainTextEdit *textOut;
};

#endif // MAINWINDOW_H
