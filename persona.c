#include "persona.h"
#include <stdio.h>
#include <stdlib.h>

/** Función para crear una persona.
 * Crea e inicialilza un persona en memoria dinámica.
 */
struct Persona* crearPersona() {
    struct Persona *p;

    p = (struct Persona*)malloc(sizeof(struct Persona));

    p->nombre = 0;
    p->apellido = 0;
    p->edad = 0;
    p->sexo = ' ';
    p->deporte = 0;

    return p;
}

/** Elimina la persona y sus recursos asociados:
 * - nombre
 * - apellido
 * - deporte
 */
void eliminarPersona(struct Persona *p) {
    /* Eliminación segura del recurso nombre */
    if (p->nombre) {
        free(p->nombre);
    }

    if (p->apellido) {
        free(p->apellido);
    }

    if (p->deporte) {
        free(p->deporte);
    }

    free(p);
}

/** Rellena la estructura de una persona solicitando los datos por consola
 * ¡Cuidado! Si la estructura posee recursos asociados (nombre, apellido, deporte )
 * no se liberan.
 */
void leerPersona(struct Persona *p) {
    char buffer[501];

    printf("Ingrese el nombre: ");
    scanf(" %500s", buffer);
    p->nombre = (char*)malloc(strlen(buffer) + 1);
    strcpy(p->nombre, buffer);

    printf("Ingrese el apellido: ");
    scanf(" %500s", buffer);
    p->apellido = (char*)malloc(strlen(buffer) + 1);
    strcpy(p->apellido, buffer);

    printf("Ingrese la edad: ");
    scanf("%d", &p->edad);

    printf("Ingrese el sexo (M o F): ");
    scanf(" %c", &p->sexo);

    printf("Ingrese el deporte: ");
    scanf(" %500s", buffer);
    p->deporte = (char*)malloc(strlen(buffer) + 1);
    strcpy(p->deporte, buffer);
}

/** Muestra por consola el contenido de la estructura persona.
 */
void mostrarPersona(struct Persona *p) {
    printf("Nombre: %s\n", p->nombre);
    printf("Apellido: %s\n", p->apellido);
    printf("Edad: %d\n", p->edad);
    printf("Sexo: %c\n", p->sexo);
    printf("Deporte: %s\n", p->deporte);
}
