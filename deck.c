#include<stdio.h>
#include<stdlib.h>
#include "deck.h"
#include "menu_inicial.h"

Carta deckPrincipal[5]={};
Carta Cartas[15]= {{},{},{} /* ...*/};

void CargarNuevo(){
    printf("Tus cartas son: \n");
    for(int i;i<5;i++){
        int elegircartas = rand() % 15;
        deckPrincipal[i]=Cartas[elegircartas];
    }
    for(int i=0;i<2;i++){
        printf("Carta %d\n Nombre: %s\nTipo: %s\nEfecto en ataque: %d\n",i,deckPrincipal[i].nombreCarta,deckPrincipal[i].tipo,deckPrincipal[i].efecto);
    }
    
}

Carta RetornaDeck(){
    return deckPrincipal;
}
