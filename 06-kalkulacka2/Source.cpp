# include <iostream>
using namespace std;

int main()
{
    char operacia, next;
    float cislo1, cislo2;

    do
    {
        cout << "Zadaj priklad napr. 10 + 5: ";
        cin >> cislo1 >> operacia >> cislo2;

        switch (operacia)
        {
        case '+':
            cout << cislo1 << " + " << cislo2 << " = " << cislo1 + cislo2 <<endl << endl;
            break;

        case '-':
            cout << cislo1 << " - " << cislo2 << " = " << cislo1 - cislo2 << endl << endl;
            break;

        case '*':
            cout << cislo1 << " * " << cislo2 << " = " << cislo1 * cislo2 << endl << endl;
            break;

        case '/':
            cout << cislo1 << " / " << cislo2 << " = " << cislo1 / cislo2 << endl << endl;
            break;

        default:
            cout << "Zly operator!!!";
            break;
        }
        cout << "Chces pokracovat? (a/n)" << endl;
        cin >> next;
    } while (next == 'a');
    return 0;
}