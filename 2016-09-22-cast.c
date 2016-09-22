#include <stdio.h>

int main()
{
	int a ;
	char b ;

	printf("Saisir un chiffre : ") ;
	scanf("%d", &a)                ;
	printf("Letto %d\n", a) ;
	b = a - 48;
	printf("Convertito %c\n", b) ;
	return 0 ;
}