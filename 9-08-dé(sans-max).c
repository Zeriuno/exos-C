#include <stdio.h>
main()
{
  int i;
  i = rand(1);
  printf("%d\n",i);
  /*
  Le resultat sera toujours le même. Pour changer, 'rand' a besoin d'être initialisé. Afin de faire changer régulièrement le résultat 'rand' doit être initialisé à chaque fois, avec une valeur différente; typiquement on utilise l'heure du système.
  */
}
