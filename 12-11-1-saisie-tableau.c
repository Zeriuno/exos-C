/*
Exercice fait par M. Léry, tous droits réservés
Saisie de notes dans un tableau, '-1' arrête la saisie*/
#include <stdio.h>
main()
{
  float tabnotes[200], x                   ;
  int i                                    ;

  i= 0                                     ;
  printf("Entrez une liste de notes : ")   ;
  x = 1                                    ;
  while(x >=0)
  {
    scanf("%f", &x)                        ;
    i++                                    ;
    if(x < 0)
    {
      tabnotes[i] = 0                      ;
  }
    tabnotes[i] = x                        ;
  }
    nbnotes = i                            ;
}
