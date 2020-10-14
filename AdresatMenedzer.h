#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"


using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;

    vector<Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    void wyswietlDaneAdresata(Adresat adresat);


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami)
    {
        idZalogowanegoUzytkownika = 0;
        idOstatniegoAdresata = 0;
    };

    void dodajAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

    void wyswietlWszystkichAdresatow();

    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int pobierzIdZalogowanegoUzytkownika();

};

#endif // ADRESATMENEDZER_H
