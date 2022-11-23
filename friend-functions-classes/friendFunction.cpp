#include <iostream>
using namespace std;
class Szef;
class Pracownik
{
    int godziny_pracy;
    int stawka_godzinowa;

public:
    string nazwa;

    void setdata(string pNazwa, int pGodziny_pracy, int pStawka_godzinowa)
    {
        nazwa = pNazwa;
        godziny_pracy = pGodziny_pracy;
        stawka_godzinowa = pStawka_godzinowa;
    }
    int getGodziny()
    {
        return godziny_pracy;
    };
    int getStawka()
    {
        return stawka_godzinowa;
    };
    friend void Wynagrodzenie(Pracownik, Szef); // friend function.
};
class Szef
{
    int godziny_pracy;
    int stawka_godzinowa;

public:
    string nazwa;

    void setdata(string pNazwa, int pGodziny_pracy, int pStawka_godzinowa)
    {
        nazwa = pNazwa;
        godziny_pracy = pGodziny_pracy;
        stawka_godzinowa = pStawka_godzinowa;
    }
    int getGodziny()
    {
        return godziny_pracy;
    };
    int getStawka()
    {
        return stawka_godzinowa;
    };
    friend void Wynagrodzenie(Pracownik, Szef); // friend function
};
void Wynagrodzenie(Pracownik pPracownik, Szef pSzef)
{

    cout << "Imie pracownika " << pPracownik.nazwa << endl
         << " Wynagrodzenie pracownika " << pPracownik.getGodziny() * pPracownik.getStawka() << endl;
    cout << "Imie Szefa " << pSzef.nazwa << endl
         << " Wynagrodzenie szefa " << pSzef.getGodziny() * pSzef.getStawka() << endl;
}
int main()
{
    Pracownik pPracownik;
    Szef pSzef;
    pPracownik.setdata("Dave", 40, 8);
    pSzef.setdata("Justin", 60, 200);
    Wynagrodzenie(pPracownik, pSzef);
    return 0;
}
