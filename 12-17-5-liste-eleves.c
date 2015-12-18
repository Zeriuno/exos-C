/*----------------------------------

Code de M. Léry

----------------------------------*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAILLE 200
#define NON_TROUVE -1 /*Ceci afin de rendre plus compréhensible le code à la simple lecture*/
/* Type global */
#define MAX_NOM 200 /* de moi */

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

void saisie()                 ;
void affichage()              ;
void chargement()             ;
void conv_maj(char chaine[])  ;
int recherche(char nomrech[]) ;
void sauvegarde()             ;
void suppression()            ;

/*----------------------------------

Menu de choix

----------------------------------*/


main()
{

  int choix = -1, numero ;
  char nom[MAX_NOM]      ;
  struct etudiant eleve  ;
  while(choix != 0)
  {
    printf("\n")              ;
    printf("-1- Saisie\n")    ;
    printf("-2- Affichage\n") ;
    printf("-3- Sauvegarder\n") ;
    printf("-4- Chargement\n") ;
    printf("-5- Vider\n") ;
    printf("-6- Rechercher\n") ;
    printf("-0- Quitter\n\n") ;
    printf("Choix : ")        ;

    scanf("%d", &choix)       ;

    switch(choix)
    {
      case 0 :
        printf("Au revoir.\n") ;
        break ;
      case 1 :
        saisie() ;
        break    ;
      case 2 :
        affichage() ;
        break       ;
      case 3 :
        sauvegarde() ;
        break ;
      case 4 :
        chargement() ;
        break ;
      case 5 :
        chargement() ;
        break ;
      case 6 :
        printf("Saisissez le nom à recherche : ") ;
        scanf("%s", nom) ;
        numero = recherche(nom) ;
        if(numero == NON_TROUVE)
        {
          printf("%s n'a pas été trouvé.", nom) ;
        }
        else
        {
          eleve = tabeleves[numero] ;
          printf("%s %s %d\n", eleve.nom, eleve.prenom, eleve.age) ;
        }
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
  const MAXPRENOM = 200 ; /* de moi */
  char nom[MAXNOM], prenom[MAXPRENOM] ;
  struct etudiant eleve ;
  int i ;

  strcpy(eleve.nom, "début")          ;

  while(strcmp(eleve.nom,"!") != 0) /* de moi */
  {
    printf("--------------------\n") ; /* de moi */
    printf("Saisie d'un étudiant\n") ; /* de moi */
    printf("--------------------\n") ; /* de moi */
    printf("Nom ('!' pour terminer): ") ;
    scanf("%s", eleve.nom)     ;
    conv_maj(eleve.nom)        ;
    if(strcmp(eleve.nom,"!") != 0) /* de moi */
    {
      printf("Prénom : ")       ;
      scanf("%s", eleve.prenom) ;
      conv_maj(eleve.prenom)    ;
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

  if(nbeleves == 0)
  {
    printf("Aucun élève n'a été saisi.\n") ;
  }
  else
  {
    for(i = 0 ; i < nbeleves ; i++)
    {
      eleve = tabeleve[i] ;
      printf("%s %s %d\n", eleve.nom, eleve.prenom, eleve.age) ;
    }
  }
}

/*----------------------------------

Conversion en majuscules

----------------------------------*/

void conv_maj(char chaine[])
{
  int i, taille ;

  taille = strlen(chaine) ;
  for (i = 0 ; i < taille ; i++)
  {
    chaine[i] = toupper(chaine[i]) ;
  }
}

/*----------------------------------

Sauvegarde

----------------------------------*/

void sauvegarde()
{
  const NOMFICHIER = 200 ;

  char nomfichier[NOMFICHIER] ;
  FILE *f1 ;
  int i;
  struct etudiant eleve ;

  if(nbeleves == 0)
  {
    printf("Aucun élève n'a été saisi.\n") ;
  }
  else
  {
    printf("Saisir le nom du fichier : ") ;
    scanf("%s", nomfichier) ;
    f1 = fopen(nomfichier, "w") ;
    for(i = 0 ; i < nbeleves ; i++)
    {
      eleve = tabeleve[i] ;
      fprintf(f1, "%s %s %d\n", eleve.nom, eleve.prenom, eleve.age) ;
    }
    fclose(f1);
    printf("%d élèves sauvegardés.\n", nbeleves) ;
  }
}

/*----------------------------------

Chargement

----------------------------------*/

void chargement()
{
  const MAX_NOMFICHIER = 200 ; /* de moi */

  char nomfichier[MAX_NOMFICHIER];/* de moi */
  FILE *f1 ;
  int i = 0, lectureOK ;
  struct etudiant eleve ;

  printf("Nom du fichier à charger : ") ;
  scanf("%s", nomfichier) ;
  f1 = fopen(nomfichier,"r") ;
  while(!feof(f1))
  {
    lectureOK = fscanf(f1, "%s %s %d", eleve.nom, eleve.prenom, &eleve.age) ;
    if(lectureOK != EOF)
    {
      conv_maj(eleve.nom)        ;
      conv_maj(eleve.prenom)        ;
      tabeleve[i++] = eleve     ;
    }
  }
  fclose(f1) ;
  nbeleves = i ;
  printf("%d élèves lus.\n", nbeleves) ;
}

/*----------------------------------

Suppression

----------------------------------*/

void suppression()
{
  nbeleves = 0 ;
}

/*----------------------------------

Recherche

----------------------------------*/


int recherche(char nomrech[])
{
  int i, numcase = NON_TROUVE              ;
  struct etudiant eleve                    ;

  conv_maj(nomrech);

  if(nbeleves == 0)
  {
    printf("Aucun élève n'a été saisi.\n") ;
  }
  else
  {
    for(i = 0 ; i < nbeleves ; i++)
    {
      eleve = tabeleve[i]                  ;
      if (strcmp(eleve.nom, nomrech) == 0)
        {
          printf("Élève trouvé")           ;
          numcase = i                      ;
        }
    }
  }
  return numcase                           ;
}
