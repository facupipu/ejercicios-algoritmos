#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char line[1000] = "";
  FILE *fp;
  // system ("rm temp.txt");
  fp = fopen("wordlist.txt", "r");
  // printf("Qur queres hashear hoy?\n");
  // scanf("%s", input);
  while (fgets(line, 1000, fp) != NULL) {
    char command[100] = "";
    strcat(command, "md5sum <<< \"");
    int i = 0;
    while (line[i] != 0) {
      if (line[i] == '\n') line[i] = 0;
      i++;
    };
    strcat(command, line);
    strcat(command, "\" >> temp.txt");
    system(command);
  };
  return 0;
}
