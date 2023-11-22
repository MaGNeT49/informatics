#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_clear_clicked()
{

}


void MainWindow::on_btn_0_clicked()
{
    ui->lbl_temp->setText(ui->lbl_temp->text() + ui->btn_0->text());
}

void MainWindow::on_btn_1_clicked()
{
    ui->lbl_temp->setText(ui->lbl_temp->text() + ui->btn_1->text());
}

void MainWindow::on_btn_add_clicked()
{
    ui->lbl_temp->setText(ui->lbl_temp->text() + " " + ui->btn_add->text() + " ");
}

void MainWindow::on_btn_point_clicked()
{
    ui->lbl_temp->setText(ui->lbl_temp->text() + ".");
}

void MainWindow::on_btn_ce_clicked()
{
    ui->le_entry->clear();
    ui->lbl_temp->clear();
}

void MainWindow::on_btn_backspace_clicked()
{
    QString text_entry = ui->le_entry->text();
    QString text_temp = ui->lbl_temp->text();
    text_entry.chop(1);
    text_temp.chop(1);
    ui->le_entry->setText(text_entry);
    ui->lbl_temp->setText(text_temp);
}

void MainWindow::on_btn_neg_clicked()
{
    QString text = ui->le_entry->text();

    if (text.isEmpty())
    {
        return;
    }
    if (text.at(0) == '-')
    {
        text.remove(0, 1);
    }
    else
    {
        text.prepend("-");
    }

    ui->le_entry->setText(text);
}
