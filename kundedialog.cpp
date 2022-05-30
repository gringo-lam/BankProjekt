#include "kundedialog.h"
#include "ui_kundedialog.h"

KundeDialog::KundeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KundeDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Kunde erstellen");
}

KundeDialog::~KundeDialog()
{
    delete ui;
}

void KundeDialog::on_pB_applyKunde_clicked()
{

}

