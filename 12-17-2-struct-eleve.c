#include <stdio.h>
main()
{
  struct etudiant {
    char nom[20];
    char prenom[20];
    int age;
  };

  struct etudiant eleve  ;

  printf("Nom : ")       ;
  scanf("%s", eleve.nom) ;
  printf("Prenom : ")    ;
  scanf("%s", eleve.prenom) ;
  printf("Âge : ") ;
  scanf("%d", &eleve.age) ;

  printf("%s %s %d\n", eleve.nom, eleve.prenom, eleve.age) ;
}
