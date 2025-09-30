#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
int main (){

/*Écrivez un programme C qui lit une chaîne de caractères
 et convertit tous les caractères en majuscules.
 Affichez la chaîne modifiée.*/

char chaine[30]; 
int i ;
printf("ecrivez une chain de caracter ");
fgets(chaine , 30 , stdin); chaine[strcspn(chaine , "\n")]='\0';

    for ( i=0 ;chaine[i] != '\0';i++)
    {
        chaine[i] -= 32;
    }

printf("la chaine en majuscule est %s",chaine);







return 0 ;
}