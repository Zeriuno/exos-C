/*Ce fichier, écrit pour montrer les différentes erreurs possibles entre l'écriture et l'exécution d'un programme, est de M. Léry, tous droits réservés*/
#include <stdio.h> /*Si on écrit uniquement 'stdio', cela donne lieu à une erreur de compilation (ou erreur de syntaxe)*/

main()
{
  printf("Hello World") ; /*l'absence d'éléments syntactiques, comme le ';', donne également lieu à des erreurs syntactiques*/
  printf("cosinus = %f\n", cos(0.5));
  printf("%d", pow(2));
}
