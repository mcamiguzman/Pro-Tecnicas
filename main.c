#include<stdio.h>
#include "menu_inicial.h"

void main(){
  int elegi;
  printf("Bienvenido al juego\n");
  printf(" Digite 1 para seguir");
  scanf("%d",&elegi);
  if(elegi != 1){
    printf("Gracias por entrar");
  }else{
    menu_inicial();
  }
  return 0;
}