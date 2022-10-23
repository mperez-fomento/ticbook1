# Operadores lógicos

Son operadores que combinan expresiones booleanas para obtener un valor booleano (`true` o `false`) como resultado.


# Operador *and*: `&&`

`p && q`: se cumple si se cumplen `p` y `q` simultáneamente.

Tabla de verdad:

| p       | q       | `p && q` |
|------- |------- |-------- |
| `true`  | `true`  | `true`   |
| `true`  | `false` | `false`  |
| `false` | `true`  | `false`  |
| `false` | `false` | `false`  |


# Operador *or*: `||`

`p || q`: se cumple cuando se cumple al menos una de las dos, `p` o `q`.

Tabla de verdad:

| p       | q       | `p II q` |
|------- |------- |-------- |
| `true`  | `true`  | `true`   |
| `true`  | `false` | `true`   |
| `false` | `true`  | `true`   |
| `false` | `false` | `false`  |


# Operador *not*: `!`

`!p`: se cumple cuando no se cumple `p`.

| p       | `!p`    |
|------- |------- |
| `true`  | `false` |
| `false` | `true`  |


# Ejemplos

`(5 > 1 && 1 > 2)`: `false` `(5 > 1 || 1 > 2)`: `true` `(5 > 1 || 1 < 2)`: `true` `!(5 > 1)`: `false`


# Precedencia de operadores

Orden en que se evalúan los operadores cuando aparecen varios en una expresión.

Precendencia de operadores lógicos y relacionales:

1.  Paréntesis
2.  `not` (`!`)
3.  Comparaciones
4.  `and` (`&&`)
5.  `or` (`||`)


## Ejemplo: `5 > 1 || 1 > 2 && 2 > 3`

Primero se evalúan los operadores relacionales (comparaciones):

`(5 > 1) || (1 > 2) && (2 > 3)` = `true || false && false`

Luego el operador `&&`:

`true || (false && false)` = `true || false`

Finalmente, el operador `||`:

`true || false` = `true`


## Ejemplo: `(5 > 1 || 1 > 2) && 2 > 3`

Primero se evalúa el paréntesis. Dentro del paréntesis, primero se evalúan los operadores relacionales (comparaciones):

`(5 > 1 || 1 > 2) && 2 > 3` = `(true || false) && 2 > 3`

Dentro del paréntesis, a continuación se evalúa el operador `||`:

`(true || false) && 2 > 3` = `true && 2 > 3`

En la expresión resultante tras evaluar el paréntesis, primero evaluamos los operadores relacionales (comparaciones):

`true && 2 > 3` = `true && false`

Finalmente, evaluamos el operador `&&`:

`true && false` = `false`


## Ejemplo: `! 5 > 1`

El operador `!` tiene prioridad sobre el operador `>`, por lo que habría que evaluarlo antes. El problema es que `!` debe acompañar a un valor booleano, pero aquí está acompañando a un valor de tipo `int`. En este caso, se va a realizar una conversión automática del tipo `int` al tipo booleano (`bool`). La conversión se realiza así: el `0` se convierte en `false`, y cualquier otro valor tipo `int` se convierte en `true`.

Por lo tanto, `! 5` es `! true`, que es `false`.

Así que:

`! 5 > 1` = `! true > 1` = `false > 1`

Ahora, nos encontramos con el problema contrario: el operador `>` compara números, pero aquí estamos intentando compara un valor booleano con un `int`. Lo que hace ahora el compilador es convertir automáticamente el valor booleano en `int`. Esa conversión se realiza así: `false` se convierte en `0`, y `true` se convierte en `1`. Así que:

`! 5 > 1` = `! true > 1` = `false > 1` = `0 > 1` = `false`


## Ejemplo: `!(1 > 5)`

Primero evaluamos el paréntesis, y luego aplicamos el operador `!`:

`!(1 > 5)` = `!false` = `true`


## Ejemplo: `!(5 > 1) || !(1 > 3 && !(2 > 7))`

`!(5 > 1) || !(1 > 3 && !(2 > 7))`

= `!true || !(false && !false)`

= `false || !(false && true)`

= `false || !false`

= `false || true`

= `true`
