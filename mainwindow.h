#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "popupdialogue.h"
#include "qlistwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuit_triggered();

    void on_actionLinkedIn_triggered();

    void on_actionGitHub_triggered();

    void on_searchButton_clicked();

    void on_timeSlider_sliderMoved(int position);

    void on_timeSlider_valueChanged(int value);

    void on_resultList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

signals:
    void sendMethod(QString);
};
#endif // MAINWINDOW_H
