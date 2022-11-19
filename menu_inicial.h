#ifndef MENU_INICIAL_H
#define MENU_INICIAL_H

typedef struct Personaje {
  char*nombrePersonaje;
  int dureza;
  int inteligencia;
  int fuerza;
}Personaje;

typedef struct Carta{
  char*nombreCarta;
  char*tipo;
  int gastopoder;
  int efecto;
}Carta;

void menu_inicial();
#endif