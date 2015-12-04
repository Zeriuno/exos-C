/*------------------------------------------
--  Programme pour trouver lequel de      --
-- trois nombres saisis est le majeur     --
-- et tentative d'identifier les égalités --
------------------------------------------*/

#include <stdio.h>
main()
{
  int a, b, c, grand, /**/ egalite_test;
  /*booléen pour savoir si il y a des égalités entre les nombres*/
  char grand_mot[9], egalite_mot[40] ;

  egalite_test = 0                               ;
  printf("Il faut saisir trois entiers.\n") ;
  printf("1er  : ")                         ;
  scanf("%d", &a)                           ;
  printf("2ème : ")                         ;
  scanf("%d", &b)                           ;
  printf("3ème : ")                         ;
  scanf("%d", &c)                           ;

  if(a > b)
  {
    if(a > c)
    {
      grand = a             ;
      grand_mot = "premier" ;
    }
    else
    {
      grand = c               ;
      grand_mot = "troisième" ;
      if((a - c) == 0)
      {
        egalite_test = 1  ;
        egalite_mot = "le premier et le troisième" ;
      }
    }
  }
  else
  {
    if(b > c)
    {
      grand = b              ;
      grand_mot = "deuxième" ;
    }
    else
    {
      grand = c ;
      if((b - c) == 0)
      {
        egalite_test = 1  ;
        egalite_mot = "le deuxième et le troisième" ;
      }
      if(egalite_test == 1)
      {
        if((a - c) == 0)
        {
          egalite_mot = "le premier, le deuxième et le troisième!" ;
        }
      }
    }
  }
  printf("Le plus grand des trois nombres est le %c : %d\n", grand_mot, grand) ;
  if(egalite_test == 1)
  {
    printf("Et tu as saisi des nombres égaux: %c. Petit malin!", egalite_mot) ;
  }
}
