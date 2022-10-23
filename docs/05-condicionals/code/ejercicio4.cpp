#include "ticlib.h"

int main()
{
    cout << "Área de un tríangulo.\n";
    cout << "Escriba la base y la altura, en ese orden, separadas por un espacio o en dos líneas: ";
    double base;
    cin >> base;
    double altura;
    cin >> altura;
    cout << "El área del triángulo es: " << base * altura / 2 << "\n";
}
