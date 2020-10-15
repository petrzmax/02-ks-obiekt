#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <fstream>

using namespace std;

class PlikTekstowy
{
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {};
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string pobierzNazwePliku();

};


#endif // PLIKTEKSTOWY_H
