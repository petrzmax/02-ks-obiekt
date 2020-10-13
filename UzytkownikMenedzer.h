#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <vector>
#include "Uzytkownik.h"
#include "AdresatMenedzer.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    AdresatMenedzer adresatMenedzer;

    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : plikZUzytkownikami(nazwaPlikuZUzytkownikami),
          adresatMenedzer(nazwaPlikuZAdresatami) {};


    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    Uzytkownik podajDaneNowegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();


};

#endif // UZYTKOWNIKMENEDZER_H
