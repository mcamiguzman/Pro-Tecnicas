#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"
#include "menu_juego.h"
#include "deck.h"


Personaje Personajes [3] ={{"k",8,5,2},{"j",8,5,1},{"p",9,6,3}};
Carta deckPrincipal[5]={};
Carta Cartas[15]= {{},{},{} /* ...*/};

//Cambio: cada vez que entre va a elegir un personaje
void menu_inicial(){
  int eleccion;
  int eleccionPersonaje;
  printf("Menu Inicial\n 1. Juego Nuevo\n 2. Continuar\n 3. Salir");
  while(eleccion == 1 || eleccion == 2 || eleccion==3){

    //Elige el personaja
      printf("Elige un personaje ");
      scanf("%d",&eleccionPersonaje);
      printf("Elegio a:\n");
      printf(" Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia:%d\n\n",Personajes[eleccionPersonaje].nombrePersonaje,Personajes[eleccionPersonaje].fuerza,Personajes[eleccionPersonaje].dureza,Personajes[eleccionPersonaje].inteligencia);
      
    if(eleccion==1){ ///Juego Nuevo
      printf("Elejiste Nuevo Juego");
      
      //Se carga el nuevo deck que esta en Deck
      CargarNuevo();

      //Prosigue con el menu de juego
      menu_juego(RetornaDeck());
      //No hace nada mas
    }
      
    if(eleccion==2){
      //Retorna deck y bestuario
    }

    if(eleccion==3){
      menu_inicial();
      //Se sale y no hace nada mas
    }
    
  }
  //No entra al while y vuelve a pedir
    printf("Marcacion incorreta");
    printf("Digite lo que desea hacer");
    scanf("%d",&eleccion);
}