#include <stdio.h>

int main() {
  int intero;
  float virgola;
  char c;

  printf("\ninserisci un carattere:");
  scanf("%c",&c);
  printf("Carattere;%c",c);

  printf("\ninserisci un numero intero:");
  scanf("%d",intero);
  printf("intero:%d",intero);

  printf("\ninserisci un numero con la virgola:");
  scanf("%f",&virgola);
  printf("Numero con la virgola:%5.2f",virgola);

  return 0;
}
