
#include <stdio.h>
#include <stdlib.h>


char ls_one() ;

main()
{
  char rename1[15]   ;

  rename1[15] = ls_one() ;
}


/*
Take input from 'ls'
*/
char ls_one()
{
  char vieille[15], c ;
  FILE *f1            ;
  int i               ;


  f1 = popen("ls photo*", "r")       ;
  for(i=0; i<11; i++)
  {
    c=getc(f1)                       ;
    vieille[i] = c                   ;
  }
  pclose(f1)                         ;
  vieille[i] = '\0'                  ;
  return(vieille)                    ;
}
