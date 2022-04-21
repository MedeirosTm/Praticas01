/*
Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main (){

  int tempo_original = 100000;

  int horas = tempo_original/(60 * 60);
  int minutos = (tempo_original/60) - (horas * 60 );
  int segundos = tempo_original - ((horas * 60 * 60 ) + ( minutos * 60 ));

  printf("Horas: %.d\nMinutos: %.d\nSegundos: %.d\n", horas, minutos, segundos);
  
  return 0;
}