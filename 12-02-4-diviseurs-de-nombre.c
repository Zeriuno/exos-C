#include <stdio.h>
main()
{
  int i, d;


  printf("Saisir un entier supérieur à 1 : ") ;
  scanf("%d", &i)                             ;
  if (i > 1)
  {
    for (d=1; d < i+1 ; d++)
    {
      if (i % d == 0)
      {
        printf("%d est un diviseur de %d\n", d, i) ;
      }
    }

  }
  else
  {
    printf("Erreur, le nombre saisi n'est pas plus grand que 1. Con.") ;
  }
}
