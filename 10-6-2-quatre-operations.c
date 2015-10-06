/* --------------------- */
/* quatre-operations.c   */
/* --------------------- */

/*Cet exercice est réalisé après une première solution de ma main, en apportant des corrections selon la solution proposée par M.Léry*/

#include <stdio.h>
main()
{
  int operateur1, operateur2;

  printf("Saisir deux entiers : ")                    ;
  scanf("%d %d", &operateur1, &operateur2)            ;
  printf("Très bien.\nJe vais maintenant effectuer les quatre opérations sur ces deux entiers\n") ;

  /* ne nécessitant pas d'autres traitements, la solution plus économe en mémoire et concise est de ne pas stocker les résultats comme variables*/

  printf("%d + %d = %d\n", operateur1, operateur2, operateur1+operateur2) ;
  printf("%d - %d = %d\n", operateur1, operateur2, operateur1-operateur2) ;
  printf("%d * %d = %d\n", operateur1, operateur2, operateur1*operateur2) ;
  printf("%d / %d = %d\n", operateur1, operateur2, operateur1/operateur2) ;
  printf("(et le reste est %d)\n", operateur1%operateur2)                 ;
}
