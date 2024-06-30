#ifndef JUEGOS_H
#define JUEGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// Macros para colores
#define ROSADO "\033[38;2;255;182;193m"
#define TURQUESA "\033[0;36m"
#define ROJO "\033[0;31m"
#define RESET "\033[0m"

// Prototipo de funciones 
void iniciar_ahorcado(char ahorcado[7][20]);
void actualizar_ahorcado(char ahorcado[7][20], int intentos);
void imprimir_ahorcado(char ahorcado[7][20]);
void juego_ahorcado();
void juego_adivinanza();
void limpiar_pantalla();
void validar_entrada();
void imprimir_rosado(const char mensaje[]);
void imprimir_turquesa(const char mensaje[]);
void imprimir_rojo(const char mensaje[]);

#endif
