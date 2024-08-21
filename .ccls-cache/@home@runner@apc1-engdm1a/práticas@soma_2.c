#include <stdio.h>
#include <math.h>
int main() {
  int a, b, soma;
  
  printf ("digite o primeiro número: ");
  scanf ("%d", &a);
  printf ("digite o segundo número: ");
  scanf ("%d", &b);
  soma = a + b;
  printf ("a soma dos dois números é: %d\n", soma);
  printf ("seno de 0 eh %f\n", sin(0));
  return 0;
  }