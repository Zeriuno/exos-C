/*
Take input from 'ls'
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
  char vieille[15], c ;
  FILE *f1            ;
  int i               ;

  /*printf("Up and running...\n") ; --debug line*/
  f1 = popen("ls photo*", "r") ;
  /*printf("Running and listing...\n") ; --debug line*/
  for (i = 0; i < 11 ; i+) /*contournement du fait de ne pas savoir comment prendre la chaîne du nom du fichier jusqu'à la fin*/
  {
    c = getc(f1)               ;
    vieille[i] = c             ;
  }
  pclose(f1)                   ;
  /*printf("Closing...\n")     ; --debug line*/
  vieille[i] = '\0'            ;
  /*printf("%d\n", i)          ; --debug line*/
  printf("%s\n", vieille)      ;
}
