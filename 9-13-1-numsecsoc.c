/* numsecsoc.c	*/
#include <stdio.h> /* --- #Inclusion des dépendances? stdio = standard I/O? --- */
#include <string.h>  /* --- #Librairie pour gérer les chaînes? --- */
#include <stdlib.h> /* --- Standard library? --- */
main()
{
/* --- déclarations des variables --- */
  char Num_Sec[14], Libelle[9], Nom_Mois[10], Dept[3], Com[6] ;
  int Sexe, Annee, Mois, Num_Ordre, Departement, Commune ;
/* --- instructions --- */
/* saisie du numéro sous la forme d'une chaîne */
  printf("Entrez votre numéro de sécurité sociale : ") ;
  scanf("%s", Num_Sec)         ;
/* récupéeration du numéro 1 ou 2 du Sexe */
  Sexe = Num_Sec[0]-48         ;
/* Affectation du libellé */
  if (Sexe == 1)
	 strcpy(Libelle, "Monsieur") ;
  else
	 strcpy(Libelle, "Madame")   ;
/* récupération de l'année de naissance */
  Annee = ((Num_Sec[1]-48)*10) + (Num_Sec[2]-48) ;
  Annee = Annee + 1900                           ;
/* récupération du mois de naissance */
  Mois = ((Num_Sec[3]-48)*10)+(Num_Sec[4]-48)    ;
  switch (Mois)
 {
 	 case 1 : strcpy(Nom_Mois,"Janvier")   ;
    break                                ;
	 case 2 : strcpy(Nom_Mois,"Février")   ;
    break                                ;
	 case 3 : strcpy(Nom_Mois,"Mars")      ;
	  break                                ;
	 case 4 : strcpy(Nom_Mois,"Avril")     ;
		break                                ;
	 case 5 : strcpy(Nom_Mois,"Mai")       ;
		break                                ;
	 case 6 : strcpy(Nom_Mois,"Juin")      ;
		break                                ;
	 case 7 : strcpy(Nom_Mois,"Juillet")   ;
		break                                ;
	 case 8 : strcpy(Nom_Mois,"Août")      ;
		break                                ;
	 case 9 : strcpy(Nom_Mois,"Septembre") ;
		break                                ;
	 case 10 : strcpy(Nom_Mois,"Octobre")  ;
		break                                ;
	 case 11 : strcpy(Nom_Mois,"Novembre") ;
		break                                ;
	 case 12 : strcpy(Nom_Mois,"Décembre") ;
		break                                ;
 }
/* récupération du département */
/* qui reste une chaîne */
  Dept[0]=Num_Sec[5]     ;
  Dept[1]=Num_Sec[6]     ;
  Dept[2]='\0'           ;
  Departement=atoi(Dept) ;
/* récupération de la commune */
  Com[0]=Num_Sec[5] ;
  Com[1]=Num_Sec[6] ;
  Com[2]=Num_Sec[7] ;
  Com[3]=Num_Sec[8] ;
  Com[4]=Num_Sec[9] ;
  Com[5]='\0'       ;
  Commune=atoi(Com) ;
/* récupération du numéro d'ordre */
  Num_Ordre=((Num_Sec[10]-48)*100) + ((Num_Sec[11]-48)*10) + (Num_Sec[12]-48) ;
/* Affichage des résultats */
  printf("Bonjour 		  %s\n",Libelle)                 ;
  if (Sexe == 1)
	 printf("Vous êtes né en		: %d\n",Annee)         ;
  else
	 printf("Vous êtes née en	: %d\n",Annee)           ;
  if (Mois == 8)
	 printf("Au mois d' 		: %s\n",Nom_Mois)          ;
   else
	 printf("Au mois de 		: %s\n",Nom_Mois)          ;
  if (Departement != 99)
   printf("Dans le département	: %d\n"
   "Dans la commune		: %d\n",Departement,Commune)   ;
  else
    printf("			  À l'étranger\n"
    "Dans la nation		: %d\n",Commune)               ;
  printf("Avec le numéro d'ordre	: %d\n",Num_Ordre) ;
}
