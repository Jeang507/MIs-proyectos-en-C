# Juegos de Adivinanza y Ahorcado en C

Este repositorio contiene dos juegos programados en C: un juego de adivinanza y un juego de ahorcado, ambos desarrollados de manera modular para mejorar la organización y el mantenimiento del código.

## Descripción

### Juego de Adivinanza
El juego de adivinanza consiste en que el usuario intente adivinar un número secreto generado aleatoriamente por el programa dentro de un rango específico. El juego proporciona pistas al usuario indicando si el número secreto es mayor o menor que la conjetura actual.

### Juego de Ahorcado
El juego de ahorcado consiste en que el usuario intente adivinar una palabra secreta letra por letra. Cada vez que el usuario adivina incorrectamente, se dibuja una parte del "ahorcado". El juego termina cuando el usuario adivina la palabra completa o cuando se completa el dibujo del ahorcado.

## Estructura del Proyecto

El proyecto está organizado modularmente de la siguiente manera:

- `juego_adivinanza.c`: Archivo que contiene la lógica del juego de adivinanza.
- `juego_ahorcado.c`: Archivo que contiene la lógica del juego de ahorcado.
- `juegos`: Archivo ejecutable
- `juegos.h`: Archivo que contiene los macros de colores y librerias utilizadas.
- `main.c`: Archivo principal que maneja la lógica de inicio y navegación entre los juegos.
- `utilidades.c`: Archivo que contiene las funciones del juego de ahorcado y funciones de los macros.
