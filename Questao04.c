/* 
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>
const int ICMS = 17;
const float COFINS = 7.6;
const float PIS_PASEP = 1.65;

int main(){

  float preco_original = 24.3;
  double preco_final = ( 1 + ICMS + COFINS + PIS_PASEP)/100 * preco_original + preco_original;

  printf("%2.f", preco_final);
  
  return 0;
}