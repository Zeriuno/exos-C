/*----------------------------------

Code de M. Léry

----------------------------------*/


#include <stdio.h>
#include <ctype.h>

#define TAILLE 200

/* Type global */

struct etudiant {
  char nom[20]                                           ;
  char prenom[20]                                        ;
  int age                                                ;
};


/* Variable globale */
struct etudiant eleve[TAILLE]                            ;
int nbeleves = 0                                         ;

/*----------------------------------

Déclarations préliminaires

----------------------------------*/

void saisie()    ;
void affichage() ;


/*----------------------------------

Menu de choix

----------------------------------*/


main()
{

  int choix = -1 ;
  while(choix != 0)
  {
    printf("\n")              ;
    printf("-1- Saisie\n")    ;
    printf("-2- Affichage\n") ;
    printf("-0- Quitter\n\n") ;
    printf("Choix : ")        ;

    scanf("%d", &choix)       ;

    switch(choix)
    {
      case 1 :
        saisie() ;
        break    ;
      case 2 :
        affichage() ;
        break       ;
      case 3 :
        printf("Au revoir.") ;
        break ;

      default:
        printf("Erreur de saisie.") ;
        break ;


    }
  }
}

/*----------------------------------

Saisie

----------------------------------*/

void saisie()
{
  printf("Saisie.") ;
}

/*----------------------------------

Affichage

----------------------------------*/

void affichage()
{
  printf("Affichage.") ;
}
