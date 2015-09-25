#include <stdio.h>
#include <string.h>
main()
{
  char prenom[100], nom[100], mel[100], fichier[204] ;
  int tel ;
  FILE *vcard ;

  printf("              ****************\n") ;
  printf("              ** ATTENTION! **\n") ;
  printf("              ** JE SUIS UN **\n") ;
  printf("              ** PROTOTYPE! **\n") ;
  printf("              **            **\n") ;
  printf("              ** JE NE SAIS **\n") ;
  printf("              **  PAS GÉRER **\n") ;
  printf("              **LES ESPACES!**\n") ;
  printf("              ****************\n") ;

  printf("Nous allons créer une vCard\n")        ;
  printf("Tu vas écrire les informations\n")     ;
  printf("Je vais les réunir dans un fichier\n") ;

  printf("Écris le prénom de la personne : ") ;
  scanf("%s", prenom) ;
  printf("Écris son nom : ") ;
  scanf("%s", nom) ;
  printf("Écris son adresse mél : ") ;
  scanf("%s", mel) ;
  printf("Écris son numéro de téléphone (je mets le +, tu mets le code pays, et pas d'espaces) : ") ;
  scanf("%d", &tel) ;
  strcat(fichier,nom);
  strcat(fichier,prenom)     ;
  strcat(fichier,".vcf") ;
  vcard = fopen(fichier, "w")    ;
  fprintf(vcard, "BEGIN:VCARD\nVERSION:3.0\nN:%s;%s;;;\nFN:%s %s\nORG:\nROLE:\nEMAIL;type=INTERNET:%s\nTEL;type=VOICE:+%d\nNOTE:\nEND:VCARD", nom, prenom, prenom, nom, mel, tel) ;
  fclose(vcard) ;
  printf("Le fichier %s a bien été créé\n", fichier) ;
}
