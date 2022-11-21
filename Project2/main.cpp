#include <iostream>
#include "source.h"

using namespace std;

int main()
{
    int arr[50];
    randArr(arr);
    int numberChoose;
    cout << "Podaj numer ktory chcesz wyszukac w tablicy " << endl;
    cin >> numberChoose;
    cout << "Podany numer to " << numberChoose << endl;
    szukaj(arr);
    return 0;
};