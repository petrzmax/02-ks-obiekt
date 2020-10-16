#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <cstdlib>

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int podajIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami) : PlikTekstowy(nazwaPlikuZAdresatami),
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI("Adresaci_tymczasowo.txt") {};

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void edytujAdresataWPliku(string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    void usunWybranegoAdresataZPliku(int idUsuwanegoAdresata);
    void aktualizujIdOstatniegoAdresata(int idUsuwanegoAdresata);

    int pobierzZPlikuIdOstatniegoAdresata();
    int pobierzIdOstatniegoAdresata();


};

#endif // PLIKZADRESATAMI_H
