#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"

char*dato;
char*dato2;

void recibeEnemigoGuardar(char*nombre){
    dato = nombre;
}
void recibeCartaoGuardar(char*nombre){
    dato2 = nombre;
}
void Guardar(){
    FILE* fichero;
    fichero = fopen("EnemigosJugador.txt", "wt");
    fputs(dato, fichero);
    fclose(fichero);
    FILE* fichero2;
    fichero = fopen("CartasJugador.txt", "wt");
    fputs(dato2, fichero);
    fclose(fichero2);

}