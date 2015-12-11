/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
#define MAX_NOTES 2
main()
{
  float tabnotes[MAX_NOTES], x, somme, moyenne      ;
  int i, nbnotes                           ;

  i= 0                                     ;
  printf("Entrez une liste de notes et terminez par -1 : ")   ;
  x = 1                                    ;
  while(x >=0)
  {
    scanf("%f", &x)                        ;
    /*
    Non nécessaire car on le met dans l'opération d'affectation dans tabnotes
    i++                                    ;
    */
    /*
    Inutile

    if(x < 0)
    {
      tabnotes[i] = x                      ;

  }
  */
  /*c'est la position de ++ qui détermine l'ordre des opérations: le ++ se fait après l'affectation. ++i serait l'inverse*/
    tabnotes[i++] = x                      ;
  }

  /*
  nbnotes servira pour afficher mais aussi pour se remettre à saisir
  */
    nbnotes = i - 1                        ;
  /*affichage*/
  printf("Voici les notes saisies :\n")    ;
  for (i=0; i < nbnotes ; i++)
  {
  /*
    printf("%5.2f", tabnote[i])            ;
  */
    printf("%6.2f", tabnotes[i])           ;
  }
  printf("\n")                             ;

  /*calcul de la moyenne*/
  somme = 0                                ;
  for(i = 0 ; i < nbnotes ; i++)
  {
    somme = somme + tabnotes[i]            ;
  }
  moyenne = somme / nbnotes                ;
  printf("La moyenne des %d notes est %f\n", nbnotes, moyenne) ;
}
