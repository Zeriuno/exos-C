/*--------------------------------------------------------------
--  le switch prédisposé ne fonctionne pas du tout: à réparer --
--  2015-11-13 réparé, reste à faire marcher la poubelle      --
-------------------------------------------------------------*/
#include <stdio.h>
main()
{
  char lettre, poubelle ;
  int  ascii, choix     ;

printf("1 si tu veux le code d'une lettre\n2 si tu veux la lettre d'un code : ") ;
scanf("%d", &choix) ;
switch (choix)
  {
  case 1 :
  scanf("%d", &ascii) ;

  scanf("%c", &poubelle) ;
  while((poubelle=getchar()) != '\n') ;
  scanf("%c", &lettre)   ;
  printf("%d\n", lettre) ;
   break ;
  case 2 :
    scanf("%d",&ascii);
    lettre = ascii ;
    printf("%c\n", lettre) ;
    break ;
  default:
    printf("Merci, au revoir!");
    break;
  }
}
