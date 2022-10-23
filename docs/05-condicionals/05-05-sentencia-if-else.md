# Sentencia `if/else`

Sentencia que comprueba si se cumple una condición. Si se cumple, ejecuta un bloque de sentencias. Si no se cumple, ejecuta otro bloque de sentencias distinto.


# Sintaxis

```C++
if (condición)
{
    sentencias_si_se_cumple;
}
else
{
    sentencias_si_NO_se_cumple;
}
```


# Ejemplo

```C++
cout << "¿Cuál es su nota? ";
int nota;
cin >> nota;
if (nota < 5)
{
    cout << "Supenso";
}
else
{
    cout << "Aprobado";
}
cout << "\n";
```

![img](../../static/img/if-else-flowchart-example.png)


# Ejercicios

1.  Elige el diagrama de flujo correspondiente al siguiente código:
    
    ```C++
    if (x > 0)
    {
        cout << "positivo";
    }
    else
    {
        cout << "menor o igual que cero";
    }
    ```
    
    Opción a:
    
    ![img](../../static/img/05-05-sentencia-if-else-ej1a.png)
    
    Opción b:
    
    ![img](../../static/img/05-05-sentencia-if-else-ej1b.png)
    
    Opción c:
    
    ![img](../../static/img/05-05-sentencia-if-else-ej1c.png)

2.  Escribe el código correspondiente al siguiente diagrama de flujo:
    
    ![img](../../static/img/05-05-sentencia-if-else-ej2.png)
    
3. 
