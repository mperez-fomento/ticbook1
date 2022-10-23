#include "ticlib.h"

using namespace std;

int main()
{
    int edad {0};
    cout << "Escriba su edad: ";
    cin >> edad;
    if (edad < 0)
    {
        cout << "La edad no puede ser negativa";
    }
    cout << "\n";
}
