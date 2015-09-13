/*

Entrer un code ASCII, le traduire en lettre; deux saisies.

*/
#include <stdio.h>
main()
{
  char lettre1, lettre2                                                      ;
  int entier1, entier2                                                       ;

  printf("Entrez un entier compris entre 1 et 126 : ")                       ;
  scanf("%d", &entier1)                                                      ;
  lettre1 = entier1                                                          ;
  printf("La lettre correspondante selon le code ASCII est : %c\n", lettre1) ;

  printf("Entrez un entier compris entre 1 et 126 : ")                       ;
  scanf("%d", &entier2)                                                      ;
  lettre2 = entier2                                                          ;
  printf("La lettre correspondante selon le code ASCII est : %c\n", lettre2) ;
}
