/*-------------------------------------------------------------
-  le switch prédisposé ne fonctionne pas du tout: à réparer --
-------------------------------------------------------------*/
#include <stdio.h>
main()
{
  char lettre, poubelle ;
  int  ascii            ;

printf("0 si tu veux le code d'une lettre\n1 si tu veux la lettre d'un code : ") ;
scanf("%d", &ascii) ;
if(!ascii)
  {
  scanf("%c", &poubelle) ;
  while((poubelle=getchar()) != '\n') ;
  scanf("%c", &lettre)   ;
  printf("%d\n", lettre) ;
  }
else
  {
  scanf("%d",&ascii);
  lettre = ascii ;
  printf("%c\n", lettre) ;
  }
}
