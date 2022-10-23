# Comparaciones

Los símbolos que representan las comparaciones se llaman **operadores relacionales**: relacionan dos valores de cierto tipo, y dan como resultado un valor booleano (`true` o `false`).

| Operador | Significado       |
|-------- |----------------- |
| `>`      | Mayor que         |
| `<`      | Menor que         |
| `>=`     | Mayor o igual que |
| `<=`     | Menor o igual que |
| `==`     | Igual a           |
| `!=`     | Distinto que      |


# Ejemplo

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Comparaciones de números:\n";
    if (1 == 1.0)
    {
        cout << "1 es igual que 1.0\n\n";
    }
    cout << "Comparaciones de caracteres:\n";
    if ('b' < 'c')
    {
        cout << "\'b\' es menor que \'c\' (orden alfabético)\n\n";
    }
    cout << "Comparaciones de strings:\n";
    if ("casa"s < "cosa"s)
    {
        cout << "\"casa\" es menor que \"cosa\" (orden alfabético)\n\n";
    }
    cout << "Cuidado: compara códigos ASCII, por lo que:\n";
    if ("Cosa"s < "casa"s)
    {
        cout << "\"Cosa\" es menor que \"casa\"\n\n";
    }
    cout << "Cuidado: no funciona con \'char[]\':\n";
    if ("cosa" < "casa")
    {
        cout << "\"cosa\" es menor que \"casa\"\n";
    }
}
```
