/*-----------------*/
/*    emprunt.c    */
/*-----------------*/

#include <stdio.h>
#include <math.h>
main()
{
  float emprunt, ans, mois, taux_annuel, taux_mensuel, mensualite ;
  printf("Saisir le montant emprunté : ")                         ;
  scanf("%f", &emprunt)                                           ;
  printf("Saisir la durée en années : ")                          ;
  scanf("%f", &ans)                                               ;
  mois = ans * 12                                                 ;
  printf("Saisir le taux annuel : ")                              ;
  scanf("%f", &taux_annuel)                                       ;
  taux_mensuel = taux_annuel / 12                                 ;
  mensualite = (emprunt * taux_mensuel) * (pow((1+taux_mensuel), mois)/(pow((1+taux_mensuel), mois) -1)) ;
  printf("Le montant de chaque mensualité pour le remboursement du prêt sera de : %f\n", mensualite) ;
}
