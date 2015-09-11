#include <stdio.h>

main()
{
 int a,b,somme,soustraction,multiplication,quotient,modulo;

 printf("Entrez deux valeurs (ex. 12 24) : ") ;
 scanf("%d",&a) ;
 scanf("%d",&b) ;
 somme = a + b ;
 printf("somme de %d + %d = %d\n",a,b,somme) ;
 soustraction = a - b ;
 printf("soustraction de %d - %d = %d\n",a,b,soustraction) ;
 multiplication = a * b ;
 printf("multiplication de %d * %d = %d\n",a,b,multiplication) ;
 quotient = a / b ;
 printf("quotient de %d * %d = %d\n",a,b,quotient) ;
 modulo = a % b ;
 printf("reste de la division entière de %d / %d = %d\n",a,b,modulo);
}
