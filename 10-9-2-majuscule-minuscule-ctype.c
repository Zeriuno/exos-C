/* Conversion de majuscule à minuscule avec tolower() */
/* Si on saisit autre chose qu'une lettre, c'est le même caractère qui est retourné */

#include <stdio.h>
#include <ctype.h>
main()
{
  char majuscule, minuscule                                   ;
  printf("Saisir une lettre majuscule : ")                    ;
  scanf("%c", &majuscule)                                     ;
  minuscule = tolower(majuscule)                              ;
  printf("La minuscule correspondante est : %c\n", minuscule) ;
}
