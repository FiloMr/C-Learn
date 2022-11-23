#include <iostream>  
using namespace std;
class Szef;          
class Pracownik  
{  
    
    public: 
	string nazwa; 
    int godziny_pracy;  
	int stawka_godzinowa;
    void setdata(string pNazwa,int pGodziny_pracy, int pStawka_godzinowa)  
    {  
        nazwa=pNazwa; 
		godziny_pracy=pGodziny_pracy;
		stawka_godzinowa=pStawka_godzinowa; 
    }  
    friend void Wynagrodzenie(Pracownik,Szef);         // friend function.  
};  
class Szef  
{  
  
	
    public:  
    string nazwa;
    int godziny_pracy;  
	int stawka_godzinowa;
    void setdata(string pNazwa,int pGodziny_pracy, int pStawka_godzinowa)  
    {  
        nazwa=pNazwa; 
		godziny_pracy=pGodziny_pracy;
		stawka_godzinowa=pStawka_godzinowa; 
    }  
    friend void Wynagrodzenie(Pracownik,Szef);                    // friend function  
};  
void Wynagrodzenie(Pracownik pPracownik,Szef pSzef)  
{  
   
    cout <<"Imie pracownika "<<pPracownik.nazwa<<endl<<" Wynagrodzenie pracownika "<< pPracownik.godziny_pracy*pPracownik.stawka_godzinowa << endl;  
    cout <<"Imie Szefa "<< pSzef.nazwa<<endl<<" Wynagrodzenie szefa " << pSzef.godziny_pracy*pSzef.stawka_godzinowa << endl; 
     
}  
   int main()  
{  
   Pracownik pPracownik;  
   Szef pSzef;  
   pPracownik.setdata("Dave",40,8);  
   pSzef.setdata("Justin", 60, 200);  
   Wynagrodzenie(pPracownik,pSzef);  
    return 0;  
 }    
