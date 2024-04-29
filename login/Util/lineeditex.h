/****************************************************************************
** QQ-Like 对 Qt 的 QLineEdit 进行扩展
****************************************************************************/

#ifndef LINEEDITEX_H
#define LINEEDITEX_H

#include <QLineEdit>
#include <QWidget>

class LineEditEx : public QLineEdit
{
    Q_OBJECT
public:
    explicit LineEditEx(QWidget * parent=nullptr);

protected:
    virtual   void focusInEvent(QFocusEvent *) override;
    virtual   void focusOutEvent(QFocusEvent *) override;
signals:
    void focusInSignal();
    void focusOutSignal();
};


#endif
