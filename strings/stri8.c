#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <ctype.h>
int main (){

    /*Écrivez un programme C qui lit une chaîne de caractères
    et convertit tous les caractères en minuscules. Affichez la chaîne modifiée.*/

    char  jour[30];
    int i;
    printf("donner moi un jour avec des letres majuscule\n");
    
    fgets(jour,30,stdin);jour[strcspn(jour,"\n")] ='\0';
    for (i=0;jour[i]!='\0';i++)
    {
        jour[i] += 32;
    }

    printf("le jour en muniscule est : %s",jour );





    return 0 ;
}