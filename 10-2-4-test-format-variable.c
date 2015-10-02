#include <stdio.h>
main()
{
  char forint[5] ;
  printf("Quel est le format de saisie et d'affichage d'une variable de type entier ? ") ;
  scanf("%s", forint) ;
  if (forint != "%d")
  {
    printf("Fichtre, ce n'est pas la bonne réponse!\nEssaie à nouveau!\n") ;
    printf("Quel est le format de saisie et d'affichage d'une variable de type entier ? ") ;
    scanf("%s", forint) ;
  }
  printf("Bravo!\nMaintenant une autre question.\n") ;
}
