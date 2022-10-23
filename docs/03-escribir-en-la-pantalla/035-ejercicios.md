1.  Repaso
2.  Repaso
3.  Salida
4.  Crea un archivo fuente llamado \`ejercicio4.cpp\`, y copia en él el siguiente código, pero corrigiendo los errores que hay en él.
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        cout << "El logaritmo decimal de 10 es: " log10(10) \n;
        cout << "El logaritmo decimal de 100 es: " log10(100) "\n";
        cout << "El logaritmo decimal de 1000 es: log10(1000) \n";
    }
    ```
    
    Una vez corregido, el programa debe escribir en la consola el texto:
    
    ```bash
    El logaritmo decimal de 10 es: 1.
    El logaritmo decimal de 100 es: 2.
    El logaritmo decimal de 1000 es: 3.
    ```
    
    Además, el código fuente debe contener las expresiones `log10(10)`, `log10(100)` y `log10(1000)`.
5.  Crea un nuevo archivo fuente llamado `ejercicio5.cpp`, y escribe en él un programa que escriba en la pantalla lo siguiente:
    
    ```bash
      / _ \
    \_\(_)/_/
     _//"\\_
      /   \
    ```
6.  Crea un archivo fuente llamado `ejercicio6.cpp`, y copia en él el código siguiente:
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        cout << "La raíz cuadrada de 25 es ";
        cout << sqrt(25);
        cout << "\n";
    }
    ```
    
    A continuación, modifica el programa de modo que la salida por consola sea la misma, pero con una sola sentencia `cout`.
7.  Crea un archivo fuente llamado `ejercicio7.cpp`, copia el código siguiente. Luego, compila el programa para ver los errores que tiene, corrige los errores, y vuelve a compilarlo. Repite el proceso hasta que el programa funcione correctamente mostrando en la pantalla el texto `El creador de C++ se llama Bjarne Stroustrup.`
    
    ```C++
    #include "ticlib.h"
    
    int main()
    {
        cout << "El creador de C++ se llama Bjarne Stroustrup.\n
    }
    ```
8.  Crea un archivo fuente llamado `ejercicio8.cpp`. Escribe en él un programa que muestre lo siguiente en la consola:
    
    ```bash
      /\
     //\\
    ///\\\
    ```
9.  ¿Qué salida por consola produce cada sentencia?
    -   `cout << "\"hola\"";`
    -   `cout << "2+3";`
    -   `cout << 2+3;`
    -   `cout << 5/2;`
    -   `cout << 5.0/2.0;`
    -   `cout << 5%2;`
10. Escribe un programa que escriba lo siguiente en la consola, pero **usando una única sentencia `cout`**:
    
    ```bash
    H
    e
    l
    l
    o
    !
    ```
    
    El archivo fuente debe llamarse `ejercicio10.cpp`.
