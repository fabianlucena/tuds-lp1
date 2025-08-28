#ifndef LISTA_PERSONAS_H
#define LISTA_PERSONAS_H

#include "persona.h"

struct ListaPersonas {
    struct Persona *lista;
    int cantidad;
};

struct ListaPersonas* crearListaPersonas(int cantidad);
void eliminarListaPersonas(struct ListaPersonas *listaPersonas);
void agregarPersona(struct ListaPersonas *listaPersonas, struct Persona *persona);

#endif // LISTA_PERSONAS_H
