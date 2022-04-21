/* 
Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/

#include <stdio.h>

int main(){

  float A1 = 20.5;
  float A2 = 12.3;

  float media = (0.4 * A1) + (0.6 * A2);

  printf("%.2f", media);
  
  return 0;
}
