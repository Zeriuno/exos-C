#include <stdio.h>
main()
{
  const MAX_CHAINE = 20;
  char chaine[MAX_CHAINE];
  int delta ;

  printf("Saisir une chaîne de caractères : ") ;
  scanf("%s", chaine) ;

  delta = 'A' - 'a';
  chaine[0] = chaine[0] +delta ;
  printf("%s\n", chaine) ;
}
