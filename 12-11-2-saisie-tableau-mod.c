/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
#define MAX_NOTES 20
void saisie()             ;
void affichage()          ;
float moyenne_calcul()    ;
float tabnotes[MAX_NOTES] ;
int nbnotes               ;
main()
{
  float moyenne_main                       ;
  saisie()                                 ;
  affichage()                              ;
  moyenne_main = moyenne_calcul()          ;
  printf("Moyenne : %f\n", moyenne_main)   ;
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
  i = 0                                    ;
  printf("Entrez une liste de notes et terminez par -1 : ")   ;
  x = 1                                    ;
  while(x >=0)
  {
    scanf("%f", &x)                        ;
    tabnotes[i++] = x                      ;
  }

  nbnotes = i - 1                          ;
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
  printf("Voici les notes saisies :\n")    ;
  for (i=0; i < nbnotes ; i++)
  {
    printf("%6.2f", tabnotes[i])           ;
  }
  printf("\n")                             ;
}


/*------------------------------------------
--                                        --
--             Procédure                  --
--             moyenne                    --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/

float moyenne_calcul()
{
  int i                                    ;
  float somme, moyenne                     ;
  somme = 0                                ;
  printf("nbnotes %d\n", nbnotes) ;
  for(i = 0 ; i < nbnotes ; i++)
  {
    printf("i = %d tabnotes = %f\n", i, tabnotes[i]) ;
    somme = somme + tabnotes[i]            ;
  }
  moyenne = somme / nbnotes                ;
  printf("somme = %f\n", somme) ;
  printf("Notes : %d\n", nbnotes)          ;
  printf("moyenne fonc = %f\n", moyenne) ;
  return moyenne                           ;
}

/*------------------------------------------
--                                        --
--             Procédure                  --
--             min/max                    --
--                                        --
--                                        --
--                                        --
--                                        --
-------------------------------------------*/
