#include <stdio.h>
main()
{
  int i, pt;

  printf("Saisir un chiffre : ") ;
  scanf("%d", &i)                ;
  printf("Le chiffre saisi est %d\n", i) ;
  pt = &i ;
}

/*tentative de comprendre le fonctionnement de "&" comme caractère spécial qui indique l'adresse mémoire d'une variable
La compilation donne erreur avec le message suivant

10-2-3-adresse-variable.c:9:6: warning: assignment makes integer from pointer without a cast [enabled by default]
   pt = &i ;
      ^
*/
