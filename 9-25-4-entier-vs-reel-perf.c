/*exercice fait par M. Léry*/

#include <stdio.h>
main()
{
  float nombre, partie_decimale ;
  int partie_entiere            ;
  printf("Saisir un nombre : ") ;
  scanf("%f",&nombre)           ;

  partie_decimale = partie_entiere = nombre ;

  if (nombre - partie_entiere == 0)
  {
    printf("Le nombre saisi est un entier\n") ;
  }
  else
  {
    printf("C'est un réel.\n") ;
    printf("Sa partie entière est  :%d\n", partie_entiere) ;
    printf("Sa partie décimale est :%4.2f\n", partie_decimale) ;
  }
}
