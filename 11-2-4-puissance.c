/*Exercice par M.Léry*/

#include <stdio.h>
main()
{
  int i, compteur, exposant, x, resultat        ;

  printf("Saisir un nombre : ")                 ;
  scanf("%d", &x)                               ;
  printf("Saisir son exposant : ")              ;
  scanf("%d", &exposant)                        ;
  compteur = 0                                  ;
  resultat = 1                                  ;

  while (compteur < exposant)
  {
    resultat =  resultat * x                    ;
    compteur++                                  ;
  }
  printf("%d^%d = %d\n", x, exposant, resultat) ;
}
