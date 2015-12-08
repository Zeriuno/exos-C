/*exercice de M. Léry, tous droits réservés*/
/*
jeu de test:
1 premier
2 premier
3 premier
4 non
5 premier
6 non
7 premier
*/

#include <stdio.h>
#include <math.h>
main()
{
  int N, diviseur, trouve, reste, carre, limite, diviseur1    ;
  printf("Entrer 1 nombre : ")                                ;
  scanf("%d", &N)                                             ;
  trouve = 0                                                  ;
  reste = N % 2                                               ;
  limite = sqrt(N) + 1                                        ;
  if((reste == 0) && (N != 2)) /*exclusion de 2, qui est divisible par 2, mais est premier  */
  {
    trouve = 1                                                ;
  }
  for(diviseur = 3 ; diviseur < limite ; diviseur += 2)
  {
    reste = N % diviseur                                      ;
    if(reste == 0)
    {
      trouve = 1                                              ;
      diviseur1 = diviseur                                    ;
    }
  }
  if(trouve)
  {
    printf("Pas premier.\n")                                  ;
  }
  else
  {
    printf("Premier\n")                                       ;
    diviseur2 = N/diviseur1                                   ;
    printf("Divisible par %d et %d\n", diviseur1, diviseur2 ) ;
  }
}
