#include <stdio.h>
main()
{
  int i, j    ;

  i = 127     ;
  j = i + 1   ;
  printf("j") ;
}
/*
Tentative pas réussie
de comprendre des aspects des limites liées à l'encodage de l'information.
C'est parce que 'int' est, de base, une valeur bien plus grande que l'intervalle défini par 127. Le problème est bien visible, par contre, lorsque l'on essaie de coder un nombre de téléphone sur un entier.
*/
