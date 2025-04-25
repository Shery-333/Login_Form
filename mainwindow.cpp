#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),
            this,SLOT(button()));

    connect(ui->pushButton_2,SIGNAL(clicked()),
            this,SLOT(button_2()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QString name[]={"Mariam","Fatma","Shery","Merna","Alyaa"};
    QString code[]={"M01","F23","S45","M67","A89"};

    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    bool found = false;
    for (int i = 0; i<name->length() ; i++) {
        if(uName == name[i] && uCode == code[i]) {

         QMessageBox::information(this,"welcome Message",
                "User: "+name[i]+"\n"
                "Welcome to Tic Tac Toe");
        found =true;
        break;
        }

    }
    if(!found){
        QMessageBox::information(this,"Error Box",
        "invalid user name or password" );
    }
}


void MainWindow::button_2()
{

}

