#include "lineeditex.h"

#include<QDateTime>
#include<QDebug>


LineEditEx::LineEditEx(QWidget *parent)
{

}

void LineEditEx::focusInEvent(QFocusEvent * event)
{
    emit focusInSignal();
    return QLineEdit::focusInEvent(event);
}

void LineEditEx::focusOutEvent(QFocusEvent * event)
{
    emit focusOutSignal();
    return QLineEdit::focusInEvent(event);
}
