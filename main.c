#include<stdio.h>
#include "menu_inicial.h"

int main(){
  int elegi;
  printf("Bienvenido al juego");
  printf(" Digite 1 para seguir");
  scanf("%d",&elegi);
  if(elegi != 1){
    printf("Gracias por entrar");
    exist(-1);
  }else{
    menu_inicial();
  }


}