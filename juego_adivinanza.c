#include "juegos.h"

void juego_adivinanza() {
    int numero_aleatorio, adivinar, intentos = 3, diferencia;
    srand(time(NULL));
    numero_aleatorio = rand() % 20 + 1;

    imprimir_rosado("\n¡Bienvenido al juego de adivinanza!\n");
    imprimir_turquesa("\nEstoy pensando en un número entre 1 y 20. Tienes 3 intentos para adivinarlo.\n");

    while (intentos > 0) {
        imprimir_rosado("\nIntroduce el número a adivinar: ");
        if (scanf("%d", &adivinar) != 1) {
            imprimir_rosado("\nPor favor, introduce un número válido.\n");
            validar_entrada();
            continue;
        }

        diferencia = abs(numero_aleatorio - adivinar);

        if (adivinar == numero_aleatorio) {
            imprimir_turquesa("\n¡Felicidades! has Adivinado el número en ");
            printf("%d intentos.\n", 3 - intentos + 1);
            imprimir_rosado("\nPresione Enter para seguir jugando.");
            getchar();
            getchar();
            limpiar_pantalla();
            break;
        } else {
            if (diferencia >= 10)
                imprimir_turquesa("\nEstás lejos. La diferencia es de al menos 10.\n");
            else if (diferencia >= 5)
                imprimir_turquesa("\nTe estás acercando. La diferencia es de al menos 5.\n");
            else if (diferencia >= 3)
                imprimir_turquesa("\nEstás muy cerca. La diferencia es de al menos 3.\n");

            imprimir_turquesa(adivinar < numero_aleatorio ? "\nEl número aleatorio es mayor al número que ingresaste.\n\n" : "\nEl número aleatorio es menor al número que ingresaste.\n\n");

            intentos--;

            if (intentos > 0) {
                imprimir_turquesa("\nTe quedan ");
                printf("%d intentos.\n", intentos);
            } else {
                imprimir_turquesa("\nPerdiste, superaste los intentos. El número aleatorio era ");
                printf("%d.\n", numero_aleatorio);
                printf("\n");
                imprimir_rosado("\nPresione Enter para seguir jugando.");
                getchar();
                getchar();
                limpiar_pantalla();
            }
        }
    }
}
