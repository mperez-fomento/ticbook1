# Tipos de datos

Los datos que maneja un programa pueden ser de distintos tipos: números, textos&#x2026;

Un tipo de datos especifica qué valores pueden tener los datos de ese tipo, y, también, qué operaciones se pueden realizar con ellos. Por ejemplo, los números se pueden sumar, pero los textos no.

En C++ cada tipo de dato tiene un nombre.


# Principales tipos de datos

| Nombre   | Tipo de valores                                                |
|-------- |-------------------------------------------------------------- |
| `int`    | números enteros                                                |
| `double` | números con decimales                                          |
| `char`   | caracteres de escritura (letras, signos de puntuación&#x2026;) |
| `char[]` | texto básico (*secuencia de caracteres*)                       |
| `string` | texto mejorado                                                 |


# Literales

Se llama literales a las expresiones que utilizamos para representar los valores de cada tipo de dato.

| Tipo     | Reglas para escribir literales              | Ejemplos             |
|-------- |------------------------------------------- |-------------------- |
| `int`    | Escribir los dígitos                        | `10`, `-2359`        |
| `double` | Escribir dígitos, separar decimales con `.` | `1.23`, `-1234.1`    |
| `char`   | Escribir el carácter entre comillas simples | `'a'`, `'5'`, `'\n'` |
| `char[]` | Escribir el texto entre comillas dobles     | `"Esto es char"`     |
| `string` | Entre comillas dobles con una `s` al final  | `"Esto es string"s`  |


# Escribir datos en la consola

Cualquiera de los tipos de datos anteriores se puede escribir en la consola usando la sentencia que vimos anteriormente, `cout`.

Escribe el siguiente programa, y observa el resultado de la ejecución:

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << -1234;
    cout << '\n';
    cout << 12.345;
    cout << '\n';
    cout << '5';
    cout << '\n';
    cout << "string\n"s;
}
```


# Operaciones con los datos

Como hemos dicho, cada tipo de datos determina qué operaciones se pueden realizar con los datos de ese tipo.

Los datos numéricos (`int`, `double`) admiten todas las operaciones aritméticas comunes. Podemos escribir las operaciones directamente en nuestro programa. Al ejecutar el programa, el ordenador evaluará la operación y utilizará el resultado de la misma.

Escribe el siguiente programa:

```C++
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
```

Compílalo y ejecútalo para ver el resultado.

Las cadenas de caracteres también admiten ciertas operaciones, pero las estudiaremos más adelante.


# Concatenar escrituras en la consola

Podemos hacer más cortos los programas, enviando a la consola varios datos en una sola sentencia.

Las sentencias

```C++
cout << "Número Pi: ";
cout << M_PI;
cout << '\n';
```

se pueden concatenar en una única sentencia, de este modo:

```C++
cout << "Número Pi: " << M_PI << '\n';
```

Concatena las sentencias del siguiente programa en una única sentencia:

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << "El coseno de 90° es: ";
    cout << cos(M_PI/2);
    cout << "\n";
}
```
