/*--------------------------------------
  vcard

  Pour la création d'un vcard à partir
  des choix de l'utilisateur

  À faire:

  * Permettre l'ajout de plusieurs numéros de téléphone
  * Permettre l'ajout de plusieurs adresses mél

  --------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_PRENOM = 30
#define MAX_NOM = 50
#define MAX_MEL = 20

char uuid()

main()
{

  /*
    Variables à initialiser tout de suite, hors de la boucle:

  'choix' servira pour déterminer si quitter le programme ou pas.
  'champ_vcard' détermine quel champs saisir, si enregistrer les informations dans une vcard, si quitter la saisie.



  */
  int choix, choix2, champ_vcard   ;
  char prenom[MAX_PRENOM], nom[MAX_NOM], mel[MAX_MEL] ;


  /*
    Initialisation des variables qui ne seront pas affectées avant d'être évaluées.
  */
  choix = 1       ;
  champ_vcard = 1 ;

  /*
    Initialisation des variables de la vcard, afin d'évalue si des informations ont déjà été saisies.
  */
  for (i = 0 ; i < MAX_PRENOM+1 ; i++)
  {
    prenom[i] = 0 ;
  }
  for (i = 0 ; i < MAX_NOM+1 ; i++)
  {
    nom[i] = 0 ;
  }

  printf("              vcard 0.1")
  printf("              ****************\n") ;
  printf("              ** ATTENTION! **\n") ;
  printf("              ** JE SUIS UN **\n") ;
  printf("              ** PROTOTYPE! **\n") ;
  printf("              **            **\n") ;
  printf("              ** JE NE SAIS **\n") ;
  printf("              **  PAS GÉRER **\n") ;
  printf("              **LES ESPACES!**\n") ;
  printf("              ****************\n") ;

  while (choix != 0)
  {
    printf("Menu principal\n")     ;
    printf("1 - Saisir une vcard") ;
    printf("0 - Quitter")          ;
    printf("Saisir le chiffre correspondant à votre choix") ;
    scanf("%d", &choix)            ;
    if (choix != 0)
    {
      while (champ_vcard != 0)
      {
        printf("Choisir quelles informations saisir\n") ;
        printf("9 - Pour enregistrer les informations   saisies dans \n")               ;
        printf("1 - Prénom et nom\n")       ;
        printf("2 - Numéro de téléphone\n") ;
        printf("3 - Adresse mél\n")         ;
        printf("4 - Adresse physique\n")    ;
        printf("5 - Anniversaire\n")        ;
        printf("6 - Notes\n")               ;
        printf("0 - Quitter\n") ;

        scanf("%d", &champ_vcard

        while (getchar!=\n)
        {
        switch champ_vcard
        {
        case 0 :
          printf("\n\n\n--- Sortie de la modalité d'édition ---\n\n\n") ;
          break ;
        case 1 :
          printf("Saisir le prénom") ;
          scanf("%s", prenom)     ;
          printf("Saisir le nom") ;
          scanf("%s", nom)        ;
          break ;
        case 2 :
          choix2 = O           ;
          i = 0                   ;
          while ((choix2 == O) & (i < 2))
          /*
          BUG:
          Non, cela ne peut pas marcher. Il faut faire un tableau et mettre les numéros de téléphone là-dedans.

          Il y a deux saisies de caractères à la suite, il faut vider le buffer de \n

          Et si l'utilisateur rentre 'f' comme 'choix2', on sort de la boucle. Il faut un test pour que les seules valeurs acceptées soient O et N.

          FEATURE:
          La valeur de test de i est plutôt à remplacer avec une constante qui sera définie dans l'en-tête du programme
          */
          {
            printf("Saisir le numéro de téléphone : ") ;
            scanf("%s", &numero_telephone1) ;
            printf("Voulez-vous saisir un autre numéro de téléphone? (O/N)") ;
            scanf("%c", &choix2) ;
            /*utile de faire un toupper ici*/
            if ((choix2 == O) & (i == 2))
            /*dans le if, la valeur de test de i est plutôt à remplacer avec une constante qui sera définie dans l'en-tête du programme*/
            {
              printf("La limite des numéros de téléphone prévus a été atteinte.") ;
            } ;
          } ;
          break ;

        case 3 :
        /* Idem comme pour le case 2, tout */
          choix2 = O ;
          i = 0      ;
          while ((choix2 == O) & (i < 2))
          {
            printf("Saisir l'adresse mél : ") ;
            scanf("%s", mel)             ;
            printf("Voulez-vous saisir un autre numéro de téléphone? (O/N)") ;
            scanf("%c", &choix2)         ;
            if ((choix2 == O) & (i ))
            {
              printf("La limite des adresses mél prévues a été atteinte.") ;

            }
          } ;
          break ;
        case 4 :
        /* Idem comme pour le case 2, tout */
          choix2 = O ;
          i = 0 ;
          while ((choix2 == O) & (i < 2))
          {
            printf("Comme je ne sais pas traiter les espaces rentre simplement quelque chose à éditer par la suite.\nSaisir l'adresse : ") ;
            scanf("%s", adresse) ;
            printf("Voulez-vous saisir une autre adresse ? (O/N)") ;
            scanf("%c", &choix2) ;
            if
          }
          break ;
        case default :
          printf("La valeur saisie n'est pas valide, merci d'en saisir une autre.\n") ;
          break ;
        }
      }
      }
    }
    else
      printf("Au revoir!");
  }

}
