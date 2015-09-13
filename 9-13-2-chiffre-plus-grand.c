/*
#Tester quel de deux chiffres est le plus grand

Devoir.

##Analyse

Les cas possibles sont trois:

a > b
a < b
a = b

##Algorithme

Deux tentatives;

début
chiffres a, b;

si a > b
  afficher "Le chiffre plus grand est a" ;
si a < b
  afficher "Le chiffre plus grand est b" ;
si a = b
  afficher "Les deux chiffres sont égaux, aucun n'est plus grand que l'autre" ;
fin

###Alternative

début
chiffres a, b, plus-grand ;
si a = b
  afficher "Les deux chiffres sont égaux, aucun n'est plus grand que l'autre" ;
sinon
  si a > b ;
    plus-grand = a;
  sinon
    plus-grand = b;
  afficher "Le chiffre plus grand est plus-grand";
fin

Quitte à utiliser une variable un plus, je préfère pouvoir garder l'information trouvée comme séparée des données, car cela permet de séparer information de base et information élaborée, de la mettre à jour dans un deuxième temps.
*/
#include <stdio.h>
main()
{
  float a, b, plus_grand ;

  printf("Saisir deux chiffres, je trouverai le plus grand : ") ;
  scanf("%f %f", &a, &b) ;
  if(a == b)
    printf ("Les deux chiffres sont égaux, aucun des deux n'est plus grand que l'autre\n") ;
  else
      if(a > b)
      plus_grand = a ;
      else
      plus_grand = b ;
    printf("Le chiffre plus grand est %f\n", plus_grand) ;
}

/*tentative non réussie: le dernier printf est exécuté de toutes façons, même pour les a = b.*/
