/*Taper une lettre: c'est une majuscule, son numéro d'ordre; c'est une minuscule, son numéro d'ordre, ce n'est pas une lettre. Exercice fait par M. Léry*/

#include <stdio.h>
main()
{
  char lettre ;

  printf("Saisir une lettre : ") ;
  scanf("%c", &lettre)           ;
  if ((lettre>='A') && (lettre<='Z'))
  {
    printf("Tu as saisi une majuscule.\n")           ;
    printf("C'est la majuscule numéro %d\n", lettre-64) ;
  }
  else
  {
    if((lettre>= 'a') && (lettre <= 'z'))
    {
      printf("Tu as saisi une minuscule.\n") ;
      printf("C'est la minuscule numéro %d\n", lettre-96) ;
    }
    else
    {
      printf("Mais n'importe quoi!\nCe n'est pas une lettre de l'alphabet!\nTout de moins du mien, contraint par la table ASCII!\n");
    }
  }
  printf("Au revoir...\n") ;
}
