#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->edytujAdresata();
    }
    else
    {
        cout << "Aby edytowac adresata, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::usunAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->usunAdresata();
    }
    else
    {
        cout << "Aby usunac adresata, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout << "Aby wyswietlic adresatow, nalezy sie najpierw zalogowac" << endl;
        system("pause");
    }
}
