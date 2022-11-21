class Ulamek
{
    int licznik;
    int mianownik;
    void skracaj();

public:
    Ulamek();
    Ulamek(int l, int m);
    friend Ulamek pomnoz(Ulamek, Ulamek);
    friend Ulamek dodaj(Ulamek, Ulamek);
    void zapisz(int l, int m);
    void wypisz();
};
Ulamek dodaj(Ulamek ul1, Ulamek ul2);
Ulamek pomnoz(Ulamek ul1, Ulamek ul2);