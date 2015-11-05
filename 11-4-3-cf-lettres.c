#include <stdio.h>
main()
{
  char a, b ;

  printf("Saisir deux lettres : ") ;
  scanf("%c %c", &a, &b) ;
  if (a > b)
    printf("La première est la plus grande.\n") ;
  else
    printf("La première est la plus petite.\n") ;
}
