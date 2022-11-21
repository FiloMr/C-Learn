#include <iostream>
#include "source.h"

using namespace std;

void randArr(int arr[])
{
    for (int i = 0; i < 49; i++)
    {
        arr[i] = rand() % 100;
    }
    arr[50] = 101;
    for (int i = 0; i < 50; i++)
    {
        cout << "Elements no " << i + 1 << "::" << arr[i] << endl;
    }
    
}