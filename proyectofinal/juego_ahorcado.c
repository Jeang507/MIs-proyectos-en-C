#include "juegos.h"

//Jade G.
void juego_ahorcado() {
    char palabras[7][10][20] = {
        {"CASA", "MESA", "CAMA", "CEPILLO", "TELEFONO", "CALCULADORA", "FERROCARRIL", "LAVADORA", "NEVERA", "PUERTA"},
        {"PANAMA", "VENEZUELA", "PERU", "CHILE", "TURQUIA", "ARGENTINA", "BRASIL", "MEXICO", "GUATEMALA", "JAPON"},
        {"CABALLO", "PERRO", "DELFIN", "PERICO", "AGUILA", "ARDILLA", "FLAMENCO", "LEOPARDO", "COCODRILO", "IGUANA"},
        {"MORADO", "PLATEADO", "AZUL", "ROJO", "NEGRO", "ROSADO", "VERDE", "AMARILLO", "NARANJA", "BLANCO"},
        {"JADE", "DIEGO", "RIGOBERTO", "LILLY", "BRANDO", "JUAN", "JEAN", "OLIVER", "USBALDO", "ANGEL"},
        {"MANZANA", "FRESA", "MELON", "LECHOSA", "PARCHITA", "CAMBUR", "PATILLA", "DURAZNO", "PERA", "LIMON"},
        {"MEMORIA_RAM", "TECLADO", "VENTILADOR", "ALMACENAMIENTO_SSD", "MONITOR", "RATON", "TARJETA_MADRE", "PROCESADOR_CPU", "TARJETA_GRAFICA", "IMPRESORA"}
    };

    char palabra_adivinada[20], letra;
    int opciones, categoria, seleccionar_palabra, longitud_palabra, intento, acierto, i;
    char ahorcado[7][20];
    
    srand(time(NULL)); // Inicializa el generador de números aleatorios
    
    while (1) {
        // Menú de opciones
        imprimir_rosado("\n\t\t---Jade_Jean---\n");
	imprimir_turquesa("\nCategorias: \n");
        imprimir_rosado("\n1. Objetos \n");
        imprimir_turquesa("2. Países \n");
        imprimir_rosado("3. Animales\n");
        imprimir_turquesa("4. Colores \n");
        imprimir_rosado("5. Nombres \n");
        imprimir_turquesa("6. Frutas \n");
        imprimir_rosado("7. Componentes de las computadoras \n");
        imprimir_turquesa("8. Salir\n");
        imprimir_turquesa("\nIngrese una opción: ");
        
        if (scanf("%d", &opciones) != 1 || opciones < 1 || opciones > 8) {
            limpiar_pantalla();
            validar_entrada();
            continue;
        }

        limpiar_pantalla();

        if (opciones == 8) {
            imprimir_rosado("\nGracias por jugar. ¡Hasta luego!\n");
            break;
        }

        categoria = opciones - 1;
        seleccionar_palabra = rand() % 10;
        longitud_palabra = strlen(palabras[categoria][seleccionar_palabra]);
        
        intento = 0;
        acierto = 0;
        
        for (i = 0; i < longitud_palabra; i++) {
            palabra_adivinada[i] = '*';
        }
        palabra_adivinada[longitud_palabra] = '\0';
        
        iniciar_ahorcado(ahorcado);
        imprimir_ahorcado(ahorcado);
        
        //Jean Carlos G.
        // Bucle del juego
        while (intento < 6 && acierto < longitud_palabra) {
            printf("\n");
            for (i = 0; i < longitud_palabra; i++) {
                printf("%c ", palabra_adivinada[i]);
            }
            printf("\n");
            
            imprimir_rosado("\nAdivina una letra: ");
            scanf(" %c", &letra);
            letra = toupper(letra);
            validar_entrada();
            
            int encontrado = 0;
            for (i = 0; i < longitud_palabra; i++) {
                if (palabras[categoria][seleccionar_palabra][i] == letra) {
                    if (palabra_adivinada[i] != letra) {
                        palabra_adivinada[i] = letra;
                        acierto++;
                        encontrado = 1;
                    }
                }
            }

            if (!encontrado) {
                intento++;
                actualizar_ahorcado(ahorcado, intento);
                limpiar_pantalla();
                imprimir_ahorcado(ahorcado);
            }
        }
        
        if (acierto == longitud_palabra) {
            imprimir_turquesa("\n\n¡Felicidades! Adivinaste la palabra: ");
            printf("%s\n", palabras[categoria][seleccionar_palabra]);
        } else {
            imprimir_turquesa("\n\n¡Perdiste! La palabra era: ");
            printf("%s\n", palabras[categoria][seleccionar_palabra]);
        }
        imprimir_turquesa("\nPresione Enter para seguir jugando ");
        validar_entrada();
        limpiar_pantalla();
    }
}
