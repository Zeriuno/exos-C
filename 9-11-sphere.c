#include <stdio.h>
#define PI 3.1415 /*ajout de M. Léry */
main()
{
float rayon, surface_sphere, volume_sphere, /* PI éliminée pour la déclarer dans l'en-tête */ ;

/*  PI = 3.1415 éliminée pour la déclarer dans l'en-tête ; */
printf("Entrez le rayon de la sphère : ")     ;
scanf("%f",&rayon)                            ;

surface_sphere = 4 * PI * rayon * rayon       ;
volume_sphere = (rayon * surface_sphere)/3    ;

printf("La surface de la sphère mesure %f et son volume est de %f\n", surface_sphere , volume_sphere) ;
}
