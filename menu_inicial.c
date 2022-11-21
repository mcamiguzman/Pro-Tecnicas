#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"
#include "menu_juego.h"
#include "deck.h"
#include "Personaje.h"
#include "bestuario.h"

//Cambio: cada vez que entre va a elegir un personaje
void menu_inicial(){
  int eleccion;

  printf("Menu Inicial\n 1. Juego Nuevo\n 2. Continuar\n 3. Salir");
  while(eleccion == 1 || eleccion == 2 || eleccion==3){
    if(eleccion==1){ ///Juego Nuevo
      printf("Elejiste Nuevo Juego");
      //Elige el personaja
      elegirPersonaje();
      
      //Se carga el nuevo deck que esta en Deck
      printf("Tus cartas son:");
      CargarNuevo();

      //Prosigue con el menu de juego
      menu_juego();
      //No hace nada mas
    }
      
    if(eleccion==2){
      ContinuarDeck();
      ContinuarBestuario();
      //Retorna deck y bestuario
    }

    if(eleccion==3){
      menu_inicial();
      //Se sale y no hace nada mas
    }
    //No entra al while y vuelve a pedir
    printf("Marcacion incorreta");
    printf("Digite lo que desea hacer");
    scanf("%d",&eleccion);
  }
}
  