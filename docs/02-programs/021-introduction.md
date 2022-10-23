---
label: 'Programas'
title: 'Programas'
---

## El ordenador

Un ordenador es como un robot capaz de ejecutar ciertas órdenes.

El conjunto de órdenes que es capaz de ejecutar un ordenador se llama **juego de instrucciones**.

El **juego de instrucciones**, junto con las reglas que hay que seguir para escribir dichas instrucciones y que el ordenador las entienda se llama **lenguaje máquina**.

Supongamos que tuviéramos un robot capaz de ejecutar las siguientes órdenes: *avanza*, *gira*, *dispara*. Esas tres palabras formarían el *juego de instrucciones* del robot.

Imaginemos que para dar órdenes al robot, es necesario escribirlas en un teclado, siguiendo estas reglas:
- Al terminar cada orden hay que pulsar la tecla *Enter*.
- Algunas órdenes llevan un parámetro que completa el significado de la instrucción (en el caso de *avanza* sería el número de metros, en el caso de *giro*, el número de grados). Dicho parámetro se escribe detrás de la instrucción, separado por un espacio en blanco.
- Si se escribe una lista de órdenes, el robot las ejecutará en el orden dado.

El *juego de instrucciones* junto con las reglas anteriores, formarían el *lenguaje máquina* de nuestro robot.

Un **programa** de nuestro robot sería una lista de instrucciones que le damos para que las ejecute. Por ejemplo:

```
avanza 10
dispara
gira 90
dispara
gira -180
dispara
```

Un ordenador funciona de manera muy similar. Lo que ocurre es que las órdenes que puede ejecutar se refieren todas a cálculos con datos que tiene almacenados en su memoria.

Por ejemplo, el *juego de instrucciones* de un ordenador tiene instrucciones como:

```
leer un dato de la memoria
escribir un dato en la memoria
sumar dos números
multiplicar dos números
...
```

Además, en el código máquina de un ordenador las instrucciones se escriben codificadas en binario (es decir, traducidas a un lenguaje en el que solo se usan dos símbolos: el 0 y el 1).

Por ejemplo, un programa para un ordenador podría tener el siguiente aspecto:

```
10011001110111010
01110101000011111
00111011100110001
```

## La consola de comandos (*shell*)

Para comunicarnos con el ordenador usamos el teclado, el ratón y la pantalla.

El ordenador nos da información sobre todo a través de la pantalla (también mediante sonidos).

Nosotros damos información al ordenador usando el ratón y también el teclado.

Para decir al ordenador qué queremos hacer usamos, normalmente, el ratón: en la pantalla aparecen *botones*, *iconos*, *menús*, etc. en los que podemos *hacer clic* para que el ordenador haga lo que queramos. Ese conjunto de botones, iconos, menús, etc. constituyen un **interfaz gráfico de usuario** (*GUI*, *Graphical User Interface*) para el ordenador. Y es lo que usamos con más frecuencia.

Sin embargo, el ordenador nos proporciona otro tipo de interfaz para decirle qué queremos hacer: la **consola de comandos**.

La *consola de comandos* es una ventana donde podemos escribir *comandos*, es decir, *órdenes* que le dicen al ordenador lo que queremos hacer.

Existen distintas consolas de comandos para los distintos sistemas operativos (*Windows*, *MacOS*, *Linux*). Aquí usaremos la consola de comandos de Linux, a la que se llama genéricamente la *shell*.

Para abrir una consola de comandos en Linux, pulsa simultáneamente las teclas *Ctrl*, *Alt* y *T*. También puedes escribir *terminal* en el buscador del ordenador.

Se abrirá una pantalla típicamente negra, como la siguiente:

Prueba a escribir las siguientes órdenes, y observa cómo el ordenador las ejecuta:

## Lenguajes de alto nivel

Escribir programas en código máquina es muy complicado, como es obvio.

Para facilitar la escritura de programas se inventaron lenguajes más sencillos: los **lenguajes de alto nivel**. Ejemplos de estos lenguajes son: JavaScript, Java, C, Python, C++, Lisp,...

Por ejemplo, se muestra ahora dos versiones del mismo programa: una escrita en código máquina, y la otra escrita en C++.

```
01010101
01001000 10001001 11100101 
10111111 00000100 00100000 01000000 00000000
10111000 00000000 00000000 00000000 00000000
11101000 11110111 11111110 11111111 11111111
10111000 00000000 00000000 00000000 00000000
01011101
11000011
01001000 01100101 01101100 01101100 01101111 00100001 00000000

```

```cpp
#include <cstdio>

int main()
{
    printf("Hello!");
}
```
    
Aunque la segunda versión es todavía difícil de entender, lo que está claro es la primera es mucho más complicada. Al menos, se ve que hay palabras escritas en inglés.

## Compilar

El ordenador es una máquina capaz de ejecutar programas escritos en código máquina.

Pero, no es capaz de ejecutar directamente programas escritos en lenguajes de alto nivel.

Por lo tanto, si queremos que el ordenador ejecute un programa escrito en un lenguaje de alto nivel, como C++, tendremos que traducirlo a código máquina antes de que el ordenador lo ejecute.

**Compilar** un programa es traducirlo a código máquina.

Para traducir programas escritos en lenguajes de alto nivel a código máquina, utilizamos unos programas llamados **compiladores**.

El proceso para escribir un programa en C++ y ejecutarlo sería, pues, el siguiente:

1. Escribir el programa en C++ usando un **editor** (programa para escribir textos), y guardarlo en un archivo (**archivo fuente**).
2. Compilar el **archivo fuente** usando un **compilador**, y guardar el resultado en un archivo (**archivo ejecutable**).
3. Decirle al ordenador que ejecute el programa.

Vamos a ver un ejemplo. Escribiremos un programa en C++, lo compilaremos, y lo ejecutaremos. Todo el proceso lo haremos usando una *consola de comandos*.

1. Abre una consola de comandos.
2. Escribe el siguiente comando en la consola:
```bash

```
2. Escribe el programa dado como ejemplo antes.
3. Guarda el archivo con el nombre *hello.cpp* (este es el *archivo fuente*).
4. Abre una consola de comandos y escribe esta orden (el compilador que usamos se llama *g++*):
```bash
g++ hello.cpp -o hello
```
5. La orden anterior habrá traducido el archivo fuente a código máquina, y habrá guardado el resultado en un archivo llamado *hello* (este es el *archivo ejecutable*).
6. Ejecuta el programa que acabas de crear, escribiendo esto en la consola de comandos:
```bash
./hello
```

## Herramientas
