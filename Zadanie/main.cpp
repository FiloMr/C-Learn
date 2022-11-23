#include <iostream>
#include <string>
using namespace std;
class Egzamin
{
private:
    int godzinaRozpoczecia,
        int godzinaZakonczenia,
public : string nazwaPrzedmiotu,
     string data,
     void   start(int pGodzinaRozpoczecia)
    {
        godzinaRozpoczecia = pGodzinaRozpoczecia
    }
    void stop()
    {
        godzinaZakonczenia = godzinaRozpoczecia + 2;
    }
};


int main()
{
    return 0;
}