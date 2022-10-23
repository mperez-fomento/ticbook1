 #include "ticlib.h"

 using namespace std;

 int main()
 {
     // Envía a la consola el mensaje: "Calculadora de triángulos\n"
     cout << "Calculadora de triángulos\n";
     // Envía a la consola el mensaje: "Escribe la base: "
     cout << "Escribe la base: ";
     // Crea una variable de tipo double llamada base con valor inicial 0.0
     double base {0.0};
     // Lee de la consola un número decimal y guárdalo en la variable base
     cin >> base;
     // Envía a la consola el mensaje: "Escribe la altura: "
     cout << "Escribe la altura: ";
     // Crea una variable de tipo double llamada altura con valor inicial 0.0
     double altura {0.0};
     // Lee de la consola un número decimal y guárdalo en la variable altura
     cin >> altura;
     // Envía a la consola el mensaje "El área del triángulo es: "
     cout << "El área del triángulo es: ";
     // Envía a la consola el resultado de la operación base * altura / 2
     cout << base*altura/2;
 }
