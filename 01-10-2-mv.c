#include <stdio.h>
#include <stdlib.h>

main()
{
  system("var1='photo 1.JPG'") ;
  system("var2='2014-08 Piombino.jpg'") ;
  system("mv $1 $2") ;
}
/*Échec, les variables ne s'expandent pas dans bash*/
