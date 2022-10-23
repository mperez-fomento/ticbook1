#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Escriba su nota: ";
    int nota;
    cin >> nota;
    if (nota < 5)
    {
        cout << "Suspenso";
    }
    else if (nota < 6)
    {
        cout << "Suficiente";
    }
    else if (nota < 7)
    {
        cout << "Bien";
    }
    else if (nota < 9)
    {
        cout << "Notable";
    }
    else {
        cout << "Sobresaliente";
    }
    cout << "\n";
}
