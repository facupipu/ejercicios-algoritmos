#include <stdio.h>
#include <stdlib.h>

void print_menu(){
  system("clear");
  printf("Seleccione una opción:\n");
  printf("1) AGREGAR NOTA\n");
  printf("2) VER NOTAS\n");
  printf("3) BORRAR TODAS LAS NOTAS\n");
  printf("4) SALIR\n");
}

void save_notes(){
  FILE *fp;
  fp = fopen("notas.txt", "a");
  printf("Ingrese su nota: \n");
  char note[100];
  fgets(note, 100, stdin);
  fprintf(fp, "%s", note);
  fclose(fp);
}

void read_notes(){
  FILE *fp;
  fp = fopen("notas.txt","r");
  int c;
  while ((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("Toca cualquier letra para continuar\n");
  getchar();
  fclose(fp);
}

void deleate_notes(){
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
  printf("Notas borradas\n");
}

int main(void) {
  int choice;
  while (1) {
    print_menu();
    scanf("%d", &choice);
    getchar();
    switch (choice) {
      case 1:
        save_notes();
        break;
      case 2:
        read_notes();
        break;
      case 3:
        deleate_notes();
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Opción inválida\n");
        break;
    }
  }
}
