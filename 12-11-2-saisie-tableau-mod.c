/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie

Jeu de tests
19 20 10 10 0 1 15 -1

à faire: lorsqu'on quitte, vérifier si une sauvegarde est nécessaire. On peut le faire en particulier avec une procédure. Et le test de sauvegarde une autre procédure.
*/
#include <stdio.h>
#define MAX_NOTES 20
void saisie()                                     ;
void affichage(), min_max()                       ;
void sauvegarde()                                 ;
void chargement()                                 ;
float moyenne_calcul()                            ;
float min, max, tabnotes[MAX_NOTES]               ;
int nbnotes = 0, a_sauvegarder = 0                ;
main()
{
  float moyenne_main                              ;
  int choix                                       ;

  choix = 9999                                    ;
  while(choix !=0)
  {
    printf("\n-1- Saisie\n")                      ;
    printf("-2- Affichage\n")                     ;
    printf("-3- Moyenne\n")                       ;
    printf("-4- min et MAX\n")                    ;
    printf("-5- Sauvegarde\n")                    ;
    printf("-0- Quitter\n\n")                     ;
    printf("Choix : ")                            ;

    scanf("%d", &choix)                           ;
    printf("\n\n")                                ;
    switch(choix)
    {
      case 0:
        printf("Au revoir.\n")                    ;
        break                                     ;
      case 1:
        saisie()                                  ;
        break                                     ;
      case 2:
        affichage()                               ;
        break                                     ;
      case 3:
        moyenne_main = moyenne_calcul()           ;
        printf("Moyenne : %6.2f\n", moyenne_main) ;
        break                                     ;
      case 4:
        min_max()                                 ;
        break                                     ;
      case 5:
        sauvegarde()                              ;
        break                                     ;
      case 6:
        chargement()                              ;
        break                                     ;
      default:
        printf("Erreur de saisie")                ;
        break                                     ;
    }
  }
}


/*------------------------------------------
--                                        --
--             Procédure                  --
--             saisie                     --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void saisie()
{
  float x                                  ;
  int i                                    ;
  i = nbnotes                              ;
  printf("Entrez une liste de notes et terminez par -1 : ")   ;
  x = 1                                    ;
  while(x >=0)
  {
    scanf("%f", &x)                        ;
    tabnotes[i++] = x                      ;
  }

  nbnotes = i - 1                          ;
  a_sauvegarder = 1                        ;
}

/*------------------------------------------
--                                        --
--             Procédure                  --
--             affichage                  --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void affichage()
{
  int i                                    ;

  if(nbnotes == 0)
  {
    printf("Pas de notes.")                ;
  }
  else
  {
  printf("Voici les notes saisies :\n\n")  ;
  for (i=0; i < nbnotes ; i++)
  {
    printf("%6.2f\n", tabnotes[i])         ;
  }
  printf("\n")                             ;
  }
}


/*------------------------------------------
--                                        --
--             Fonction                   --
--             moyenne                    --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

float moyenne_calcul()
{
  int i                                    ;
  float moyenne, somme                     ;
  somme = 0                                ;
  max = -9999                              ;
  min = 9999                               ;
  for(i = 0 ; i < nbnotes ; i++)
  {
    somme = somme + tabnotes[i]            ;
    if(tabnotes[i] < min)
    {
      min = tabnotes[i]                    ;
    }
    if(tabnotes[i] > max)
    {
      max = tabnotes[i]                    ;
    }
  }
  moyenne = somme / nbnotes                ;
  return moyenne                           ;
}

/*------------------------------------------
--                                        --
--             Procédure                  --
--             min/max                    --
--             par moi                    --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

void min_max()
{
  printf("Note minimale : %6.2f\n", min)  ;
  printf("Note maximale : %6.2f\n", max)  ;
}

void sauvegarde()
{
  char fichier[200]                       ;
  int i                                   ;
  FILE *a                                 ;

  if(nbnotes == 0 )
  {
    printf("Aucune note à sauvegarder.")  ;
  }
  else
  {
    printf("Saisir le nom du fichier : ") ;
    scanf("%s", fichier)                  ;
    a = fopen(fichier, "w")               ;
    for(i=0; i<nbnotes; i++)
    {
      fprintf(a, "%6.2f", tabnotes[i])    ;
    }
    fprintf(a, "\n")                      ;
    fclose(a)                             ;
    a_sauvegarder = 0                     ;
    printf("Sauvegarde effectuée.\n %d notes sauvegardées\n", nbnotes) ;
  }

  /*------------------------------------------
  --                                        --
  --             Procédure                  --
  --             chargement                 --
  --                                        --
  --                                        --
  --                                        --
  --                                        --
  -------------------------------------------*/



void chargement()
{
  nbnotes = i - 1                          ;
  char nomfichier[200], reponse_sauvegarde ;
  float x                                  ;
  int i, retour                            ;
  FILE *a                                  ;

  /*------------------------------------------
  --                                        --
  --             code à                     --
  --             externaliser               --
  --     procédure test sauvegarde          --
  --                                        --
  --                                        --
  --                                        --
  -------------------------------------------*/

  if(a_sauvegarder)
  {
    printf("Les données ont été modifiées\n")          ;
    printf("Voulez-vous faire une sauvegarde ? (o/n)") ;
    scanf("%c", &reponse_sauvegarde)       ;
    if(reponse_sauvegarde == 'o')
    {
      sauvegarde()                         ;
    }

  }

  printf("Saisir le nom du fichier à ouvrir: ")        ;
  scanf("%s", nomfichier)                  ;

  a=fopen(nomfichier,"r")                  ;
  i = 0                                    ; /*quand on charge, on charge dans le début du tableau, pas à la fin*/
  while(!=feof(a))
  {
    retour = fscanf(a, "%f", &x)           ;
    if (retour != EOF)
    {
    tabnotes[i++] = x                      ;
    }
  }
  fclose(a)                                ;
  nbnotes = i                              ;
  printf("%d notes lues.\n", %nbnotes)     ;
}
