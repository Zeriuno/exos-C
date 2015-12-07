/* Exercice 5.7 de ceux proposés par Christophe Darmangeat pour le master PISE, fait avec Patrick Rivera. Tous droits réservés */

#include <stdio.h>
main()
{
  int nb, cpt, F ;

  printf("Saisir un nombre entier, je calculerai la factorielle : ") ;
  scanf("%d", &nb) ;
  printf("%d\n", nb) ;
  F = 1 ;

  if(nb !=0)
  {
    for(cpt = 2 ; cpt < nb+1 ; cpt++)
    {
      F = (F * cpt)            ;
     }
   }

  printf("%d! = %d\n", nb, F) ;
}
