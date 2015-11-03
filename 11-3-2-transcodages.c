#include <stdio.h>
main()
{
  int offinito, caractere_n, code ;
  char caractere, code_l          ;

  offinito = 1                                ;
  while(offinito != 0)
  {
    printf("Choisir quelle opération accomplir :\n")                    ;
    printf("1 Pour avoir le code ASCII d'un caractère\n")               ;
    printf("2 Pour saisir un code et afficher l'ASCII correspondant\n") ;
    printf("0 Pour terminer\n")                                         ;

    scanf("%d", &offinito)                                              ;
    switch (offinito)
    {
      case 1 :
        printf("Saisir le caractère : ")                                  ;
        scanf("%c", &caractere)                                           ;
        caractere_n = caractere                                           ;
        printf("Le code ASCII de %c est %d.\n\n", caractere, caractere_n) ;
        break                                                             ;
      case 2 :
        printf("Saisir le code : ")                                               ;
        scanf("%d", &code)                                                        ;
        code_l = code                                                             ;
        printf("Le caractère ASCII correspondant à %d est %c.\n\n", code, code_l) ;
        break ;
      case 0 :
        printf("Ciao ciao!\n") ;
        break ;
    }
  }
}
