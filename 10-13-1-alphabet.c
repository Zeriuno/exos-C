/* Faire un programme qui affiche si le signe saisi est une lettre de l'alphabet */
#include <stdio.h>
main()
{
  char signe ;
  int majuscule, minuscule ;
  printf("Saisir une lettre : ") ;
  scanf("%c", &signe) ;
  /* d'ici, code de M. Léry */
  majuscule = (signe >= 'A') && (signe <= 'Z') ;
  minuscule = (signe >= 'a') && (signe <= 'z') ;
  if(majuscule || minuscule)
    printf("La lettre saisie, %c, appartient à l'alphabet", signe) ;
  else
    printf("%c n'appartient pas à l'alphabet", signe) ;
}
