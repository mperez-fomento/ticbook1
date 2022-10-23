
1.  C++ tiene una característica llamada ****conversión automática de tipos****. Consiste en que ciertos tipos de datos se convierten automáticamente a otros tipos cuando aquellos se utilizan en lugar de estos. Por ejemplo, un dato de tipo `int` puede convertirse automáticamente en `double` si se usa un `int` cuando se esperaba un `double`. Eso ocurre, por ejemplo, en este código:
    
    ```C++
    int x {2};
    double y {2.5};
    cout << x * y << "\n";
    ```
    
    En la expresión `x * y`, el valor de `x` se convierte automáticamente en `2.0`, y el resultado es, por tanto, de tipo `double` (`5.0`).
    
    Las reglas de conversión automática de tipos son complejas. En este ejercicio explorarás algunas de ellas.
    
    Para responder a las siguientes preguntas puedes escribir un programa y ver cuál es el resultado.
    
    -   ¿Cómo se realiza la conversión de `double` en `int`, en un caso como este?
        
        ```C++
        double x {1.2};
        int y {0};
        y = x;
        ```
    
    -   ¿Qué pasa si utilizamos un valor de tipo `double` para inicializar una variable de tipo `int`?
        
        ```C++
        int x {1.2};
        ```

2.  Seguimos con las conversiones de tipos. Los tipos `int` y `char` se convierten automáticamente el uno en el otro. Un dato de tipo `char`, como `'A'`, se convierte en el código ASCII del carácter correspondiente (en este caso, `65`). Un dato de tipo `int` (como `97`) se convierte en el carácter cuyo código ASCII es dicho dato (en este caso, `'a'`).
    
    Aprovecha estas conversiones automáticas para escribir un programa que nos diga el código ASCII del carácter que escribamos. El archivo fuente debe llamarse `ejerciciov2.cpp`.

3.  Aprovecha la conversión automática entre `int` y `char` para escribir un programa que nos diga el carácter correspondiente a un código ASCII dado por el usuario. El archivo fuente debe llamarse `ejerciciov3.cpp`.

