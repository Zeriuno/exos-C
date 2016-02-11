#include <stdio.h>
#define MAXNOM 31
#define MAXINV 99 /*La première case se trouvant à l'indice 0, un tableau de taille 99 contient 100 cases*/


/*-----------------

 Déclarations
 préliminaires
-----------------*/

void saisie();
void affichage();
void affichage_sel();
void modif_prix();
void affichage_tri();



/*-----------------

 Variables
 globales
-----------------*/

struct a {
  int code;
  char nom[MAXNOM];
  float prix;
};

struct a inventaire[MAXINV];
int dans_inventaire;



main()
{
  int choix;

  choix = 1;
  dans_inventaire = 0;

  while(choix != 0)
  {
    printf("-1- Saisie d'une liste d'articles\n");
    printf("-2- Affichage de tous les articles\n");
    printf("-3- Affichage de tous les articles dont le prix est inferieur a\n");
    printf("-4- Modifier le prix d'un article\n");
    printf("-5- Afficher les articles par prix décroissant\n");
    printf("-0- Quitter\n");
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
  int code_saisi;
  struct a article;

  code_saisi = 1;
  while(article.code != 0)
  {
    printf("Code : ");
    scanf("%d", &article.code);
    if(article.code != 0)
    {
      printf("Nom : ");
      scanf("%s", article.nom);
      printf("Prix : ");
      scanf("%f", &article.prix);
      inventaire[dans_inventaire] = article;
      dans_inventaire++;
    }
  }
}

void affichage()
{
  int i;
  for(i = 0; i < dans_inventaire; i++)
  {
    printf("%d  %s %.2f\n", inventaire[i].code, inventaire[i].nom, inventaire[i].prix);
  }
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
