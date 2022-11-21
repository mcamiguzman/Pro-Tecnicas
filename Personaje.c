#include<stdio.h>
#include<stdlib.h>
#include "bestuario.h"
#include "menu_inicial.h"
#include "Guardar.h"

Personaje Personajes [3] ={{"k",8,5,2},{"j",8,5,1},{"p",9,6,3}};
int eleccionPersonaje;

void elegirPersonaje(){
    printf("Personajes disponibles\n ");
    for(int i, i<3;i++){
        printf("Carta: %d\nNombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia:%d\n\n",i,Personajes[i].nombrePersonaje,
        Personajes[eleccionPersonaje].fuerza,Personajes[i].dureza,Personajes[i].inteligencia);
    }
    printf("Elige un personaje (digite el numero)");
    scanf("%d",&eleccionPersonaje);

    while(eleccionPersonaje<3 && eleccionPersonaje>0){
        printf("Elegio a:\n");
        printf(" Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia:%d\n\n",Personajes[eleccionPersonaje].nombrePersonaje,
        Personajes[eleccionPersonaje].fuerza,Personajes[eleccionPersonaje].dureza,Personajes[eleccionPersonaje].inteligencia);
    }
    printf("Marcacion incorreta");
    printf("Elige un personaje (digite el numero)");
    scanf("%d",&eleccionPersonaje);
}

int verificarPersonaje(){
    if(eleccionPersonaje==1){return 1;}
    if(eleccionPersonaje==2){return 2;}
    if(eleccionPersonaje==3){return 3;}
}