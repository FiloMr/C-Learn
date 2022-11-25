#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class Promien
{

    double _r;

public:
    void setPromien(double);
    double getPromien();
};

void Promien::setPromien(double r)
{
    _r = r;
}
double Promien::getPromien()
{
    return _r;
}

class Kolo : public Promien
{

public:
    double pole(Promien);
    double obwod(Promien);
};

double Kolo::pole(Promien promien)
{
    return 3.14 * promien.getPromien() * promien.getPromien();
}
double Kolo::obwod(Promien promien)
{
    return 2 * 3.14 * promien.getPromien();
}

class Kula : public Promien
{
public:
    double objetosc(Promien);
    double pole(Promien);
};

double Kula::objetosc(Promien promien)
{
    return double(4) / double(3) * 3.14 * promien.getPromien() * promien.getPromien() * promien.getPromien();
}
double Kula::pole(Promien promien)
{
    return 4 * 3.14 * promien.getPromien() * promien.getPromien();
}
int main()
{

    Promien promien;

    Kolo kolo;
    promien.setPromien(1);
    cout << "Pole ko�a wynosi: " << kolo.pole(promien) << endl;
    cout << "Obw�d ko�a wynosi: " << kolo.obwod(promien) << endl;

    Kula kula;
    promien.setPromien(2);
    cout << "Obj�to�� kuli wynosi: " << kula.objetosc(promien) << endl;
    cout << "Pole powierzchni kuli wynosi: " << kula.pole(promien) << endl;

    return 0;
}
