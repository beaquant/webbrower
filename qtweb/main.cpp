#include "webwindow.h"
#include <QApplication>
#include <QtWebKitWidgets/QWebView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWebView *view=new QWebView;
    view->load(QUrl("http://baidu.com"));//注意QUrl的大小写！！！
    view->showFullScreen();
    return a.exec();

}
