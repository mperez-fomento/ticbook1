#include "ticlib.h"

using namespace std;

int main()
{
    cout << M_PI; // El número PI
    cout << '\n';
    cout << 2 + 3*5; // * es producto
    cout << '\n';
    cout << 5 - 12/3;
    cout << '\n';
    cout << 10%3; // Resto de la división 10/3
    cout << '\n';
    cout << fmax(15, -100); // El mayor de los dos
    cout << '\n';
    cout << fmin(15, -100); // El menor de los dos
    cout << '\n';
    cout << round(1.6); // Redondea: 2
    cout << '\n';
    cout << floor(1.6); // Trunca: 1
    cout << '\n';
    cout << pow(2, 3); // Potencia: 2^3
    cout << '\n';
    cout << sqrt(25); // Raíz cuadrada
    cout << '\n';
    cout << log10(1000); // Logaritmo en base 10
    cout << '\n';
    cout << log(3); // Logaritmo en base e
    cout << '\n';
    cout << exp(2); // e^2
    cout << '\n';
    cout << sin(M_PI/6); // seno (ángulo en radianes)
    cout << '\n';
    cout << atan(1); // arcotangente (resultado en radianes)
    cout << '\n';
}
