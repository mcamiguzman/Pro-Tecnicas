#include<stdio.h>
#include<stdlib.h>
#include "bestuario.h"
#include "menu_inicial.h"
#include "Guardar.h"

Enemigo TodosEnemigos[]={};
Enemigo EnemigosBestuario[]={};
int longr = sizeof(EnemigosBestuario);

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
            if(p==TodosEnemigos[i].nombre){
                EnemigosBestuario[i]=TodosEnemigos[i];
            }
        }  
    }
    printf("Enemigos cargadas en Bestuario")
}

void imprimirBestuarioGuardado(){
    printf("Enemigos que haz derrotado: \n");
    for(int i;i<longr;i++){
        printf("Nombre: %s\n",EnemigosBestuario[i].nombre);
    }
}