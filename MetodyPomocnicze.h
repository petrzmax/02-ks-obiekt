#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H


#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static char wczytajZnak();
    static int wczytajLiczbeCalkowita();
    static bool czyPlikJestPusty(fstream &plikTekstowy);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

};

#endif // METODYPOMOCNICZE_H
