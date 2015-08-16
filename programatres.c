#include <stdio.h>
int main(int argc, char const *argv[]) {
  //arreglos en C
  // char  arreglo[] = "holamundo";
  //otra forma de creear arreglos, pero esta ves se debe declarar
  //la finalizacion de la cadena con '\0'
  char arreglo[] = {'H','o','l','a','\0'};
  printf("La cadena es: %s\n", arreglo );
  return 0;
}
