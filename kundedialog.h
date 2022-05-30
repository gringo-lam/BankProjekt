#ifndef KUNDEDIALOG_H
#define KUNDEDIALOG_H

#include <QDialog>

namespace Ui {
class KundeDialog;
}

class KundeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KundeDialog(QWidget *parent = nullptr);
    ~KundeDialog();

private slots:
    void on_pB_applyKunde_clicked();

private:
    Ui::KundeDialog *ui;
};

#endif // KUNDEDIALOG_H
