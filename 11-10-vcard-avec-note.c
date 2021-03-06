*/----------------------------
- Ajouter une selection      -
- 1 pour ajouter une adresse -
- mail, 2 pour un numéro tél -
- etcetera, 0 pour quitter   -
- a terme un programme de    -
- ligne de commande avec     -
- deux modes: interactif et  -
- avec arguments (search     -
- et add)                    -
----------------------------*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char uuidgen() ;

main()
{
  char prenom[100], nom[100], mel[100], fichier[204], tel[20], uuid[40], note[200] ;
  FILE *f1 ;
  FILE *vcard                                                            ;

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

  printf("Écris le prénom de la personne : ")    ;
  scanf("%s", prenom)                            ;
  printf("Écris son nom : ")                     ;
  scanf("%s", nom)                               ;
  printf("Écris son adresse mél : ")             ;
  scanf("%s", mel)                               ;
  printf("Écris son numéro de téléphone (je mets le +, tu mets le code pays, et pas d'espaces) : ") ;
  scanf("%s", tel)                               ;
  printf("Saisir les notes pour ce contact: ")   ;
  scanf("%s", note)                              ;
  strcat(fichier,nom)                            ;
  strcat(fichier,prenom)                         ;
  strcat(fichier,".vcf")                         ;
  vcard = fopen(fichier, "w")                    ;

  uuid = uuidgen()

  fprintf(vcard, "BEGIN:VCARD\nVERSION:3.0\nN:%s;%s;;;\nFN:%s %s\nORG:\nROLE:\nEMAIL;type=INTERNET:%s\nTEL;type=VOICE:+%s\nUID:urn:uuid:%s\nNOTE:%s\nEND:VCARD", nom, prenom, prenom, nom, mel, tel, uuid, note) ;
  fclose(vcard)  ;
  printf("Le fichier %s a bien été créé\n", fichier) ;
}

char uuidgen()
{
  FILE *f1                   ;
  f1 = popen("uuidgen", "r") ;
  fscanf(f1, "%s", uuid)     ;
  pclose(f1)                 ;
  char uuid[40]              ;
}
