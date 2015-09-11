#include <stdio.h>

main()
{
 int a, b, somme, soustraction, multiplication, quotient, modulo        ;

 printf("Entrez deux valeurs (ex. 12 24) : ")                           ;
 scanf("%d", &a)                                                        ;
 scanf("%d", &b)                                                        ;
 somme = a + b                                                          ;
 soustraction = a - b                                                   ;
 multiplication = a * b                                                 ;
 modulo = a % b                                                         ;
 quotient = a / b                                                       ;
 printf("somme de %d + %d = %d\n", a, b, somme)                         ;
 printf("soustraction de %d - %d = %d\n", a, b, soustraction)           ;
 printf("multiplication de %d * %d = %d\n", a, b, multiplication)       ;
 printf("quotient de %d * %d = %d\n", a, b, quotient)                   ;
 printf("reste de la division entière de %d / %d = %d\n", a, b, modulo) ;
}
