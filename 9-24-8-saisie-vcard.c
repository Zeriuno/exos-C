#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
  char c, prenom[100], nom[100], mel[100]        ;
  char fichier[204], note[100], tel[20], uid[30] ;
  int i=0                                        ;
  FILE *vcard, *f1                               ;

  printf("Nous allons créer une vCard\n")        ;
  printf("Tu vas écrire les informations\n")     ;
  printf("Je vais les réunir dans un fichier\n") ;

  printf("Écris le prénom de la personne : ")    ;
  while((c=getchar()) != '\n')
  {
    prenom[i] = c                                ;
    i++                                          ;
  }
  prenom[i+1] = '\0'                             ;
  i = 0                                          ;
  printf("Écris son nom : ")                     ;
  while((c=getchar()) != '\n')
  {
    nom[i] = c                                   ;
    i++;
  }
  nom[i+1] = '\0'                                ;
  i = 0                                          ;
  printf("Écris son adresse mél : ")             ;
  while((c=getchar()) != '\n')
  {
    mel[i] = c                                   ;
    i++                                          ;
  }
  mel[i+1] = '\0'                                ;
  i = 0                                          ;
  printf("Écris son numéro de téléphone (je mets le +, tu mets le code pays, et pas d'espaces) : ") ;
  while((c = getchar()) != '\n')
  {
    tel[i] = c                                   ;
    i++                                          ;
  }
  tel[i+1] = '\0'                                ;
  i = 0                                          ;
  printf("Saisi le champ 'note' : ")             ;
  while((c=getchar()) != '\n')
  {
    note[i] = c                                  ;
    i++                                          ;
  }
  note[i+1] = '\0'                               ;

  f1 = popen("uuidgen", "r")                     ;
  if(f1 == NULL)
  {
    printf("Pas de UUID, erreur de popen\n")     ;
  }
  else
  {
    fscanf(f1, "%s", uid)                        ;
    pclose(f1)                                   ;
  }

  strcat(fichier,nom)                            ;
  strcat(fichier,prenom)                         ;
  strcat(fichier,".vcf")                         ;
  vcard = fopen(fichier, "w")                    ;
  fprintf(vcard, "BEGIN:VCARD\nVERSION:3.0\nN:%s;%s;;;\nFN:%s %s\nORG:\nROLE:\nEMAIL;type=INTERNET:%s\nTEL;type=VOICE:+%s\nNOTE:%s\nUID:%s\nEND:VCARD", nom, prenom, prenom, nom, mel, tel, note, uid) ;
  fclose(vcard)  ;
  printf("Le fichier %s a bien été créé\n", fichier) ;
}
