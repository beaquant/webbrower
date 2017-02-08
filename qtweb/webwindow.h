#ifndef WEBWINDOW_H
#define WEBWINDOW_H

#include <QMainWindow>

namespace Ui {
class webWindow;
}

class webWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit webWindow(QWidget *parent = 0);
    ~webWindow();

private:
    Ui::webWindow *ui;
};

#endif // WEBWINDOW_H
