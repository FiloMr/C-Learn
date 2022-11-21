#include <iostream>
#include "source.h"


using namespace std;

int szukaj(int numberChoose, int arr[])
{
    for (int i = 0; i < 50; i++)
    {
        if (numberChoose == arr[i])
        {
            cout << "Twoja liczba została znaleziona w tablicy pod indexem " << i << endl;
            break;
        }
        else if (numberChoose == arr[50])
        {
            cout << "Twojej liczby nie ma w tablicy " << endl;
            break;
        }
    }
    return 0;
}