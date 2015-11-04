#include <stdio.h>
#include <string.h>

main()
{
  int secondes, minutes, heures, jours, mois, mois_court, annees, bissextile ;
  char mois_nom[9]                                                           ;


/*
  Comme nous avons utilisé 'do while', l'initialisation n'est pas nécessaire.
  Avec une boucle while l'initialisation est nécessaire.
*/
  secondes = 100 ;
  minutes  = 100 ;
  heures   = 100 ;
  jours    = 100 ;
  mois     = 100 ;
  annees   =   0 ;

  do
  {
    printf("Saisir l'année : ") ;
    scanf("%d", &annees)        ;
    if (annees == 0)
      printf("Non, l'année 0 n'existe pas dans le calendrier chrétien.\n") ;
  }
  while (annees == 0) ;

  if (((annees % 4 == 0) && (annees % 100 !=0)) || (annees % 400 == 0))
    bissextile = 0 ;
  else
    bissextile = 1 ;

  do
  {
    printf("Saisir les heures (0-23) : ") ;
    scanf("%d", &heures)                  ;
    if (heures > 23)
    {
      if (heures == 24)
        printf("Ah bin non! Les heures sont bien 24, mais on commence à compter de 0. On a dit que 23 est donc le maximum.\n") ;
      else
        printf("PAS BON.\n")     ;
    }
  }
  while (!(23 > heures >= 0))    ;

  do
  {
    printf("Saisir le mois (1-12) : ") ;
    scanf("%d", &mois)                 ;
    if (mois > 12)
    printf("PAS BON.\n")               ;
  }
  while (!(12 > mois > 0))             ;

  switch (mois)
  {
    case 1  :
    case 3  :
    case 5  :
    case 7  :
    case 8  :
    case 10 :
    case 12 :
      mois_court = 1                        ;
      break                                 ;
    case 4  :
    case 6  :
    case 9  :
    case 11 :
      mois_court = 0                        ;
      break                                 ;
    case 2 :
      mois_court = -1                       ;
      break                                 ;
  }

  if (mois_court != 0)
  {
    switch (mois)
      {
      case 2  : strncopy(mois_nom, "Février")   ;
      break                                     ;
      case 4  : strncopy(mois_nom, "Avril")     ;
      break                                     ;
      case 6  : strncopy(mois_nom, "Juin")      ;
      break                                     ;
      case 9  : strncopy(mois_nom, "Septembre") ;
      break                                     ;
      case 11 : strncopy(mois_nom, "Décembre")  ;
      break                                     ;
      }
  }
  do
  {
    printf("Saisir les minutes (0-59) : ") ;
    scanf("%d", &minutes)                  ;
    if (minutes > 59)
    {
      if (minutes == 60)
        printf("Ah bin non! Les minutes sont bien 60, mais on commence à compter de 0. On a dit que 59 est donc le maximum.\n") ;
      else
        printf("PAS BON.\n") ;
    }
  }
  while (minutes > 59)       ;

  do
  {
    printf("Saisir les secondes (0-59) : ") ;
    scanf("%d", &secondes)                  ;
    if (secondes > 59)
    {
      if (secondes == 60)
        printf("Ah bin non! Les secondes sont bien 60, mais on commence à compter de 0. On a dit que 59 est donc le maximum.\n") ;
      else
        printf("PAS BON.\n") ;
    }
  }
  while (secondes > 59)      ;

  while (secondes > 59) ;
  {
  secondes = secondes++ ;
  if
  }
}
