#include "menu.h"
#include <stdio.h>

char menu() {
    char option, enter;
    char *opciones = "Opciones:\n";

    printf("\n\n");
    printf(opciones);
    printf("  1 - Agregar persona.\n");
    printf("  2 - Listar todas las personas.\n");
    printf("  3 - Salir\n");
    printf("Ingrese su opción: ");

    scanf(" %c", &option);
    scanf("%c", &enter);

    return option;
}
