#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlDriver>


QT_BEGIN_NAMESPACE
namespace Ui { class frmMain; }
QT_END_NAMESPACE

class frmMain : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    frmMain(QWidget *parent = nullptr);
    ~frmMain();

private slots:
    void on_pB_Conn_clicked();

    void on_pB_Kunde_clicked();

private:
    Ui::frmMain *ui;
};
#endif // FRMMAIN_H
