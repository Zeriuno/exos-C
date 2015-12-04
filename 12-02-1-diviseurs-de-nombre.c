#include <stdio.h>
main()
{
  int i, d;


  printf("Saisir un entier supérieur à 1 : ") ;
  scanf("%d", &i)                             ;
  if (i > 1)
  {
    d = 1 ;
    while(d <= i)
    {
      if (i % d == 0)
      {
        printf("%d est un diviseur de %d\n", d, i) ;
      }
      d++ ;
    }

  }
  else
  {
    printf("Erreur, le nombre saisi n'est pas plus grand que 1. Con.\n") ;
  }
}
