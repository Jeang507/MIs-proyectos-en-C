#include "juegos.h"

void limpiar_pantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void validar_entrada() {
    while (getchar() != '\n');
}

void imprimir_rosado(const char mensaje[]) {
    printf(ROSADO "%s" RESET, mensaje);
}

void imprimir_turquesa(const char mensaje[]) {
    printf(TURQUESA "%s" RESET, mensaje);
}

void imprimir_rojo(const char mensaje[]) {
    printf(ROJO "%s" RESET, mensaje);
}

// Función para inicializar el dibujo del ahorcado
void iniciar_ahorcado(char ahorcado[7][20]) {
    strcpy(ahorcado[0], "     _ _ _ _ \n");
    strcpy(ahorcado[1], "    |       |\n");
    strcpy(ahorcado[2], "    |\n");
    strcpy(ahorcado[3], "    |\n");
    strcpy(ahorcado[4], "    |\n");
    strcpy(ahorcado[5], "    |\n");
    strcpy(ahorcado[6], "_ _ _ _ _ _ _ _\n");
}

// Función para actualizar el dibujo basado en el número de intentos
void actualizar_ahorcado(char ahorcado[7][20], int intentos) {
    switch (intentos) {
        case 1:
            strcpy(ahorcado[2], "    |       0\n");
            break;
        case 2:
            strcpy(ahorcado[3], "    |       |\n");
            break;
        case 3:
            strcpy(ahorcado[3], "    |      /|\n");
            break;
        case 4:
            strcpy(ahorcado[3], "    |      /|\\\n");
            break;
        case 5:
            strcpy(ahorcado[4], "    |      /\n");
            break;
        case 6:
            strcpy(ahorcado[4], "    |      / \\\n");
            break;
    }
}

// Función para imprimir el dibujo del ahorcado en rojo
void imprimir_ahorcado(char ahorcado[7][20]) {
    for (int i = 0; i < 7; i++) {
        imprimir_rojo(ahorcado[i]);
    }
}
