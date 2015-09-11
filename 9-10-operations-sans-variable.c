#include <stdio.h>

main()
{
 int a,b;

 printf("Entrez deux valeurs (ex. 12 24) : ") ;
 scanf("%d",&a) ;
 scanf("%d",&b) ;

 printf("somme de %d + %d = %d\n", a, b, a + b) ;
 printf("soustraction de %d - %d = %d\n", a, b, a - b) ;
 printf("multiplication de %d * %d = %d\n", a, b, a * b) ;
 printf("quotient de %d * %d = %d\n", a, b, a / b) ;
 printf("reste de la division entière de %d / %d = %d\n", a, b, a % b);
}
