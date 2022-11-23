#include <iostream>
#define _USE_MATH_DEFINES // w celu u¿ycia sta³ej M_PI, która nie jest zdefiniowana w standardowym C/C++
#include <cmath>
using namespace std;
// Definicja klasy Promien:
class Promien {
 // Deklaracja prywatnej zmiennej cz³onkowskiej:
 double _r;
public:
 // Prototypy publicznych funkcji dostêpowych:
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
* Klasa Kolo jest klas¹ zaprzyjaŸnion¹ klasy Promien.
*/
public:
 double pole(Promien);
 double obwod(Promien);
};
// Definicje metod klasy Kolo:
double Kolo::pole(Promien promien) {
 return 3.14 * promien.getPromien() * promien.getPromien();
 /* UWAGA
 * W ciele funkcji cz³onkowskiej pole() nale¿¹cej do klasy Kolo, która jest „przyjacielem” klasy Promien,
 * wykorzystano prywatn¹ zmienn¹ cz³onkowsk¹ _r zdefiniowan¹ w klasie Promien.
 */
}
double Kolo::obwod(Promien promien) {
 return 2 * 3.14 * promien.getPromien();
 /* UWAGA
 * Metoda obwod() z klasy Kolo, bêd¹cej „przyjacielem” klasy Promien, wykorzystuje prywatn¹ zmienn¹
 * cz³onkowsk¹ _r zdefiniowan¹ w klasie Promien.
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
 * W treœci funkcji cz³onkowskiej objetosc() nale¿¹cej do klasy Kula (która jest „przyjacielem” klasy Promien)
 * wykorzystano prywatn¹ zmienn¹ cz³onkowsk¹ _r zdefiniowan¹ w klasie Promien.
 */
}
double Kula::pole(Promien promien) {
 return 4 * 3.14 * promien.getPromien() * promien.getPromien();
}
int main() {
 // Utworzenie obiektu promien jako instancji klasy Promien:
 Promien promien;
 // Utworzenie obiektu kolo:
 Kolo kolo; // Obiekt kolo jest instancj¹ klasy Kolo, która jest „przyjacielem” klasy Promien.
 // Ustalenie promienia ko³a na 1:
 promien.setPromien(1); // wywo³anie metody instancyjnej klasy Promien
 // Obliczenie i prezentacja pola i obwodu ko³a dla zadanego promienia:
 cout << "Pole ko³a wynosi: " << kolo.pole(promien) << endl;
 cout << "Obwód ko³a wynosi: " << kolo.obwod(promien) << endl;
 /* UWAGA
 * Za poœrednictwem metod pole() i obwod() obiektu kolo, bêd¹cego instancj¹ klasy Kolo (która jest klas¹
 * zaprzyjaŸnion¹ klasy Promien), uzyskano dostêp do prywatnej zmiennej cz³onkowskiej _r zdefiniowanej
 * w klasie Promien.
 * Nale¿y zwróciæ uwagê, ¿e argument wywo³ania metod pole() i obwod() jest obiektem promien klasy Promien.
 */

 // Utworzenie obiektu kula:
 Kula kula; // obiekt kula jest instancj¹ klasy Kula, która jest „przyjacielem” klasy Promien
 promien.setPromien(2); // wywo³anie metody instancyjnej klasy Promien
 cout << "Objêtoœæ kuli wynosi: " << kula.objetosc(promien) << endl;
 cout << "Pole powierzchni kuli wynosi: " << kula.pole(promien) << endl;

 /* UWAGA
 * Dostêp do prywatnej zmiennej cz³onkowskiej _r zdefiniowanej w klasie Promien uzyskano za pomoc¹ metod
 * objetosc() i pole() obiektu kula, bêd¹cego instancj¹ klasy Kula. Przy tym klasa Kula jest klas¹
 * zaprzyjaŸnion¹ klasy Promien.
 * Obiektem promien klasy Promien jest argument wywo³ania metod objetosc() i pole().
 */
 return 0;
}
