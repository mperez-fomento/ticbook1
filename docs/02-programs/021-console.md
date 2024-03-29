# Qué es la consola de comandos

Para comunicarnos con el ordenador usamos el teclado, el ratón y la pantalla.

El ordenador nos da información sobre todo a través de la pantalla (también mediante sonidos).

Nosotros damos información al ordenador usando el ratón y también el teclado.

Para decir al ordenador qué queremos hacer usamos, normalmente, el ratón: en la pantalla aparecen *botones*, *iconos*, *menús*, etc. en los que podemos *hacer clic* para que el ordenador haga lo que queramos. Ese conjunto de botones, iconos, menús, etc. constituyen un **interfaz gráfico de usuario** (*GUI*, *Graphical User Interface*) para el ordenador. Y es lo que usamos con más frecuencia.

Sin embargo, el ordenador nos proporciona otro tipo de interfaz para decirle qué queremos hacer: la **consola de comandos**.

La *consola de comandos* es una ventana donde podemos escribir *comandos*, es decir, *órdenes* que le dicen al ordenador lo que queremos hacer.

Existen distintas consolas de comandos para los distintos sistemas operativos (*Windows*, *MacOS*, *Linux*). Aquí usaremos la consola de comandos de Linux, a la que se llama genéricamente la *shell*.


# Cómo abrir la consola de comandos

Para abrir una consola de comandos en Linux, pulsa simultáneamente las teclas *Ctrl*, *Alt* y *T*. También puedes escribir *terminal* en el buscador del ordenador.

Se abrirá una pantalla típicamente negra, como la siguiente:


# Cómo escribir comandos

Para dar una orden, hay que escribirla y pulsar *Enter*. El ordenador mostrará el resultado de la ejecución de la orden en la misma consola.

Prueba a escribir las siguientes órdenes, y observa cómo el ordenador las ejecuta:

```bash
echo "Hello, world"
date
cal
factor 1248
apt-get moo
```

Para repetir comandos escritos anteriormente, usa la tecla *flecha arriba*.

Para *cancelar* un comando (borrar el comando antes de pulsar *Enter*), pulsa *Ctrl+C*.

Para detener la ejecución de un comando, una vez iniciado, pulsa *Ctrl+C*.

La consola tiene una función de *autocompletado*, que se activa pulsando la tecla *Tab*. Si escribimos el comienzo de un comando, al pulsar *Tab* se completará automáticamente. Si hay varias formas de completarlo, pulsando dos veces *Tab* se muestra una lista de las opciones que hay.


# Gestión de archivos y carpetas

Los comandos de la consola permiten manejar el ordenador completo. Pero los comandos más importantes son los que nos permiten gestionar los archivos y carpetas del disco duro.

Para entender dichos comandos, debemos primero entender cómo se organizan los archivos y carpetas en el disco duro del ordenador.

En el disco duro hay dos tipos de objetos:

