/***************
* 主界面旋转样式
********************/
#ifndef ROTATINGSTACKWIDGET
#define ROTATINGSTACKWIDGET



#include<QStackedLayout>
#include<QMouseEvent>

class RotatingStackedWidget : public QStackedLayout
{
Q_OBJECT
public:
    explicit RotatingStackedWidget(QWidget * parent =nullptr);
    ~RotatingStackedWidget() override;


public slots:

protected:
private:
    //当前窗口是否正在旋转
    bool m_isRoratingWindow;
    //登录界面窗口
    //网络发送窗口
    int m_nextPageIndex;
    //注册页面

};



#endif
