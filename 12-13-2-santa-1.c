#include <stdio.h>
main()
{
  FILE *a                                              ;
  char b                                               ;
  int floors                                           ;

  b = 'a'                                              ;
  floors = 0                                           ;

  a = fopen("12-13-1-santa-1-instructions.txt", "r")   ;
  while(b != '\n')
  {
    fscanf(a, "%c", &b)                                ;
    switch(b)
    {
      case '(':
        floors += 1                                    ;
        break                                          ;
      case ')':
        floors -= 1                                    ;
        break                                          ;
      case '\n':
        printf("Phew! That was long!\n")               ;
        break                                          ;
      default:
        printf("\n\n\nHuston, we have a problem.\n\n") ;
        break                                          ;
    }
  }
  fclose(a)                                            ;
  printf("Santa Claus is on floor n. %d\n", floors)    ;
}
