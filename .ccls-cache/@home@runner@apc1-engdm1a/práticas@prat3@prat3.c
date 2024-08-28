#include <stdio.h>
#include <limits.h>

int main(){
  printf ("tamanho do char na memória = %lu byte(s)\n"), ssizeof(char));
   printf ("tamanho do int na memória = %lu byte(s)\n"), ssizeof(int));
   printf ("tamanho do double na memória = %lu byte(s)\n"), ssizeof(double));
   printf ("tamanho do void na memória = %lu byte(s)\n"), ssizeof(void));

  printf ("a faixa de valores do char: de %i a %i\n", CHAR_MIN, CHAR_MAX);
  printf ("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
  printf ("a faixa de valores do float: de %i a %i\n", FLT_MIN, FLT_MAX);
  printf ("a faixa de valores do double: de %i a %i\n", DBL_MIN, DBL_MAX);
  printf ("\n");
  char tecla = 'a';
  printf ("valor da tecla = %c\n" , tecla);
  int idade = 25;
   printf ("valor da idaade = %i\n" , idade);
  float nota = 8.6f;
   printf ("valor da nota = %f\n" ,nota);
  double pi = 3,14156293;
   printf ("valor de pi = %10f\n" , pi);
  idade =50; 
   printf ("valor da idade = %i\n" , idade);


  return 0;
}