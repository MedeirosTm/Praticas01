/*
Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>
  
int main() {
    int valorPassado = 1024;
    int y, i;
    for(i=1; valorPassado>=1; i++) {
        y = (valorPassado % 10);
        valorPassado /= 10;
        printf("%d\n", y);
    }

    return 0;
}

