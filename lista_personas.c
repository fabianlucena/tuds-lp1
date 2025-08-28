#include "lista_personas.h"
#include <mem.h>

struct ListaPersonas* crearListaPersonas(int cantidad) {
    struct ListaPersonas *listaPersonas;

    listaPersonas = (struct ListaPersonas*)malloc(sizeof(struct ListaPersonas));
    listaPersonas->lista = (struct Persona*)malloc(sizeof(struct Persona) * Cantidad);
    listaPersonas->cantidad = cantidad;

    memset(listaPersonas->lista, 0, sizeof(struct Persona) * cantidad);

    return listaPersonas;
}

void eliminarListaPersonas(struct ListaPersonas *listaPersonas) {
    int i;

    for (i = 0; i < listaPersonas->cantidad; i++) {
        eliminarPersona(listaPersonas->lista + i);
    }

    free(listaPersonas->lista);
    free(listaPersonas);
}
