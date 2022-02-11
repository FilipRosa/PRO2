#include <iostream>
#include <cstdlib> //kniznica potrebna pre pracu s nahodnymi cislami
using namespace std;

int main()
{
    int nahoda;
    int pocitadlo = 0;
    srand(time(NULL)); //incializacia generatora nahodnych cisel
    do
    {
        nahoda = rand() % 6 + 1; //rand() funkcia na generovanie nahodneho cisla
        cout << nahoda << endl;
        pocitadlo++;
    } while (nahoda != 6); //!= je vlastne nerovna sa
    cout << "6tku si hodil na " << pocitadlo << " pokus.";
}

