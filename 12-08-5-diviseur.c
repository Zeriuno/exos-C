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
main()
{
  int N, diviseur, trouve, reste ;
  printf("Entrer 1 nombre") ;
  scanf("%d", &N) ;
  trouve = 0 ;
  for(diviseur = 2 ; diviseur < N ; diviseur++)
  {
    reste = N % diviseur ;
    if(reste == 0)
    {
      trouve = 1 ;
    }
  }
  if(trouve)
  {
    printf("Pas premier.\n");
  }
  else
  {
    printf("Premier\n");
  }
}
