/*---------*/
/*  pow.c  */
/*---------*/

/* petit test de comment fonctionne pow */
/* le programme ne compile pas si on omet l'option -lm à la fin de l'instruction de compilation: cc -o $output $input -lm */

#include <stdio.h>
#include <math.h>
main()
{
  int puissance, exposant        ;
  printf("Saisir l'exposant : ") ;
  scanf("%d", &exposant)         ;
  puissance = pow(3, exposant)   ;
  printf ("%d\n", puissance)     ;
}
