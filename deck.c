#include<stdio.h>
#include<stdlib.h>
#include "deck.h"
#include "menu_inicial.h"
#include "Guardar.h"

Carta Cartas[15]= {{},{},{} /* ...*/};
Carta miniDeckNuevo[5] {};
Carta deckGuardadas[]={};
Carta miniDeck[]={};
int longarr=sizeof(deckGuardadas);

void tienda(){
  int seguir;
  while(seguir==1){
    for(int i = 1; i<7;i++){
      printf("%d-- Nombre: %s - Tipo: %s - Gastos de vidas: %d\n",i,Cartas[i].nombreCarta,Cartas[i].tipo,Cartas[i].gastopoder);
    }
  int comprar;
  printf("Digite el numero de la carta que desee comprar");
  scanf("%d",&comprar);
  deckGuardadas[Cartas[comprar]];
  }
  printf("Digite 1 para seguir comprando");
  scanf("%d",&seguir);
  if(seguir!=1){menu_juego();}
}


void CargarNuevo(){
    printf("Tus cartas son: \n");
    for(int i;i<5;i++){
        int elegircartas = rand() % 15;
        miniDeckNuevas[i],deckGuardadas[i]=Cartas[elegircartas];
    }
    for(int i=0;i<2;i++){
        printf("Carta %d\n Nombre: %s\nTipo: %s\nEfecto en ataque: %d\n",i,miniDeckNuevo[i].nombreCarta,miniDeckNuevo[i].tipo,miniDeckNuevo[i].efecto);
    }
    for(int x;x<5;x++){
        recibeEnemigoGuardar(miniDeckNuevo[x].nombreCarta)
    }
}

void ContinuarDeck(){
    char*p;
    char cadena[20];
    int cont,cantidad;
    
    FILE* fichero = fopen("CartasgosJugador", "r");

    if(fichero==NULL){
        printf("Error ");
        menu_juego();
    }

    while(fgets(cadena,20,fichero)){
        p = &cadena[20];
        for(int i;i<15,i++){
            if(p==Cartas[i].nombreCarta){
                CartasDeck[i]=TodosCartas[i];
            }
        }  
    }
    printf("Cartas cargadas en Deck")
}

void imprimirDeckGuardado(){
    for(int i;i<longarr;i++){
        printf("Nombre: %s\n Tipo: %d\n\n",deckGuardadas[i].nombreCarta,deckGuardadas[i].tipo);
    }
}

Carta RetornarminiDeck(){
    return miniDeck;
}

