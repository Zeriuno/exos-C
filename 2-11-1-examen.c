#include <stdio.h>
#define MAXNOM 30

/*-----------------

 Déclarations
 préliminaires
-----------------*/

void saisie();
void affichage();
void affichage_sel();
void modif_prix();
void affichage_tri();


struct a {
  int code;
  char nom[MAXNOM];
  float prix;
};
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
      case 1 :
        saisie();
        break;
      case 2 :
        affichage();
        break;
      case 3 :
        affichage_sel();
        break;
      case 4 :
        modif_prix();
        break;
      case 5 :
        affichage_tri();
        break;
      case 0 :
        printf("au revoir\n") ;
        break;
      default:
        printf("Le choix effectué n'est pas valide. Veuillez ressaisir.\n") ;
        break;

    }
  }
}

void saisie()
{

}

void affichage()
{

}

void affichage_sel()
{

}

void modif_prix()
{

}

void affichage_tri()
{

}
