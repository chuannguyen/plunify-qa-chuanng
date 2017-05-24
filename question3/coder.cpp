#include "coder.h"

Coder::Coder()
{
}

void Coder::run() Q_DECL_OVERRIDE
{
    QByteArray bytes;
    bytes.append(text);
    emit resultready(bytes.toBase64());

}
