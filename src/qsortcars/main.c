#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Retorna true si ambos strings son iguales */
bool string_equals(char* string1, char* string2) {
  return !strcmp(string1, string2);
}

/* Revisa que los parametros del programa sean válidos */
bool check_arguments(int argc, char** argv) {
  if (argc != 3) {
    printf("Modo de uso: %s INPUT OUTPUT\n", argv[0]);
    printf("Donde:\n");
    printf("\tINPUT es la ruta del archivo de input\n");
    printf("\tOUTPUT es la ruta del archivo de output\n");
    exit(1);
  }

  return true;
}

int main(int argc, char** argv) {
  check_arguments(argc, argv);

  FILE* input_file = fopen(argv[1], "r");
  FILE* output_file = fopen(argv[2], "w");

  int N;
  fscanf(input_file, "%d", &N);

  float id, model, average_lap_time, victory_count;
  for (int i = 0; i < N; i++) {
    fscanf(input_file, "%f %f %f %f", &id, &model, &average_lap_time, &victory_count);
    printf("%f %f %f %f", id, model, average_lap_time, victory_count);
  }

  fclose(input_file);
  fclose(output_file);
  return 0;
}
