#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"
#include "menu_juego.h"
#include "caminar.h"
#include "Guardar.h"

Carta DeckPrincipal[]={};
//
void bestuario(){
    char c;
    int cont,cantidad;
    char cadena[20];
    char*p ;
    p = &cadena[20];
    Enemigo TodosEnemigos[]={};
    Enemigo EnemigosBestuario[]={};

    FILE* fichero;
    fichero = fopen("EnemigosJugador", "r");
    while(1){
        c = fgetc(fichero);

        if(c == '\n'){
            cont++;
        }
        if(c == EOF){  
            cantidad = cont;  
            break;
        }
    }
    if(fichero==NULL){
        printf("Eror--Intenta Guardar ");
        menu_juego(DeckPrincipal);}
    while(fgets(cadena,20,fichero)){
      for(int i;i<cantidad,i++){
        if(p==TodosEnemigos[i].nombre){
            EnemigosBestuario[i].nombre=TodosEnemigos[i].nombre;
        }
      }
    }
    //Falta organizarlos 
    for(int x; x<cantidad;x++){
        //printf("Nombre: %s\n",);
    }
}

void deck(){
    char c;
    int cont,cantidad;
    char cadena[20];
    char*p;
    p = &cadena[20];
    Carta TodosCartas[]={};
    Carta CartasDeck[]={};

    FILE* fichero;
    fichero = fopen("CartasgosJugador", "r");
    while(1){
        c = fgetc(fichero);
        if(c == '\n'){
            cont++;
        }
        if(c == EOF){  
            cantidad = cont;  
            break;
        }
    }
    if(fichero==NULL){
        printf("Eror--Intenta Guardar ");
        menu_juego(DeckPrincipal);}
    while(fgets(cadena,20,fichero)){
      for(int i;i<cantidad,i++){
        if(p==TodosCartas[i].nombreCarta){
            CartasDeck[i]=TodosCartas[i];
        }
      }
    }
    for(int x; x<cantidad;x++){
        printf("Nombre: %s\n Tipo: %d\n\n",CartasDeck[x].nombreCarta,CartasDeck[x].tipo);
    }
}


void menu_juego(Carta DeckPrincipal){
  DeckPrincipal=DeckPrincipal;
  int eleccion;
  printf("Menu Juego\n 1. Caminar\n 2. Bestuario\n 3. Deck\n 4. Guardar\n 5. salir");
  while(eleccion > 1 && eleccion<5){
    if(eleccion==1){
      caminar(DeckPrincipal);
    }
    if(eleccion==2){bestuario();}
    if(eleccion==3){deck()}
    if(eleccion==4){Guardar();} 
    if(eleccion==5){menu_inicial();}
    if(eleccion != 1 || eleccion != 2 || eleccion != 3 ){
      printf("Marcacion incorreta");
    }
    printf("Digite lo que desea hacer");
    scanf("%d",&eleccion);
  }
}