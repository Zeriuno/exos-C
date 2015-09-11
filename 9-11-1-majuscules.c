/*
À ajouter: contrôle si la lettre saisie est une majuscule.

De M. Léry

#Problème:

Entrer une majuscule, en montrer le code ASCII
En afficher la minuscule


##Analyse

Écrire une lettre majuscule
Récupérer son code ASCII
imprimer
ajouter 32 à son code ASCII
traduire le nouveau code en lettre


##Algorithme

code  ← code_ascii(car)
code2 ← code + 32
car2  ← code_caractere(code2)
*/


#include <stdio.h>
main()
{
  int code, code2                                       ;
  char car, car2                                        ;

  printf("Entrez une majuscule : ")                     ;
  scanf("%c", &car)                                     ;
  /* code = traduction_vers_code(car);
  char ASCII est codé sur 7 bit
  les int sont codés sur 16, la conversion de l'un vers l'autre peut se faire en rangeant la variable char dans un int
  */
  code = car                                            ;
  code2 = code + 32                                     ;
  /* car2 = traduction_vers_ascii(code2);
  à nouveau, il suffit de ranger l'entier (16 bit) dans un char (8 bit)
  (c'est donc un modulo de 256)
  */
  car2 = code2                                          ;
  printf("Sa minuscule est %c\n", car2)                 ;
  printf("Le code ASCII de la majuscule est %f", code)  ;
  printf("Le code ASCII de la minuscule est %f", code2) ;
}
