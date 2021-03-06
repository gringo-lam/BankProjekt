#ifndef STRUCTS_H
#define STRUCTS_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlDriver>


    class Konto {
       int kontoId;
       int kontoNr;
       int kundeId;
       double saldo;
       QString kontoTyp;

    };

    class Girokonto : Konto {
        int dispoRahmen;
    };
    class Sparkonto : Konto {
        double zinssatz;
        double kontogeb;

    };
    class Wertpapierkonto : Konto {

    };

    struct Adresse {
        int adressId;
        QString strasse;
        int hausNr;
        int plz;
        QString stadt;
        QString land;
    };
    struct Kunde {
        int kundeId;
        int adressId;
        QString vorname;
        QString nachname;
        QString gebdatum;
    };
    struct Einkauf {
        int einkaufId;
        QString datum;
        double gesPreis;
        double anzahl;
        int WKN;
    };
    struct Wertpapier{
        QString WKN;
        double preis;
        QString wertpapiername;
    }

#endif //
