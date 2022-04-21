/*
Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main(){

  float a = 1;
  float b = 2;
  float c = -3;
  
  float delta = (b * b - 4 * a * c);
  float raiz_quadrada = sqrtf(delta);
  
  float x1 = (-b + raiz_quadrada)/2*a;
  float x2 = (-b - raiz_quadrada)/2*a;

  printf("x1 = %.2f, e x2 = %.2f\n", x1, x2);
  printf("%f\n", raiz_quadrada);
  return 0;
}