-   archivos (*files*): contienen información de distintos tipos (texto, imágenes, sonidos, programas&#x2026;);
-   carpetas (*folders* o *directories*): contienen otros archivos y carpetas.

Es decir, para agrupar archivos relacionados entre sí utilizamos carpetas. Por ejemplo, podemos guardar todas las fotos en una carpeta llamada *fotos*. Pero, además, las carpetas pueden contener otras carpetas. Por ejemplo, dentro de la carpeta *fotos*, podemos organizar los archivos según los años en que hicimos las fotos, guardándolas en carpetas llamadas *2020*, *2021*, etc.

Todo archivo o carpeta debe estar dentro de otra carpeta, excepto la primera carpeta que contiene a todas las demás. Dicha carpeta se llama *carpeta raíz*. Su nombre es el símbolo `/`.

Por lo tanto, podemos representar el contenido de un disco duro mediante un árbol, donde los nodos son carpetas o archivos. Por ejemplo:

Una carpeta importante es la *carpeta personal* (*home*). Cada usuario del ordenador tiene una carpeta personal, en la que se guardan sus archivos personales, y a la que solo él tiene acceso. Dicha carpeta se representa mediante el símbolo `~`, aunque, en realidad, es una carpeta cuyo nombre es igual al nombre del usuario, y que se encuentra dentro de una carpeta llamada `home`, que está en la carpeta raíz.


## Carpeta de trabajo

En todo momento, el sistema tiene una *carpeta de trabajo* (*working directory*): cuando realicemos cualquier operación con un archivo o carpeta, dicho archivo o carpeta se buscará en la carpeta de trabajo. Si no está allí, se producirá un error, aunque dicho archivo o carpeta exista en otro lugar del disco duro.

Cuando iniciamos la consola, la carpeta de trabajo es la carpeta personal del usuario que inicia la consola.


## Ver el contenido de la carpeta de trabajo

Para ver el contenido de la carpeta de trabajo usamos el comando `ls` (*list*).

Por ejemplo,

```bash
ls
```

El comando `ls` permite configurar el modo de mostrar el contenido mediante diversos parámetros. Algunos parámetros importantes son los siguientes:

-   `-l`: muestra un listado detallado (tamaño del archivo, permisos de acceso&#x2026;);
-   `-A` (`--almost-all`): muestra también archivos y carpetas ocultos;
-   `-h` (`--human-readable`): muestra los tamaños *reducidos* a Kilobytes, Megabytes, etc.;
-   `-S`: ordena por tamaños (primero los mayores);
-   `-t`: ordena por fecha de modificación (primero los más recientes);
-   `-X`: ordena por tipo de archivo (según la extensión);
-   `-r` (`--reverse`): invierte el orden;
-   `-F` (`--classify`): añade `*` a los programas y `/` a las carpetas.
-   `-R` (`--recursive`): muestra el contenido de la carpeta y de todas las carpetas contenidas en ella, y de las carpetas contenidas en estas, y así sucesivamente.

Cuando el nombre de un archivo o carpeta empieza por un punto, `.`, dicho archivo se considera *oculto*, y no se mostrará con el comando `ls`, a no ser que se use el parámetro `-A`.

Por ejemplo,

```bash
# Compara listado abreviado y listado completo:
ls
ls -l
# Incluye los archivos ocultos:
ls -A
# Muestra los tamaños de forma más humana:
ls -l -h
# Ordena los archivos por tamaño, de mayor a menor:
ls -S
# Ahora, de menor a mayor:
ls -S -r
# Muestra cuáles son programas y cuáles son carpetas:
ls -F
```


## Cambiar la carpeta de trabajo

Para cambiar la carpeta de trabajo, usamos el comando `cd` (*change directory*).

Por ejemplo,

```bash
ls
cd /
ls
cd ~
ls
```


## Rutas de acceso


### Rutas de acceso absolutas

Para localizar un archivo o carpeta, debemos saber en qué carpeta se encuentra, y en qué carpeta está guardada dicha carpeta, y así, sucesivamente, hasta llegar a la carpeta raíz. Dicho de otro modo: para poder encontrar un archivo en el disco duro, tenemos que saber qué carpetas tenemos que ir abriendo hasta encontrarlo. La lista de carpetas que tenemos que abrir hasta encontrar el archivo, incluyendo el nombre de dicho archivo, se llama *ruta de acceso* (*path*). Cada carpeta de la ruta de acceso se separa de la siguiente con el signo `/` (excepto la carpeta raíz, que ya incluye ese signo en su nombre). Por ejemplo, estas serían algunas rutas de acceso para archivos y carpetas del árbol anterior:


### Rutas de acceso relativas

También es posible utilizar *rutas de acceso relativas*, que describen las carpetas que hay que abrir para llegar al archivo o carpeta deseado, pero no empezando en la carpeta raíz, sino empezando en la carpeta de trabajo.

En un ruta de acceso, la carpeta de trabajo se representa por `.`. Por lo tanto, cualquier ruta que comience con `./` es una ruta de acceso relativa.

La carpeta que contiene a la carpeta de trabajo, o a una carpeta descrita por una ruta de acceso relativa, se representa por `..`. Por lo tanto, una ruta que comience con `../` es siempre una ruta de acceso relativa.

Si la ruta de acceso comienza con el nombre de una carpeta, se supone que es una ruta de acceso relativa, y, por tanto, que la carpeta inicial es una carpeta contenida en la carpeta de trabajo.

Finalmente, las rutas absolutas comienzan siempre por `/`, que es la carpeta raíz.

Por ejemplo:

```bash
# Rutas absolutas
/usr/bin
/sys/kernel
/home/hacker/bin/hack

# Rutas relativas
../../usr/bin
bin
./bin/hack
../hacker/bin/hack
```


### Rutas de acceso en comandos

Muchos de los comandos para gestionar archivos o carpetas permiten que indiquemos sobre qué archivos o carpetas queremos actuar, escribiendo la ruta de acceso a los mismos. Por ejemplo, para ver el contenido de la carpeta de trabajo usamos `ls`, según hemos visto antes. Pero, podemos usar el comando `ls` para ver el contenido de cualquier carpeta, escribiendo la ruta de acceso (absoluta o relativa) detrás del comando: `ls carpeta`.

Por ejemplo,

```bash
cd ~
# Ahora, la carpeta de trabajo es la carpeta personal
ls
# Se muestra el contenido de la carpeta de trabajo
ls ..
# Se muestra el contenido de la carpeta que contiene a
# la carpeta de trabajo.
ls /home
# Se muestra el contenido de la carpeta 'home', que está
# dentro de la carpeta raíz.
```

Ya hemos visto que, para cambiar la carpeta de trabajo, usamos el comando `cd` seguido de la carpeta que queremos convertir en carpeta de trabajo. Podemos usar una ruta de acceso absoluta o relativa. Por ejemplo:

```bash
cd /home/me/myfolder
# Orden equivalente, suponiendo que la carpeta de trabajo es la carpeta personal
# (/home/me)
cd myfolder
# También sería equivalente (pero poco útil):
cd ../me/myfolder
```

Sin embargo, el comando `cd` sin argumentos, cambia la carpeta de trabajo a la carpeta personal. Es decir, `cd` es lo mismo que `cd ~`.

```bash
cd ..
# Ahora la carpeta de trabajo es /home
cd
# Ahora la carpeta de trabajo vuelve a ser la carpeta personal
```


## Crear carpetas

Para crear una carpeta, usamos el comando `mkdir` (*make directory*), seguido de la ruta de acceso a la carpeta, incluyendo su nombre. Por ejemplo,

```bash
mkdir example
mkdir example/insideexample
```


## Crear archivos

Normalmente, los archivos los creamos con los programas que usamos para editarlos. Es decir, iniciamos el programa correspondiente, y luego guardamos el archivo usando los menús o teclas que el programa proporciona para ello. Por ejemplo, si queremos crear una hoja de cálculo, abriremos *Excel*, que nos proporcionará una hoja en blanco, escribimos lo que queramos, y lo guardamos usando el menú *Archivo*, o el botón correspondiente.

No obstante, es posible crear un archivo vacío desde la consola, usando el comando `touch`.

Por ejemplo,

```bash
touch ejemplo.txt
```


## Eliminar archivos y carpetas

Para eliminar archivos usamos el comando `rm` (*remove*). Para eliminar carpetas usamos `rm -r` (cuidado, se borra la carpeta y todo lo que contiene).


## Cambiar el nombre o mover archivos

Podemos cambiar el nombre de un archivo o carpeta, o bien mover un archivo o carpeta a otra ubicación, usando el comando `mv` (*move*).


## Copiar archivos o carpetas

Para copiar un archivo usamos el comando `cp` (*copy*). Para copiar una carpeta usamos el comando `cp -r`. En ambos casos, tenemos que especificar el archivo o carpeta de origen (el que queremos copiar), y la ruta de acceso de destino (dónde queremos copiarlo).


## Ejecutar programas

Algunos de los archivos que hay en el disco duro son programas. A esos archivos se les llama también *ejecutables* (porque se pueden ejecutar), o también *binarios* (porque contienen código máquina, que es binario, no textual).

Para ejecutar un programa (es decir, un archivo que contiene un programa) desde la consola, hay que escribir su nombre precedido de la ruta de acceso al mismo (absoluta o relativa). Por ejemplo:

```bash
# Primero vamos a descargar un archivo ejecutable de Internet:
cd ~
wget whatever
# Ahora, vamos a ejecutar el programa:
./whatever
```


# Ejercicios

1.  Crea los archivos y carpetas que aparecen en el siguiente árbol:
2.  Ejecuta los siguientes comandos, y dibuja el árbol resultante en la carpeta personal:
    
    ```bash
    cd
    mkdir ejercicio002
    cd ejercicio002
    mkdir folder1
    mkdir folder2
    cd folder1
    mkdir folder3
    cd folder3
    touch file1
    cd ..
    touch file2
    cd ..
    touch file3
    cd folder2
    touch file4
    mkdir folder4
    cd
    ```
3.  Ejecuta los siguientes comandos:
    
    ```bash
    cd ~
    mkdir ejercicio003
    mkdir ejercicio003/folder1
    mkdir ejercicio003/folder2
    mkdir ejercicio003/folder1/folder3
    cd ejercicio003
    cd folder1
    touch file1
    cd ..
    touch file2
    cd folder2
    touch file3
    cd ../folder1
    touch folder3/file4
    ```
    
    ¿Cuál es la carpeta de trabajo al terminar? Escribe, a continuación, las rutas de acceso absolutas y relativas de los siguientes archivos: `file1`, `file2`, `file3`, `file4`.
4.  Ejecuta los siguientes comandos. A continuación, elimina el archivo llamado *file1.txt*, usando un único comando.
    
    ```bash
    cd ~
    mkdir ejercicio004
    cd ejercicio004
    mkdir folder1
    cd folder1
    mkdir folder2
    cd folder2
    touch file1.txt
    cd ../..
    ```
5.  Ejecuta los siguientes comandos. A continuación, borra la carpeta llamada *folder1* utilizando un único comando.
    
    ```bash
    cd ~
    mkdir ejercicio005
    cd ejercicio005
    mkdir folder1
    cd folder1
    mkdir folder2
    mkdir folder3
    cd folder3
    ```
6.  Ejecuta los siguientes comandos. A continuación, haz una copia de la carpeta llamada *folder1*, dentro de la misma carpeta que contiene a *folder1*, pero con el nombre *folder2*.
    
    ```bash
    cd ~
    mkdir ejercicio006
    mkdir ejercicio006/folder1
    touch ejercicio006/folder1/file1
    mkdir ejercicio006/folder1/folder3
    ```
7.  Ejecuta los siguientes comandos. A continuación, cambia el nombre al archivo llamado *file1.txt* para que se llame *superfile1.txt*. Haz una copia del archivo *file2.txt*, con el mismo nombre, pero en la carpeta *folder2*.
    
    ```bash
    cd ~
    mkdir ejercicio007
    cd ejercicio007
    mkdir folder1
    mkdir folder2
    cd folder1
    touch file1.txt
    touch file2.txt
    cd ../folder2
    ```
8.  Ejecuta los siguientes comandos. A continuación, mueve la carpeta llamada *folder1* de modo que se encuentre dentro de la carpeta llamada *deepfolder*.
    
    ```bash
    cd ~
    mkdir ejercicio008
    cd ejercicio008
    mkdir folder1
    touch folder1/file1
    mkdir folder1/folder2
    touch folder1/folder2/file2
    mkdir folder3
    cd folder3
    mkdir deepfolder
    ```
9.  ¿Cómo se llama el archivo de mayor tamaño que hay dentro de la carpeta `/sbin`? ¿Qué tamaño tiene en Gigabytes?
10. Ejecuta los siguientes comandos.
    
    ```bash
    cd ~
    mkdir ejercicio010
    cd ejercicio010
    mkdir folder1
    mkdir folder1/folder2
    mkdir folder3
    echo $(seq 10 20) > folder1/file1
    echo {10..90..10} > folder1/folder2/file2
    touch folder3/file3
    for i in {1..10}; do
        date >> folder3/file3
    done
    ```
    
    ¿Cómo se llama y qué tamaño tiene el archivo más pequeño que hay dentro de la carpeta *ejercicio010* (directamente en ella, o en cualquiera de las carpetas contenidas en ella)? ¿Cómo se llama y qué tamaño tiene el archivo de mayor tamaño que hay dentro de la carpeta *ejercicio010*? Mueve el archivo más pequeño a la carpeta en que está el mayor, y elimina la carpeta en la que se encontraba el pequeño.
11. Ejecuta los siguientes comandos.
    
    ```bash
    cd ~
    mkdir ejercicio011
    cd ejercicio011
    mkdir folder1
    mkdir folder2
    cd folder2
    mkdir folder3
    cd ..
    mkdir folder4
    cd folder4
    touch file1.txt
    cd ../..
    cd folder1
    mkdir folder5
    cd folder5
    ```
    
    ¿Cuál es la ruta de acceso relativa al archivo llamado *file1.txt*? ¿Cuál es la ruta de acceso absoluta a dicho archivo?
12. Ejecuta los siguientes comandos.
    
    ```bash
    cd ~
    mkdir ejercicio012
    cd ejercicio012
    mkdir folder1
    cd folder1
    mkdir folder2
    cd folder2
    touch file1
    cd ..
    cd ..
    mkdir folder3
    cd folder3
    ```
    
    Escribe un comando diferente al siguiente, pero que tenga el mismo resultado (ayuda: usa rutas relativas):
    
    ```bash
    cp ~/ejercicio012/folder1/folder2/file1 ~/ejercicio012/folder3
    ```
13. Ejecuta los siguientes comandos.
    
    ```bash
    cd ~
    mkdir ejercicio013
    cd ejercicio013
    mkdir folder1
    mkdir folder2
    cd folder1
    mkdir folder3
    cd ../..
    cd folder2
    mkdir folder4
    cd folder4
    touch file
    ```
    
    Escribe un comando diferente al siguiente, pero que tenga el mismo resultado.
    
    ```bash
    mv file ../../folder1/folder3
    ```
14. Observa el siguiente comando y su resultado:
    
    ```bash
    ~> cd ~
    ~/ejercicio014> ls -R -1 ejercicio014
    ejercicio014:
    folder1
    folder3
    folder5
    
    ejercicio014/folder1:
    file2
    folder2
    
    ejercicio014/folder1/folder2:
    file1
    
    ejercicio014/folder3:
    file3
    folder4
    
    ejercicio014/folder3/folder4:
    file4
    
    ejercicio014/folder5:
    file5
    ```
    
    Crea la carpeta *ejercicio014* y todo su contenido, de acuerdo con el resultado del comando anterior.
15. Ejecuta los comandos siguientes. ¿Cuál es el tamaño del archivo llamado `file1.big`?
    
    ```bash
    cd ~
    mkdir ejercicio015
    cd ejercicio015
    mkdir .secret
    echo "*" > .secret/file1.big
    for i in {1..15}
    do
             cat .secret/file1.big >> .secret/file2.big
             cat .secret/file2.big >> .secret/file1.big
    done
    rm .secret/file2.big
    ```
