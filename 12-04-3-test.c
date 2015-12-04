#include <stdio.h>
main()
{
  int a ;

  scanf("%d", &a);
  if (a > 0)
  {
    a = a++;
  }
  printf("%d\n", a) ;
}
