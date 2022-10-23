# Tipo `bool`

Los valores booleanos, `true` y `false`, forman un tipo de datos, que se llama `bool`.

Podemos crear variables de ese tipo, y almacenar en ellas valores booleanos, directamente (usando los literales que representan esos valores: `true`, `false`), o indirectamente, almacenando el resultado de una expresión booleana.


# Ejemplos

```C++
bool a {true};
bool b {false};
bool c {5 < 1};
bool d {b || c}; // false
```

```C++
bool vivo {true};
if (vivo)
{
    cout << "Estoy vivo\n";
}
```
