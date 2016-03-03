#include <stdio.h>
#include <string.h>
main()
{
  char c, prenom[100], nom[100], mel[100], fichier[204], tel[20] ;
  int i=0                                                        ;
  FILE *vcard                                                    ;

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
  while((c=getchar()) != '\0')
  {
    nom[i] = c                                   ;
    i++;
  }
  nom[i+1] = '\0'                                ;
  i = 0                                          ;
  printf("Écris son adresse mél : ")             ;
  while((c=getchar()) != '\0')
  {
    mel[i] = c                                   ;
    i++                                          ;
  }
  mel[i+1] = '\0'                                ;
  i = 0                                          ;
  printf("Écris son numéro de téléphone (je mets le +, tu mets le code pays, et pas d'espaces) : ") ;
  while((c = getchar()) != '\0')
  {
    tel[i] = c                                   ;
    i++                                          ;
  }
  tel[i+1] = '\0'                                ;
  strcat(fichier,nom)                            ;
  strcat(fichier,prenom)                         ;
  strcat(fichier,".vcf")                         ;
  vcard = fopen(fichier, "w")                    ;
  fprintf(vcard, "BEGIN:VCARD\nVERSION:3.0\nN:%s;%s;;;\nFN:%s %s\nORG:\nROLE:\nEMAIL;type=INTERNET:%s\nTEL;type=VOICE:+%s\nNOTE:\nEND:VCARD", nom, prenom, prenom, nom, mel, tel) ;
  fclose(vcard)  ;
  printf("Le fichier %s a bien été créé\n", fichier) ;
}
