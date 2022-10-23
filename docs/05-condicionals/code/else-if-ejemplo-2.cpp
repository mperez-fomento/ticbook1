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
    else if (nota < 7)
    {
        cout << "Medio\n";
    }
    else
    {
        cout << "Alto\n";
    }
}
