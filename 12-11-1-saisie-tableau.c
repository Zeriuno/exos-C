/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
main()
{
  float tabnotes[200], x                   ;
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

    nbnotes = i - 1                        ;
  /*affichage*/
  printf("Voici les notes saisies :\n")    ;
  for (i=0; i < nbnotes ; i++)
  {
  /*
    printf("%5.2f", tabnote[i])            ;
  */
    printf("%6.2f", tabnotes[i])            ;
  }
  printf("\n")                             ;
}
