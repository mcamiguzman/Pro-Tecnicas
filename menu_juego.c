#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"
#include "menu_juego.h"
#include "caminar.h"
#include "Guardar.h"
#include "deck.h"
#include "bestuario.h"

void menu_juego(){
  int eleccion;
  printf("Menu Juego\n 1. Caminar\n 2. Bestuario\n 3. Deck\n 4. Guardar\n 5. salir");
  while(eleccion > 1 && eleccion<5){
    if(eleccion==1){
      caminar();
    }
    if(eleccion==2){
      imprimirBestuarioGuardado()}
    if(eleccion==3){
      printf("Cartas Guardadas: \n")
      imprimirDeckGuardado();
    }
    if(eleccion==4){Guardar();} 
    if(eleccion==5){menu_inicial();}

    printf("Marcacion incorrecta");
    printf("Digite lo que desea hacer");
    scanf("%d",&eleccion);
  }
}