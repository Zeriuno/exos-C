/*------------------------------------
Code de M. Léry, tous droits réservés.

------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    char uuid[100];
    FILE *f1 ;

    f1 = popen("uuidgen", "r");
    if(f1 == NULL)
    {
      printf("Erreur de popen\n");
    }
    else
    {
     fscanf(f1,"%s",uuid);
     printf("uuid=%s\n",uuid);
    pclose(f1);
    }
}
