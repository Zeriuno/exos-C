#include <stdio.h>

main()
{
  int choix  = 1;
  while(choix != 0)
  {
    printf("Saisir un chiffre : ");
    scanf("%d", &choix);
    printf("Vous avez saisi \"%d\"\n", choix);
  }
}

