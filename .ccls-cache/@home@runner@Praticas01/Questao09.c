/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>

int main(){

  int anos = 10;
  int meses = 25;
  int dias = 12;

  int total_dias = (anos * 365) + (meses*30) + dias;

  printf("O valor de dias no total é de: %.d dias", total_dias);
  
  return 0;
}