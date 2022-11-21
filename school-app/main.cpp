#include <iostream>
using namespace std;

class Pracownik
{
public:
    static string s_szkola;
    static string s_stanowisko;
    string imie;
    string nazwisko;
    void wyswietlDane();
};

string Pracownik::s_szkola = "Technikum Informatyczne";
string Pracownik::s_stanowisko = "nauczyciel";

void Pracownik::wyswietlDane()
{
    cout << "Dane pracownika: " << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Szkoła: " << s_szkola << endl;
    cout << "Stanowisko: " << s_stanowisko << endl;
}

int main()
{
    Pracownik pracownik1;
    pracownik1.imie = "Jan";
    pracownik1.nazwisko = "Kowalski";
    pracownik1.wyswietlDane();
    Pracownik::s_stanowisko = "portier";
    Pracownik pracownik2;
    pracownik2.imie = "Jan";
    pracownik2.nazwisko = "Nowak";
    pracownik2.wyswietlDane();
    return 0;
}