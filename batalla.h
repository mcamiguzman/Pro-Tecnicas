#ifndef BATALLLA_H
#define BATALLA_H

typedef struct Enemigo {
  char*nombre;
  int vidasEnemigo;
  char*descripcion;
}Enemigo;

void tienda();
void batalla(int vidasJugador, int dureza, int vidasEnemigo, char*NombreEnemigo);
void caminos (int vidasJugador, int dureza);
void caminar();

#endif /* BATALLA_H */