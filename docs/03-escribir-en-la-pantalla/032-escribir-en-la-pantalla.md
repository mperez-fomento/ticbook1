# La sentencia `cout`

Para escribir un texto en la pantalla usamos la siguiente sentencia:

```C++
cout << "Texto";
```

El texto se escribirá en la misma consola en la que hemos ejecutado el programa.

`cout` representa a la consola, mientras que `<<` significa *escribir en la izquierda lo que hay a la derecha*, o *enviar a la izquierda lo que hay a la derecha*.

Escribe, en el editor, un programa que escriba en la consola el texto: *Todo es nada y menos que nada lo que se acaba y no contenta a Dios*.


# Saltos de línea

Escribe el siguiente programa en el editor:

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Hello!";
    cout << "Bye!";
}
```

Compila y ejecuta el programa. ¿Qué texto se escribe en la pantalla?

Solución: `Hello!Bye!`. Como ves, el texto se escribe todo seguido en la consola, aunque hayamos usados dos sentencias `cout`.

¿Cómo hacer para *escribir* un ****salto de línea****?

Hay una secuencia de símbolos especial que representa a un salto de línea: `\n`. Esa secuencia hay que escribirla entre comillas. Podemos escribirla en cualquier lugar del texto. El salto de línea se producirá en el lugar en que aparezca esa secuencia.

Escribe, compila y ejecuta el siguiente programa:

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Hello!\n";
    cout << "Bye!\n";
}
```

Ahora, se escribe cada texto en una línea distinta.

El programa anterior podría escribirse también así:

```C++
#include "ticlib.h"

using namespace std;

int main()
{
    cout << "Hello!\nBye!\n";
}
```
