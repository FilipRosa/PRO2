#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    int nahoda, pocet;
    int parne = 0;
    int neparne = 0;
    const int dlzkaPola = 10; //konstanta dlzkaPola ma stalu hodnotu, sluzi nam na to, aby sme potom v kazdom cykle nemuseli prepisovat cisla, ked budeme chciet iny pocet prvkov

    /* tieto premenne nahradime jednym polom pole_cisla
    int jedna = 0;
    int dva = 0;
    int tri = 0;
    int styri = 0;
    int pat = 0;
    int sest = 0;
    int sedem = 0;
    int osem = 0;
    int devat = 0;
    */
    
    int pole_cisla[dlzkaPola]; //deklaracia pola, v hranatej zatvorke je pocet prvkov
    // pole_cisla[0] = 5; //k prvkom pola pristupujeme cez index v hranatej zatvorke, takto sme do prvku [0] priradili hodnotu 5

    for (int i = 0; i < dlzkaPola; i++) //cyklus na naplnenie vsetkych prvkov hodnotou 0
    {
        pole_cisla[i] = 0;
    }
    
    /*
    for (int i = 0; i < dlzkaPola; i++) //cyklus na vypis vsetkych prvkov pola
    {
        cout << pole_cisla[i] << " ";
    }
    cout << endl;
    */

    srand(time(NULL));
    cout << "Zadaj pocet nahodnych cisiel:" << endl;
    cin >> pocet;
    cout << "Nahodne cisla:" << endl;
    for (int i = 1; i <= pocet; i++)
    {
        nahoda = rand() % 9 + 1;
        cout << nahoda << " - ";

        pole_cisla[nahoda]++; //zvysenie hodnoty daneho prvku o jedna

        if (nahoda % 2 == 1)
        {
            cout << "neparne";
            neparne++;
        }
        else
        {
            cout << "parne";
            parne++;
        }
        cout << endl;
    }
    cout << "Pocet parnych cisiel: " << parne << endl;
    cout << "Pocet neparnych cisiel: " << neparne << endl;

    for (int i = 1; i < dlzkaPola; i++) //cyklus na vypis vsetkych prvkov pola
    {
        cout << "Pocet " << i << ": " << pole_cisla[i] << endl;
    }
    cout << endl;
}