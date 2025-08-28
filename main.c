#include "menu.h"
#include "persona.h"
#include <stdio.h>
#include <locale.h>

int main()
{
    char option;
    struct Persona *p;

    setlocale(LC_ALL, "");

    p = crearPersona();

    do {
        option = menu();
        switch (option) {
        case '1':
            leerPersona(p);
            break;

        case '2':
            mostrarPersona(p);
            break;

        case '3':
            printf("Saliendo");
            break;

        default:
            printf("Opción desconocida: %c", option);
        }
    } while (option != '3');

    eliminarPersona(p);

    return 0;
}
