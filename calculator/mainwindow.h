#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_btn_clear_clicked();
    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_btn_add_clicked();

    void on_btn_point_clicked();

    void on_btn_ce_clicked();

    void on_btn_backspace_clicked();

    void on_btn_neg_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
