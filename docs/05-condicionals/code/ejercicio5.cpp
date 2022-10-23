#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Valor absoluto\n"
    cout << "--------------\n"
    cout << "Escriba un número (con o sin decimales): "
    double num {0.0};
    cin << num;
    int valor_absoluto {num};
    if (valor_absoluto < 0.0)
    {
        valor_absoluto = -valor_absoluto;
    }
    cout << "El valor absoluto de " << num << " es " << valor_absoluto << "\n";
}
