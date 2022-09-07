#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

char *random_word(){
  srand(time(NULL));
  char *word_list[] = {
    "auto",
    "perro",
    "sol",
    "helicoptero",
    "casa",
    "chocolate",
    "figurita",
    "psicologia",
    "arbol",
    "asterico",
    "estrofa",
    "persona",
    "algoritmo",
    "caserola",
    "aula",
    "pizarra",
    "computadora",
    "oro",
    "plata",
    "juego",
    "ahorcado",
    "opciones",
    "hermanos",
    "padres",
    "vistas",
    "motor",
    "celular",
    "agregar",
    "piputto",
    "equipo",
    "carpeta"  };
  return word_list[rand()%7];
}

int count_chars(char* word){
  int length = 0 ;
  for (int i = 0; word[i] != 0; i++) {
    length ++;
  }
  return length;
}

int print_horca(int tries){
  switch (tries) {
    case 1:
      printf(" _____  \n");
      printf(" |    | \n");
      printf(" |    O \n");
      printf(" |      \n");
      printf(" |      \n");
      printf(" |      \n");
      break;
    case 2:
      printf(" _____  \n");
      printf(" |    | \n");
      printf(" |    O \n");
      printf(" |    | \n");
      printf(" |      \n");
      printf(" |      \n");
      break;
    case 3:
      printf(" _____  \n");
      printf(" |    | \n");
      printf(" |    O \n");
      printf(" |   /| \n");
      printf(" |      \n");
      printf(" |      \n");
      break;
    case 4:
      printf(" _____    \n");
      printf(" |    |   \n");
      printf(" |    O   \n");
      printf(" |   /|\\ \n");
      printf(" |        \n");
      printf(" |        \n");
      break;
    case 5:
      printf(" _____    \n");
      printf(" |    |   \n");
      printf(" |    O   \n");
      printf(" |   /|\\ \n");
      printf(" |    /   \n");
      printf(" |        \n");
      break;
    case 6:
      printf(" _____    \n");
      printf(" |    |   \n");
      printf(" |    O   \n");
      printf(" |   /|\\ \n");
      printf(" |    /\\ \n");
      printf(" |        \n");
      break;
    default:
      printf(" _____  \n");
      printf(" |    | \n");
      printf(" |      \n");
      printf(" |      \n");
      printf(" |      \n");
      printf(" |      \n");
      break;
  }
}

void start(char *correct_word, int length){
  // while (1) {
    bool no_esta = false;
    bool son_iguales = true;
    int tries = 0;
    char letra;
    char mistery[length];
    for (int i = 0; i < length; i++) {
      mistery[i] = '-';
    }


    while(1){

      son_iguales = true;

      for ( int i = 0; i < length; i++) {
        if (correct_word[i] == letra) {
          mistery[i]=letra;
          no_esta = false; }
      }

      if (no_esta) {
        tries ++;
      }
      no_esta = true;

      print_horca(tries);

      printf("\n\t");

      for (int i = 0; i < length; i++) {
        printf("%c", mistery[i]);
        if (mistery[i] != correct_word[i]) {
          son_iguales = false;
        }
      }

      if(son_iguales) {
        printf("\nGANASTE\n");
        exit(0);
      }

      printf("\n");
      printf("\nSeleccione una letra (solo minusculas):\n");
      letra = getchar();
      getchar();


      if (tries == 6) {
        printf("\nPERDISTE\n");
        exit(0);
      }

      system("clear");
    }
}


int main(int argc, char *argv[]) {
  char *correct_word = random_word();
  int length = count_chars(correct_word);
  // printf("palabra: %s  length: %d\n", correct_word, length);
  start(correct_word, length);
  return 0;
}
