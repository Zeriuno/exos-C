/* -------------------*/
/* traitements-réel.c */
/* -------------------*/

/*afficher la partie entière, la partie décimale et l'arrondi d'un réel*/

#include <stdio.h>
main()
{
  float reel, partie_decimale                              ;
  int partie_entiere, arrondi                              ;
  printf("Saisir un réel : ")                              ;
  scanf("%f", &reel)                                       ;

  partie_entiere = reel                                    ;
  partie_decimale = reel - partie_entiere                  ;
  arrondi = reel + 0.5                                     ;
  printf("Merci! Je vais maintenant l'analyser...\n")      ;
  printf("Le chiffre saisi est   : %f\n", reel)            ;
  printf("Sa partie entière est  : %d\n", partie_entiere)  ;
  printf("Sa partie décimale est : %f\n", partie_decimale) ;
  printf("Son arrondi est        : %d\n", arrondi)         ;
}
