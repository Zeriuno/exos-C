/*

Entrer un code ASCII, le traduire en lettre; deux saisies.

*/
#include <stdio.h>
main()
{
  char lettre, poubelle                                                     ;
  int entier                                                                ;

  printf("Entrez un entier compris entre 1 et 126 : ")                      ;
  scanf("%d", &entier)                                                      ;
  lettre = entier                                                           ;
  printf("La lettre correspondante selon le code ASCII est : %c\n", lettre) ;

  printf("Entrez une lettre : ")                                            ;
  scanf("%c", &poubelle)                                                    ;
  /* Et en cas de plusieurs caractères faux qui traînent dans la mémoire tampon?
  while(poubelle(getchar()) != '\n'); code de Jean-Michel Léry              ;
  même signification que
  fflush(stdin);
  qui ne marche plus sur Linux */
  scanf("%c", &lettre)                                                      ;
  entier = lettre                                                           ;
  printf("Le code ASCII correspondant à la lettre est : %d\n", entier)      ;
}
