#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Nota? ";
    int nota;
    cin >> nota;
    if (nota < 5)
    {
        cout << "Bajo\n";
    }
    if (nota < 7)
    {
        cout << "Medio\n";
    }
    if (nota <= 10)
    {
        cout << "Alto\n";
    }
}
