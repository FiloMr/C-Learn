#include <iostream>
#define _USE_MATH_DEFINES // w celu u�ycia sta�ej M_PI, kt�ra nie jest zdefiniowana w standardowym C/C++
#include <cmath>
using namespace std;
// Definicja klasy Promien:
class Promien {
 // Deklaracja prywatnej zmiennej cz�onkowskiej:
 double _r;
public:
 // Prototypy publicznych funkcji dost�powych:
 void setPromien(double); // setter
 double getPromien(); // getter

 
};
// Definicje metod klasy Promien:
void Promien::setPromien(double r) {
 _r = r;
}
double Promien::getPromien() {
 return _r;
}

class Kolo : public Promien {
/* UWAGA
* Klasa Kolo jest klas� zaprzyja�nion� klasy Promien.
*/
public:
 double pole(Promien);
 double obwod(Promien);
};
// Definicje metod klasy Kolo:
double Kolo::pole(Promien promien) {
 return 3.14 * promien.getPromien() * promien.getPromien();
 /* UWAGA
 * W ciele funkcji cz�onkowskiej pole() nale��cej do klasy Kolo, kt�ra jest �przyjacielem� klasy Promien,
 * wykorzystano prywatn� zmienn� cz�onkowsk� _r zdefiniowan� w klasie Promien.
 */
}
double Kolo::obwod(Promien promien) {
 return 2 * 3.14 * promien.getPromien();
 /* UWAGA
 * Metoda obwod() z klasy Kolo, b�d�cej �przyjacielem� klasy Promien, wykorzystuje prywatn� zmienn�
 * cz�onkowsk� _r zdefiniowan� w klasie Promien.
 */
}

class Kula : public Promien {
public:
 double objetosc(Promien);
 double pole(Promien);
};
// Definicje metod klasy Kula:
double Kula::objetosc(Promien promien) {
 return double(4)/double(3) * 3.14 * promien.getPromien() * promien.getPromien() * promien.getPromien();
 /* UWAGA
 * W tre�ci funkcji cz�onkowskiej objetosc() nale��cej do klasy Kula (kt�ra jest �przyjacielem� klasy Promien)
 * wykorzystano prywatn� zmienn� cz�onkowsk� _r zdefiniowan� w klasie Promien.
 */
}
double Kula::pole(Promien promien) {
 return 4 * 3.14 * promien.getPromien() * promien.getPromien();
}
int main() {
 // Utworzenie obiektu promien jako instancji klasy Promien:
 Promien promien;
 // Utworzenie obiektu kolo:
 Kolo kolo; // Obiekt kolo jest instancj� klasy Kolo, kt�ra jest �przyjacielem� klasy Promien.
 // Ustalenie promienia ko�a na 1:
 promien.setPromien(1); // wywo�anie metody instancyjnej klasy Promien
 // Obliczenie i prezentacja pola i obwodu ko�a dla zadanego promienia:
 cout << "Pole ko�a wynosi: " << kolo.pole(promien) << endl;
 cout << "Obw�d ko�a wynosi: " << kolo.obwod(promien) << endl;
 /* UWAGA
 * Za po�rednictwem metod pole() i obwod() obiektu kolo, b�d�cego instancj� klasy Kolo (kt�ra jest klas�
 * zaprzyja�nion� klasy Promien), uzyskano dost�p do prywatnej zmiennej cz�onkowskiej _r zdefiniowanej
 * w klasie Promien.
 * Nale�y zwr�ci� uwag�, �e argument wywo�ania metod pole() i obwod() jest obiektem promien klasy Promien.
 */

 // Utworzenie obiektu kula:
 Kula kula; // obiekt kula jest instancj� klasy Kula, kt�ra jest �przyjacielem� klasy Promien
 promien.setPromien(2); // wywo�anie metody instancyjnej klasy Promien
 cout << "Obj�to�� kuli wynosi: " << kula.objetosc(promien) << endl;
 cout << "Pole powierzchni kuli wynosi: " << kula.pole(promien) << endl;

 /* UWAGA
 * Dost�p do prywatnej zmiennej cz�onkowskiej _r zdefiniowanej w klasie Promien uzyskano za pomoc� metod
 * objetosc() i pole() obiektu kula, b�d�cego instancj� klasy Kula. Przy tym klasa Kula jest klas�
 * zaprzyja�nion� klasy Promien.
 * Obiektem promien klasy Promien jest argument wywo�ania metod objetosc() i pole().
 */
 return 0;
}
