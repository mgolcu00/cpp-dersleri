#include <iostream>

using namespace std;

int main()
{
    int sayi = 40;
    char isaret = 'M';
    bool dogrumu = false;
    int girdi;
    cout << "bir sayi girin : ";
    cin >> girdi;

//ctrl+k+c
    // if (girdi == sayi)
    // {
    //     cout << "basarili giris";
    // }
    // else
    // {
    //     cout << "basarisiz";
    // }

    if (girdi == sayi)
    {
        cout << isaret;
    }
    else if (dogrumu == false)
    {
        cout << "sartli gecis";
    }
    else
    {
        cout << "basarisiz";
    }
    return 0;
}