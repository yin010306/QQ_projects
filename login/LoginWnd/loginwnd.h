/********************************
** 登录主窗口
*********************************/

#ifndef LOGINWND_H
#define LOGINWND_H

#include<QPaintEvent>
#include<QStackedLayout>

class LoginWnd : public QStackedLayout
{
    Q_OBJECT

public:
    explicit LoginWnd(QWidget * parent = nullptr);
    void ShowMainUI();
protected:
    void paintEvent(QPaintEvent *);
};

#endif
