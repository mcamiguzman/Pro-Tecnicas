#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"

Personaje Personajes [3] ={{"k",8,5,2},{"j",8,5,1},{"p",9,6,3}};
Carta deckPrincipal[5]={};
Carta Cartas[15]= {{},{},{} /* ...*/};

void menu_inicial(){
  int eleccion;
  int eleccionPersonaje;
  printf("Menu Inicial\n 1. Juego Nuevo\n 2. Continuar\n 3. Salir");
  c
  while(eleccion == 1 || eleccion == 2 || eleccion==3){
    switch(eleccion){
      case 1:
      printf("Elejiste Nuevo Juego");
      printf("Personajes\n");
      for(int i=0;i<2;i++){printf("Carta %d\n Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia: %d\n\n",i,Personajes[i].nombrePersonaje,Personajes[i].fuerza,Personajes[i].dureza,Personajes[i].inteligencia);}
      printf("Elige un personaje ");
      scanf("%d",&eleccionPersonaje);
      printf("Elegio a:\n");
      printf(" Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia:%d\n\n",Personajes[eleccionPersonaje].nombrePersonaje,Personajes[eleccionPersonaje].fuerza,Personajes[eleccionPersonaje].dureza,Personajes[eleccionPersonaje].inteligencia);
      FILE* fichero;
      fichero = fopen("PersonajeJugador.txt", "wt");
      fputs(Personajes[eleccionPersonaje].nombrePersonaje,fichero);
      fclose(fichero);  
      printf("Tus cartas son: \n");
      for(int i;i<5;i++){
        int elegircartas = rand() % 15;
        deckPrincipal[i]=Cartas[elegircartas];
      }
      for(int i=0;i<2;i++){printf("Carta %d\n Nombre: %s\nTipo: %s\nEfecto en ataque: %d\n",i,deckPrincipal[i].nombreCarta,deckPrincipal[i].tipo,deckPrincipal[i].efecto);}
      //llama menu juego
      case 2:
        ;
      case 3:
        exit(-1);
      default:
        printf("Marcacion incorrecta);
    }
  }
  printf("Digite lo que desea hacer");
  scanf("%d",&eleccion);
}  
