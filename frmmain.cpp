#include "frmmain.h"
#include "ui_frmmain.h"
#include "kundedialog.h"
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QGraphicsDropShadowEffect>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>

frmMain::frmMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::frmMain)
{
    ui->setupUi(this);
    this->setWindowTitle("BankQt");

}

frmMain::~frmMain()
{
    delete ui;
}


void frmMain::on_pB_Kunde_clicked()
{
    KundeDialog kundeDialog;
    kundeDialog.setModal(true);
    kundeDialog.exec();
}


void frmMain::on_pB_Conn_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Z:/QtBanking/QtBanking/BankQt/BankQt.db");

        if (!db.open()){
            ui->label->setText("Failed to open database");
        }
        else {
            ui->label->setText("Connected");
        }
    db.open();
    //QSqlQuery qry;
    QString data = "";
//    qry.exec("SELECT * FROM tbl_Konto"); // Gibt alle Konten aus
//        QStringList stringList;
//      QStringListModel *model;
//        model = new QStringListModel(this);
//        stringList.append("[KontoNR] [KundeID] [Saldo] [Kontotyp]");
//        model->setStringList(stringList);
//        ui->tableView->setModel(model);
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery* qry=new QSqlQuery();
    qry->prepare("SELECT kontonr, kunde_ID, Saldo, Kontotyp FROM tbl_Konto");
    //qry->prepare("SELECT * FROM tbl_Konto");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    //qry.clear();
    db.close();


    //////////////////////////////////////////////////////////////////////////




}



