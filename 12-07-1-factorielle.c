/* Exercice 5.7 de ceux proposés par Christophe Darmangeat pour le master PISE, fait avec Patrick Rivera. Tous droits réservés */

#include <stdio.h>
main()
{
  int nombre, cpt, F ;

  printf("Saisir un nombre entier, je calculerai la factorielle : ") ;
  scanf("%d", nombre) ;

  for (cpt = 1 ; cpt == nombre ; cpt++)
  {
    F = F * cpt ;
  }
  printf("%d! = %d", nombre, F) ;
}
