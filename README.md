Instituto Tecnológico de Costa Rica <br /> 
Área Académica de Ingeniería en Computadores  <br /> 
Arquitectura de Computadores 1  <br /> 


### Examen práctico

Josafat Vargas - 2013030892  <br /> 
Victor Montero - 2013014152


### Instalacion de requerimientos:

g++
```
sudo apt-get update
sudo apt-get install g++
```
 
autoconf
```	
sudo apt-get update
sudo apt-get install autoconf

```

### Ejecución de programas

A continuación se presentan las instrucciones de ejecucion divididas según el punto al que corresponden en el enunciado del examen

**Parte 1**
 - Punto 4
Para obtener el codigo ensamblador de las funciones se utilizan los siguientes comandos:


```
gcc -S -fno-asynchronous-unwind-tables static.c
gcc -S -fno-asynchronous-unwind-tables notStatic.c
```

- Punto 5
Los siguientes comandos se utilizan para obtener informacion del archivo ELF:

Para informacion del header:
```
readelf -h notStatic.o
```
Para informacion de sections:
```
readelf -S notStatic.o
```
Para informacion de segments:
```
readelf -l notStatic.o
```
Para informacion de symbols:
```
readelf -s notStatic.o 
```

- Punto 6
Los siguientes son los comandos para compilar y ejecutar las pruebas:

Para compilar las pruebas de tiempo:
```
gcc notStaticExeTime.c -o notStaticExeTime
gcc staticExeTime.c -o staticExeTime
```
Para ejecutarlas:
```
./staticExeTime 
./notStaticExeTime 
```
Para compilar las pruebas de memoria:
```
gcc staticMemConsum.c -o staticMemConsum
gcc notStaticMemConsum.c -o notStaticMemConsum
```
Para ejecutar el análisis con la herramienta de Valgrind:
```
valgrind --tool=massif --heap=yes --time-unit=B ./notStaticMemConsum
valgrind --tool=massif --stacks=yes --time-unit=B ./notStaticMemConsum
valgrind --tool=massif --heap=yes --time-unit=B ./staticMemConsum
valgrind --tool=massif --stacks=yes --time-unit=B ./staticMemConsum
```


**Parte 2**

- Punto 4

Acceda a la carpeta Parte II:
```
cd ExamenArqui1/Parte\ II
```
Compile los programas con:
```
g++ -g -o "vector" "vector.cpp"
g++ -g -o "list" "list.cpp"
```

Ejecute la herramienta de valgrind:
```
valgrind --tool=cachegrind ./vector
valgrind --tool=cachegrind ./list
 ```
