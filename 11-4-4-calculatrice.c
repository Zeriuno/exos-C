/*-----------------------------------------------*/
/* 2015-11-04 Exercice fait par M. Léry (+ et -) */
/*  Élaboration ultérieure par Daniele Pitrolo   */
/*-----------------------------------------------*/

#include <stdio.h>
main()
{
  int somme = 0, chiffre, nb=0, choix                                    ;
  char car, poubelle, signe = '+'                                        ;

  car = ' '                                                              ;
  choix = 1                                                              ;
  while(choix !=0)
  {

  printf("Voici vos options:\n\n")                                       ;
  printf("0 - Quitter\n")                                                ;
  printf("1 - Aide\n")                                                   ;
  printf("2 - Exécution de calculs\n")                                   ;

  scanf("%d", &choix)                                                    ;

  switch(choix)
  {
    case 0:
      printf("Adieu!\n")                                                 ;
      break                                                              ;
    case 1 :
      printf("Les parenthèses ne sont pas supportées par ce programme.") ;
      printf("Si tu mets trop de multiplicateurs, ça ne va pas marcher.");
      printf("Les opérateurs acceptés sont:\n+ pour l'addition\n- pour la soustraction\n") ;
      break ;
    case 2:
      printf("Écrivez l'opération à effectuer : ")              ;
      while(car != '\n')
      {
        scanf("%c", &car)                                       ;
        switch(car)
        {
          case '+' :
          case '-' :
          case '*' :
          case 'x' :
          case '/' :
          case ':' :
          case '\n' :
            switch(signe)
            {
              case '+':
                somme += nb                                          ;
                break                                                ;
              case '-':
                somme -= nb                                          ;
                break                                                ;
              case '*' :
              case 'x' :
                somme = somme * nb                                   ;
                break                                                ;
              case '/' :
                somme = somme / nb                                   ;
                break                                                ;
            }
            signe = car                                              ;
            nb =0                                                    ;
            break                                                    ;

          case '0' :
          case '1' :
          case '2' :
          case '3' :
          case '4' :
          case '5' :
          case '6' :
          case '7' :
          case '8' :
          case '9' :
            chiffre = car - 48                                       ;
            nb = (nb * 10) + chiffre                                 ;
            break                                                    ;
          case '(' :
          case '[' :
            printf("Cette calculatrice ne gère pas les parenthèses") ;
            break                                                    ;
        }
      }
      printf("Le résultat est %d\n", somme)                          ;
    }
  }
}
