# ExamenArqui1

Examen práctico de arquitectura de computadores 1 - I 2019
Instalacion de requerimientos:


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
