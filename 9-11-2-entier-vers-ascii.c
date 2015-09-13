/*

Entrer un code ASCII, le traduire en lettre; deux saisies.

*/
#include <stdio.h>
main()
{
  char lettre                                                               ;
  int entier                                                                ;

  printf("Entrez un entier compris entre 1 et 126 : ")                      ;
  scanf("%d", &entier)                                                      ;
  lettre = entier                                                           ;
  printf("La lettre correspondante selon le code ASCII est : %c\n", lettre) ;

  printf("Entrez un entier compris entre 1 et 126 : ")                      ;
  scanf("%d", &entier)                                                      ;
  lettre = entier                                                           ;
  printf("La lettre correspondante selon le code ASCII est : %c\n", lettre) ;
}
