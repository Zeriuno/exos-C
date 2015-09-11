#include <stdio.h>

main()
{
 int a, b, resultat                                                       ;

 printf("Entrez deux valeurs (ex. 12 24) : ")                             ;
 scanf("%d", &a)                                                          ;
 scanf("%d", &b)                                                          ;
 resultat = a + b                                                         ;
 printf("somme de %d + %d = %d\n", a, b, resultat)                        ;
 resultat = a - b                                                         ;
 printf("soustraction de %d - %d = %d\n", a,b,resultat)                   ;
 resultat = a * b                                                         ;
 printf("multiplication de %d * %d = %d\n", a, b, resultat)               ;
 resultat = a / b                                                         ;
 printf("quotient de %d * %d = %d\n", a, b, resultat)                     ;
 resultat = a % b                                                         ;
 printf("reste de la division entière de %d / %d = %d\n", a, b, resultat) ;
}
