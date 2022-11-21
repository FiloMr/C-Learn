#include <iostream>
#include <cmath>
#include "Ulamek.h"
using namespace std;

int main()
{
  int l1, m1, l2, m2;
  cout << "podaj licznik i mianownik pierwszego ulamka\n";
  cin >> l1;
  cin >> m1;
  cout << "podaj licznik i mianownik drugiego ulamka\n";
  cin >> l2;
  cin >> m2;
  Ulamek ul1;
  ul1.zapisz(l1, m1);
  Ulamek ul(l2, m2);
  cout << endl;

  ul1.wypisz();
  cout << " * ";
  ul.wypisz();
  cout << " = ";
  pomnoz(ul1, ul).wypisz();
  cout << endl;
  ul1.wypisz();
  cout << " + ";
  ul.wypisz();
  cout << " = ";
  dodaj(ul1, ul).wypisz();
  return 0;
}