/* prix livraison (algorithmique) */
#include <stdio.h>
#define seuil_gratuite=100
#define prix_livraison=10
main()
{
  float prix_article, prix_paye;

  printf("Saisir le prix en euros de l'article acheté : ") ;
  scanf("%f", &prix_article);
  if
    prix_article > seuil_gratuite
  do
    printf("Le prix à payer est %f, la livraison sera gratuite", prix_article) ;
  else
    prix_paye = prix_article + prix_livraison
    print("Le prix a payer est %f, la livraison coûte %f", prix_paye, prix_livraison) ;
}
/*Tentative non réussie: il faudrait vraiment que je connaisse comment fonctionnent les 'if'!
