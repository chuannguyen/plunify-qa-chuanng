#ifndef CODER_H
#define CODER_H

#include <QtCore>
#include <QThread>

class Coder : public QThread
{
    Q_OBJECT
public:
    Coder();

    void run();

    QString text;

signals:
    resultready(const QByteArray &bytes);
};

#endif // CODER_H
