#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    reservationDetails(new ReservationDetails)
{
    ui->setupUi(this);

    //reservationDetails = new ReservationDetails();

}

MainWindow::~MainWindow()
{
    delete ui;
}
