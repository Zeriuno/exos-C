#include <stdio.h>
main()
{
  int ascii_n ;
  char ascii  ;
  printf("Saisir le chiffre dont on veut afficher le caractère correspondant dans la table ASCII : ") ;
  scanf("%d", &ascii_n)                                                                               ;
  ascii = ascii_n                                                                                     ;
  printf("%c\n", ascii)                                                                               ;
}

