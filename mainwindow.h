#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trpmcatalog_generated.h"
#include <QFileDialog>
#include <filesystem>
#include "aboutwindow.h"
#include <QErrorMessage>
#include <cstdint>
#include <fstream>
#include <limits>
#include <memory>
#include <QUrl>
#include <QDesktopServices>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void calculateMerge();
    std::vector<std::string> getSpeciesMap();

private slots:
    void on_actionOpen_Left_Hand_Mod_romfs_triggered();

    void on_actionOpen_Right_Hand_Mod_romfs_triggered();

    void on_actionSet_Output_Will_create_romfs_subfolder_triggered();

    void on_pushButton_clicked();

    void on_actionOpen_Linux_Guide_Video_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    Titan::Resource::CatalogT lhs;
    Titan::Resource::CatalogT rhs;
    QErrorMessage* em;
    std::shared_ptr<AboutWindow> aw;
};
#endif // MAINWINDOW_H
