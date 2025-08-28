#ifndef PERSONA_H
#define PERSONA_H

struct Persona {
    char *nombre;
    char *apellido;
    int edad;
    char sexo;
    char *deporte;
};

struct Persona* crearPersona();
void eliminarPersona(struct Persona *p);
void leerPersona(struct Persona *p);
void mostrarPersona(struct Persona *p);

#endif // PERSONA_H
