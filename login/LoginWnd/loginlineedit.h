/************************************************************
* 登录界面账户密码输入框
***********************************************************/

#ifndef LOGINEDITLINE_H
#define LOGINEDITLINE_H

#include "lineeditex.h"
#include <QLabel>
#include <QLineEdit>
#include <QWidget>


class LoginLineEdit : public QWidget
{
    Q_OBJECT
public:
    explicit LoginLineEdit(QWidget * parent = nullptr);
public:
    //设置左侧图标
    void SetLeftIcon(QString leftIconPathNormal,QString leftIconPathHover);
    //设置底部的图标
    void BottomIcon(QString bottomLinePathNormal ,QString bottomLinePathHover);
    //设置输入框的样式表
    void SetLineEditStyleSheet(QString styleSheet);
    //设置文字默认的显示
    void SetPlaceholderText(QString placeholderText);
    //设置输入框的模式
    void SetEchoMode(QLineEdit::EchoMode echomode);

    QString text() const;
    void setText(QString text){m_lineEdit ->setText(text);}
    void setFocus();

signals:
    void returnPressed(); //返回按钮点击信号
    void textChanged();//文章发生改变的信号

public slots:
    void focusIn();
    void focusOut();

private:
    LineEditEx * m_lineEdit; //编辑框
    QLabel * m_leftIcon;     //编辑框左边的图标
    QLabel * m_rightIcon;    //编辑框右边的图标
    QLabel * m_bottomLine;   //编辑框下方的线条

    QString m_leftIconPathNormal;
    QString m_leftIconPathHover;
    QString m_bottomLinePathNormal;
    QString m_bottomLinePathHover;

};


#endif
