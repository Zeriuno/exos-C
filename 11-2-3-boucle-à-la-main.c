/*Code de M. Léry*/

#include <stdio.h>
main()
{
  int i, j, k, compteur            ;
  printf("Entrez deux nombres : ") ;
  scanf("%d %d", &i, &j)           ;

  compteur = 0                     ;
  while (j != 0)
  {
    k = i % j                      ;
    i = j                          ;
    j = k                          ;
    compteur = compteur++          ;
  }
  printf("Résultat : %d\n", i)     ;
}
