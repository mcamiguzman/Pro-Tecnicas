#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "batalla.h"
#include "menu_inicial.h"

Enemigo EnemigosNormales[10] = {{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13},{"Flecha",13}};
Enemigo EnemigosEspeciales[10] = {{"Flecha",13},{},{},{},{},{},{},{},{},{}};
Enemigo EnemigosJefes[10] = {{"Flecha",13},{},{},{},{},{},{},{},{},{}};
Carta Cartas[15]= {{},{},{} /* ...*/};
//Carta Cartasdeck[]= {{"N","H",1,2},{"N","H",1,2},{"N","H",1,1},{"NN","HH",1,2},{"NN","HH",1,2},{"NN","HH",1,2},{"NN","HH",1,2},{"NN","HH",1,2}}; //Este se borra
Carta Cartasminideck[5]={};

void tienda(){
  int seguir;
  while(seguir==1){
    for(int i = 1; i<7;i++){
      printf("%d-- Nombre: %s - Tipo: %s - Gastos de vidas: %d\n",i,Cartas[i].nombreCarta,Cartas[i].tipo,Cartas[i].gastopoder);
    }
  int comprar;
  scanf("%d",&comprar);
  printf("Digite el numero de la carta que desee comprar");
  printf("Digite 1 para seguir comprando");
  scanf("%d",&seguir);
  }
  if(seguir!=1){/* llama a menu*/}
}
 
void batalla(int vidasJugador, int vidasEnemigo, char*NombreEnemigo, Carta cartasdeck[]){
  int manas;
  int elegir;
  
  srand(time(NULL)); 
  int AtaqueEnemigo = rand() % 10 /* Promedio de todas las vidas*/;
  
  while(vidasEnemigo>=0||vidasJugador>=0){
    manas = 5;
    for(int i;i<5;i++){
      srand(time(NULL)); 
      int Pos = rand() % 10 /* Promedio de todas las vidas*/;
      Cartasminideck[i]= cartasdeck[Pos];
    }
    printf("Nombre Enemigo: %s\n",NombreEnemigo);
    printf("Tus vidas: %d\n",vidasJugador);
    printf("Vidas enemigo: %d\n" ,vidasEnemigo);
    printf("Gastos de poder: %d\n",manas);
    printf("\n");
    printf("Tu turno\n");
    while(manas>0){
      for(int i = 1; i<5;i++){
          printf("%d--  %s | %s | %d| %d\n",i,Cartasminideck[i].nombreCarta,Cartasminideck[i].tipo,Cartasminideck[i].gastopoder,Cartasminideck[i].efecto);
        }
        printf("Digite el numero de la carta que desea usar\n");
        scanf("%d",&elegir);
        if(Cartasminideck[elegir].gastopoder>manas){
          printf("Ups no tienes suficientes gatos de poder");}
        else{
          manas = manas - Cartasminideck[elegir].gastopoder;
          vidasEnemigo = vidasEnemigo - Cartasminideck[elegir].efecto;
          printf("Nombre Enemigo: %s\n",NombreEnemigo);
          printf("Tus vidas: %d\n",vidasJugador);
          printf("Vidas enemigo: %d\n" ,vidasEnemigo);
          printf("Gastos de poder: %d\n",manas);
         }
    }
  printf("Turno enemigo\n");
  printf("El enemigo eligio quitarte %d\n",AtaqueEnemigo);
  vidasJugador = vidasJugador - AtaqueEnemigo;
    
  printf("Nombre Enemigo: %s\n",NombreEnemigo);
  printf("Tus vidas: %d\n",vidasJugador);
  printf("Vidas enemigo: %d\n" ,vidasEnemigo);
  printf("Gastos de poder: %d\n",manas);
  }
  
  if(vidasEnemigo<0){
    printf("Ganaste");
      for(int i = 1; i<6;i++){
        printf("%d-- Nombre: %s - Tipo: %s - Gastos de vidas: %d\n",i,Cartas[i].nombreCarta,Cartas[i].tipo,Cartas[i].gastopoder);
      }
    int comprar;
    printf("Digite el numero de la carta que desee ");
    scanf("%d",&comprar);
    //Guardar
    //llama a menu principal
    
    
  }else{
    printf("Termino");
    }
}  

void Pelea(int vidasJugador,Carta DeckPrincipal[]){
  printf("1--------Batalla con Normal\n");
  printf("2--------Batalla con Jefe\n");
  printf("3--------Batalla con Enemigos Especial \n");
    
  srand(time(NULL)); 
  int RandEnemigo = rand() % 9;
    
  int ECamino;
  printf("Que desea ");
  scanf("%d",&ECamino);
    
  if(ECamino==1){
    batalla(vidasJugador,EnemigosNormales[RandEnemigo].vidasEnemigo, EnemigosNormales[RandEnemigo].nombre,DeckPrincipal);
  }
  if(ECamino==2){
    batalla(vidasJugador,EnemigosJefes[RandEnemigo].vidasEnemigo,EnemigosJefes[RandEnemigo].nombre,DeckPrincipal);
  }
  if(ECamino==3){
    batalla(vidasJugador,EnemigosEspeciales[RandEnemigo].vidasEnemigo,EnemigosEspeciales[RandEnemigo].nombre,DeckPrincipal);
  }
}

/*
int main(void) {
  Pelea(10,Cartasdeck);
  return 0;
}
*/