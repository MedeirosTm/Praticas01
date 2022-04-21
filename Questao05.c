/*
Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>

int main(){

  int GB = 13;

  int bytes = GB * 1024;

  printf("%d", bytes);
  
  return 0;
}