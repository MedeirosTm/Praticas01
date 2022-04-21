/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main(){

  float angulo = 34;
  float distancia = 100;
  float seno = sin(angulo);
  float altura = seno * distancia;

  printf("%.2f", altura);
  
  return 0;
}