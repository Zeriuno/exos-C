#include <stdio.h>

int main()
{
	int a, cast                    ;
	char b                         ;

	printf("Saisir un chiffre : ") ;
	scanf("%d", &a)                ;
	printf("Letto %d\n", a)        ;
	cast = a + 48                  ;
	b = cast                       ;
	printf("Convertito %c\n", b)   ;
	return 0                       ;
}