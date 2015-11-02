/*Exercice fait par M. Léry*/

#include <stdio.h>
main()
{
  float note1, note2, note3, moyenne        ;
  int coef1, coef2, coef3, moyenne_ent      ;
  printf("Entrez les trois notes : ")       ;
  scanf("%f %f %f", &note1, &note2, &note3) ;
  printf("Entrez les trois coefficients, dans l'ordre : ") ;
  scanf("%d %d %d", &coef1, &coef2, &coef3) ;
  moyenne = ((note1 * coef1) + (note2 * coef2) + (note3 * coef3))/(coef1 + coef2 + coef3) ;
  printf("La moyenne est : %5.2f\n", moyenne) ;
  printf("Votre mention est: ") ;
  moyenne_ent = moyenne ;
  switch (moyenne_ent)
  {
    case 0 :
    case 1 :
    case 2 :
    case 3 :
    case 4 :
    case 5 :
    case 6 :
    case 7 :
    case 8 :
    case 9 :
      printf("Recalé.\n") ;
      break            ;
    case 10 : case 11 :
      printf("Passable.\n") ;
      break ;
    case 12 : case 13 :
      printf("Assez bien.\n") ;
      break ;
    case 14 : case 15 :
      printf("Bien.\n") ;
      break ;
    case 16 : case 17 : case 18 : case 19 : case 20 :
      printf("Très bien.\n") ;
      break ;
    default :
      printf("Erreur de calcul dans la moyenne.\n") ;
      break ;
  }
}
