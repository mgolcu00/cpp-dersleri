#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int satir = 10;
    int sutun = 20;
    int buyukluk;
    cout << "buyukluk seciniz (1-5 arasında olmalı) : ";
    cin >> buyukluk;
    char karakter = '*';

    for (int i = 1; i < satir * buyukluk; i++)
    {

        int aralik = sutun * buyukluk - (i * 2 - 1) / 2;

        for (int s = 0; s <aralik;s++){
            cout<<" ";
        }

        for(int k = 0 ; k <(i * 2 - 1);k++){
            cout<<karakter;
        }

        for (int s = 0; s <aralik;s++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}