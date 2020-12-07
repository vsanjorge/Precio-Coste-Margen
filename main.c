#include <stdio.h>

int main(void) {
  float coste;
  float margen;
  float precio;

  printf("Introduce el coste del producto: ");
  scanf("%f", &coste);

  printf("Introduce el %% de beneficio que deseas obtener: ");
  scanf("%f", &margen);

  precio = coste*((100+margen)/100);

  printf("\nPara obtener un %.1f%% de beneficios, debes vender el producto por %.2f euros", margen, precio);

  return 0;
}