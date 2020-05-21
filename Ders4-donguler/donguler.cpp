#include <iostream>

using namespace std;

int main()
{

    char yildiz = '*';
    char tire = '-';
    int sayi = 0;

    for (int i = 0; i < 30; i++)
    {
        cout << yildiz;
    }

    cout << endl;

    while (sayi != 30)
    {

        if (sayi % 2 == 0)
        {
            cout << yildiz;
        }
        else
        {
            cout << tire;
        }
        sayi++;
    }
    cout << endl
         << "sayi = " << sayi;

    do
    {
        cout << endl
             << "do";
    } while (sayi != 30);




    //     for (int i = 1; i <= col*size; i++)
    // {
    //     int space = (row*size-(2*i-1))/2;
    //     for (int b = 0; b < space; b++)
    //         cout << " ";
    //     for (int j = 0; j < 2*i-1; j++)
    //         cout << karakter;
    //     for (int t = 0; t < space; t++)
    //         cout << " ";
    //     cout << endl;
    // }
    return 0;
}