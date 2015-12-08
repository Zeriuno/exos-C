#include <stdio.h>
#include <ctype.h>
main()
{
  int a                                ;
  printf("Saisir un nombre entier : ") ;
  scanf("%d", &a)                      ;
  if(isdigit(a))
    printf("VRAI\n")                   ;
  else
    printf("Con.\n")                   ;
}
