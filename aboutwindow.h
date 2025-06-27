#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

namespace Ui {
class AboutWindow;
}

class AboutWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AboutWindow(QWidget *parent = nullptr);
    ~AboutWindow();

protected:
    void closeEvent(QCloseEvent* evt);

private:
    Ui::AboutWindow *ui;
};

#endif // ABOUTWINDOW_H
