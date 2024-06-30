#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "juegos.h"

int main() {
    limpiar_pantalla();
    imprimir_turquesa("\n\t\t  Universidad de Panamá");
    imprimir_rosado("\n\t\tLic. En Ing. en Informática.");
    imprimir_turquesa("\nIntegrantes: ");
    imprimir_rosado("\n\t\tJade Gutiérrez E-35-11804.");
    imprimir_turquesa("\n\t\tJean Carlos Guilén 8-1019-771.");
    imprimir_turquesa("\nProfesor(a): ");
    imprimir_rosado("\n\t\tLilly Von Chong.");
    imprimir_turquesa("\nMateria: ");
    imprimir_rosado("\n\t\tIntroducción a la programación.");
    int op;

    while (1) {
        imprimir_rosado("\nElige un juego:\n");
        imprimir_turquesa("\n1. Juego de ahorcado.");
        imprimir_rosado("\n2. Juego de adivinanza");
        imprimir_rosado("\n3. Salir.\n");
        imprimir_turquesa("\nOpción: ");
        if (scanf("%d", &op) != 1 || op < 1 || op > 3) {
            limpiar_pantalla();
            validar_entrada();
            continue;
        }

        limpiar_pantalla();

        if (op == 3) {
            imprimir_rosado("Gracias por jugar, esperamos que te hayas divertido.\n");
            break;
        }
        switch (op) {
            case 1:
                juego_ahorcado();
                break;
            case 2:
                juego_adivinanza();
                break;
            default:
                imprimir_rosado("Hasta luego compai\n");
                break;
        }

        limpiar_pantalla();
    }

    return 0;
}
