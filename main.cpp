#include <iostream>
#include "KsiazkaAdresowa.h"
#include "MetodyPomocnicze.h"

using namespace std;

char wybierzOpcjeZMenuGlownego();
char wybierzOpcjeZMenuUzytkownika();

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = wybierzOpcjeZMenuGlownego();

            if(wybor == '1') ksiazkaAdresowa.rejestracjaUzytkownika();
            else if(wybor == '2') ksiazkaAdresowa.logowanieUzytkownika();
            else if(wybor == '9') exit(0);
            else
            {
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
            }
        }
        else
        {
            wybor = wybierzOpcjeZMenuUzytkownika();

            if(wybor == '1') ksiazkaAdresowa.dodajAdresata();
            else if(wybor == '2') ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
            else if(wybor == '3') ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
            else if(wybor == '4') ksiazkaAdresowa.wyswietlWszystkichAdresatow();
            else if(wybor == '5') ksiazkaAdresowa.usunAdresata();
            else if(wybor == '6') ksiazkaAdresowa.edytujAdresata();
            else if(wybor == '7') ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
            else if(wybor == '8') ksiazkaAdresowa.wylogowanieUzytkownika();
            else
            {
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
            }
        }
    }

    return 0;
}

char wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

