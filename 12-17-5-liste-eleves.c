/*----------------------------------

Code de M. Léry

----------------------------------*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAILLE 200

/* Type global */

struct etudiant {
  char nom[20]                                           ;
  char prenom[20]                                        ;
  int age                                                ;
};


/* Variable globale */
struct etudiant tabeleve[TAILLE]                         ;
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
  const MAXNOM = 200 ; /* de moi */
  const MAXPRENOM = 200 ; /* de moi */
  char nom[MAXNOM], prenom[MAXPRENOM] ;
  struct etudiant eleve ;
  int i ;

  strcpy(eleve.nom, "début")          ;

  while(strcmp(eleve.nom,"!") != 0) /* de moi */
  {
    printf("--------------------") ; /* de moi */
    printf("Saisie d'un étudiant") ; /* de moi */
    printf("--------------------") ; /* de moi */
    printf("Nom ('!' pour terminer): ") ;
    printf("%s", eleve.nom)     ;
    if(strcmp(eleve.nom,"!") != 0) /* de moi */
    {
      printf("Prénom : ")       ;
      scanf("%s", eleve.prenom) ;
      printf("Âge : ")          ;
      scanf("%d", &eleve.age)   ;

      printf("\n")              ; /* de moi */
      tabeleve[i++] = eleve     ;
    }
  }
  nbeleves = i ;
  printf("%d élèves saisis.\n", nbeleves) ;
}

/*----------------------------------

Affichage

----------------------------------*/

void affichage()
{
  int i;
  struct etudiant eleve ;
  for(i = 0 ; i < nbeleves ; i++)
  printf("Affichage.") ;
}
