#include <stdio.h>

main()
{
  int choix;

  choix = 1;
  while(choix != 0)
  {
    printf("-1- Saisie d'une liste d'articles\n");
    printf("-2- Affichage de tous les articles\n");
    printf("-3- Affichage de tous les articles dont le prix est inferieur a\n");
    printf("-4- Modifier le prix d'un article\n");
    printf("-5- Afficher les articles par prix décroissant\n");
    printf("Choix : ")  ;
    scanf("%d", &choix) ;
    switch(choix)
    {
      case 1:

        break;
      case :

        break;
      case :

        break;
      case :

        break;
      case :

        break;
      case 0 :
        printf("au revoir") ;
        break;
      default:
        printf("Le choix effectué n'est pas valide. Veuillez ressaisir.\n");
        break;

    }
  }
}