4.  Colores en la consola.
    
    En la consola solo podemos escribir texto, pero podemos escribir texto con colores. Para ello, tenemos que enviar a la consola unos códigos (caracteres) que la consola interpreta como una orden para cambiar el color del texto. Si queremos volver al color anterior, tenemos que enviar otra secuencia de caracteres.
    
    Por ejemplo:
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        cout << "Este texto ";
        cout << "\033[31m"; // Secuencia que cambia el texto a color rojo
        cout << "en rojo ";
        cout << "\033[0m"; // Secuencia que restablece el color del texto al original
        cout << "es un ejemplo.\n";
    }
    ```
    
    Las secuencias de cambio de color siempre empiezan con `\033[`, y terminan con `m`. En medio hay que escribir el código del color.
    
    Estos son los códigos de los colores permitidos:
    
    | Color    | Código |
    |-------- |------ |
    | rojo     | 31     |
    | verde    | 32     |
    | azul     | 34     |
    | amarillo | 33     |
    | magenta  | 35     |
    | cian     | 36     |
    
    También se pueden incluir otros códigos que *formatean* el texto (negrita, subrayado&#x2026;):
    
    | Formato   | Código |
    |--------- |------ |
    | Negrita   | 1      |
    | Subrayado | 4      |
    | Invertido | 7      |
    | Normal    | 0      |
    
    Para enviar dos códigos a la vez, se separan con `;`. Por ejemplo:
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        cout << "Este texto ";
        cout << "\033[4;31m"; // Secuencia que cambia el texto a subrayado (4) y color rojo (31)
        cout << "en rojo y subrayado";
        cout << "\033[0m"; // Secuencia que restablece el color del texto al original
        cout << " es un ejemplo.\n";
    }
    ```
    
    Escribe un programa que escriba en la consola una lista de colores, de modo que el nombre de cada color esté escrito en el color correspondiente:
    
    ```bash
    rojo
    verde
    azul
    amarillo
    magenta
    cian
    ```
    
    El archivo fuente debe llamarse `ejerciciov4.cpp`.

5.  Leer textos de la consola.
    
    Para representar un texto utilizamos el tipo de datos `string` (también podemos utilizar `char[]`).
    
    Para leer un texto de la consola y guardarlo en una variable, usamos una *sentencia de entrada*:
    
    ```C++
    string texto;
    cin >> texto;
    ```
    
    Sin embargo, esa sentencia de entrada no funciona como podríamos esperar. Para comprobarlo, escribe el siguiente programa:
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        string s;
        cout << "Escribe un texto: ";
        cin >> s;
        cout << "Este es tu texto: " << s << "\n";
    }
    ```
    
    Ejecútalo, y escribe `Esto es una prueba` para ver el resultado. ¿Qué ves en la consola? Algo así:
    
    ```bash
    Escribe un texto: Esto es una prueba
    Este es tu texto: Esto
    ```
    
    Solo se escribe la primera palabra. ¿Qué ha pasado con el resto de lo que hemos escrito? La respuesta es que la sentencia `cin >> s;` solo guarda en `s` la primera palabra que se escriba en la consola (es decir, hasta encontrar el primer espacio en blanco).
    
    Entonces, ¿cómo podemos escribir un texto formado por varias palabras y guardarlo en una variable de tipo `string`?
    
    La solución es usar otra sentencia distinta para leer textos de la consola. La sentencia es esta:
    
    ```C++
    getline(cin, s); // Lee una línea entera de la consola y la guarda en s
    ```
    
    Prueba a sustituir la sentencia `cin >> s;` por `getline(cin, s);` en el programa anterior, y vuelve a probarlo. Ahora sí verás el texto completo.
    
    Esto es una pequeña desventaja de `cin >> s;`. Pero puede ser útil. Por ejemplo, si quieres que un usuario escriba su nombre y apellidos, podrías escribir un programa como este:
    
    ```C++
    #include "ticlib.h"
    
    using namespace std;
    
    int main()
    {
        string nombre;
        string apellido1;
        string apellido2;
        cout << "Escriba su nombre completo (nombre apellido1 apellido2): ";
        cin >> nombre; // Lee la primera palabra escrita (el nombre)
        cin >> apellido1; // Lee la segunda palabra escrita (el primer apellido)
        cin >> apellido2; // Lee la tercera palabra escrita (el segundo apellido)
        cout << "Nombre: " << apellido1 << " " << apellido2 << ", " << nombre << "\n";
    }
    ```
    
    Escribe este programa en un archivo llamado `ejerciciov5.cpp`

6.  Cadenas de caracteres.
    
    Hemos estudiado dos tipos de datos para representar textos: `char[]` y `string`. Casi siempre utilizamos el segundo. Ahora vamos a investigar un poco en el primero.
    
    ¿Cómo crear una variable de tipo `char[]`? Los corchetes se escriben detrás del nombre de la variable:
    
    ```C++
    char ejemplo[] {"hola"};
    ```
    
    ¿Por qué? Porque, realmente, los corchetes sirven para crear una lista de datos del tipo indicado al principio. Es lo que se llama un **tipo de datos compuesto**. De hecho, podríamos también crear listas de otros tipos de datos. Por ejemplo:
    
    ```C++
    int nums[] {1, 3, 5, 7};
    ```
    
    Esas listas de datos se llaman **arrays**. Pero nosotros no las usaremos, porque existen otras listas mejores, que se llaman **vectores**, y que estudiaremos más adelante. Por lo tanto, un `char[]` es, en realidad, un *array de char*.
    
    Una de las operaciones que podemos realizar con `char[]` (y con cualquier *array*) es acceder a uno de los caracteres del mismo, dando su posición (las posiciones se numeran empezando en `0`). La manera de hacerlo es esta:
    
    ```C++
    char ejemplo[] {"esto es un ejemplo"};
    cout << ejemplo << "\n"; // Se escribe en la consola el texto completo
    cout << ejemplo[0] << "\n"; // Se escribe la primera letra: e
    cout << ejemplo[6] << "\n"; // Se escribe la séptima letra: s
    ```
    
    Utilizando esto, y aplicando el ejercicio anterior, escribe un programa que pida al usuario su nombre, y le diga sus iniciales. El archivo debe llamarse `ejerciciov6.cpp`.

7. 
