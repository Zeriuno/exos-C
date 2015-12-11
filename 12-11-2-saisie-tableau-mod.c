/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
#define MAX_NOTES 20
float tabnotes[MAX_NOTES] ;
int nbnotes               ;
main()
{
  saisie()                                 ;
  affichage() ;
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

saisie()
{
  float x, tabnotes[MAX_NOTES]             ;
  int i, nbnotes                           ;
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

affichage()
{
  int i, nbnotes                           ;
  float tabnotes[MAX_NOTES]                ;
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
-------------------------------------------

moyenne_calcul()
{
  /*calcul de la moyenne
  somme = 0                                ;
  for(i = 0 ; i < nbnotes ; i++)
  {
    somme = somme + tabnotes[i]            ;
  }
  moyenne = somme / nbnotes                ;
  printf("Notes : %d\n", nbnotes)          ;
  printf("Moyenne : %f\n", moyenne)        ;
}
*/
