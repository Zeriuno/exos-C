/*
Code de M. Léry, noms des variables différents
*/

#include <stdio.h>
main()
{
  int impairs, somme, i, j             ;

  printf("Nombre de valeurs : ")       ;
  scanf("%d", &impairs)                ;

  i = -1                               ;
  somme = 0                            ;
  j = 0                                ;
  while(j < impairs)/*erreur: j'ai mis '<='*/
  {
    i += 2                             ;
    somme += i                         ;
    j++                                ; /*erreur, j'ai écrit j = j++ ;*/
  };

  printf("la somme est : %d\n", somme) ;/*erreur: j'ai oublié '\n'*/
}
