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
  printf("Entrer 1 nombre : ") ;
  scanf("%d", &N) ;
  trouve = 0 ;
  reste = N % 2 ;
  if(reste == 0) /*cela rend 2 nombre non premier, erreur*/
  {
    trouve = 1;
  }
  for(diviseur = 3 ; diviseur < N ; diviseur += 2)
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
