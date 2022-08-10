#include <stdio.h>
#include <stdlib.h>

int main(void){
  int opcion;
  int n;
  printf("1) Opción 1\n");
  printf("1) Opción 2\n");
  printf("3) Salir\n");
  scanf("%d", &opcion);
  getchar ();
  switch (opcion) {
    case 1:
      system ("clear");
      printf("Elegiste opcion 1\n");
      printf("Preione cualquiera tecla para continuar\n");
      scanf("%d", &n);
      break;
    case 2:
      system ("clear");
      printf("Elegiste opcion 2\n");
      printf("Preione cualquiera tecla para continuar\n");
      scanf("%d", &n);
      break;
    case 3:
      system ("clear");
      return 0;
    default:
      return 1;
  }

  return 0;
}
