#include <stdio.h>
#include <string.h>

main ()
{
	char mot[40]                ;
	int lenght                  ;
	
	printf("Type a word : ")    ;
	scanf("%c", mot)            ;
	printf("%d\n", strlen(mot)) ;
	return 0                    ;
}