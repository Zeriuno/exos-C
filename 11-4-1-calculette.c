/*Exercice fait par M. Léry*/

#include <stdio.h>
main()
{
  int somme = 0, chiffre, nb=0                 ;
  char car, signe = '+'                        ;

  printf("Écrivez l'opération à effectuer : ") ;
  car = ' '                                    ;
  while(car != '\n')
  {
    scanf("%c", &car)                          ;
    switch(car)
      {case '+': case '-': case '\n':
        if(signe =='+')
          {
            somme += nb                        ;
          }
        else
          {
            somme -= nb                        ;
          }
          signe = car                          ;
          nb =0                                ;
        break;

        case '0' :
        case '1' :
        case '2' :
        case '3' :
        case '4' :
        case '5' :
        case '6' :
        case '7' :
        case '8' :
        case '9' :
          chiffre = car - 48                   ;
          nb = (nb * 10) + chiffre             ;
          break                                ;
      }
  }
  printf("Le résultat est %d\n", somme)        ;
}
