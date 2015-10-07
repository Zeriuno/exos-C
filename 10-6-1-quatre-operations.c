#include <stdio.h>
main()
{
  int operateur1, operateur2, somme, soustraction, multiplication, division, quotient;

  printf("Saisir un premier numéro, entier : ")                    ;
  scanf("%d", &operateur1)                                         ;
  printf("Saisir un deuxième numéro, entier : ")                   ;
  scanf("%d", &operateur2)                                         ;
  printf("Très bien.\nJe vais maintenant effectuer les quatre opérations sur ces deux entiers\n") ;
  somme = operateur1 + operateur2                                  ;
  soustraction = operateur1 - operateur2                           ;
  multiplication = operateur1 * operateur2                         ;
  division = operateur1 / operateur2                               ;
  quotient = operateur1 % operateur2                               ;
  printf("%d + %d = %d\n", operateur1, operateur2, somme)          ;
  printf("%d - %d = %d\n", operateur1, operateur2, soustraction)   ;
  printf("%d * %d = %d\n", operateur1, operateur2, multiplication) ;
  printf("%d / %d = %d\n", operateur1, operateur2, division)       ;
  printf("(et le reste est %d)\n", quotient)                       ;
}
