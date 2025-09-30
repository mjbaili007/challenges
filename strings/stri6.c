#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main (){

/*Écrivez un programme C qui lit une chaîne de caractères et un caractère,
 puis compte et affiche combien de fois le caractère apparaît dans la chaîne*/

char chaine[30];
char cract ;
int i , fuond = 0;
printf("  ecrivez  une chaine de caract ");
fgets(chaine,30 ,stdin);chaine[strcspn (chaine,"\n")]='\0';
printf("ecrivez une caracter ");
scanf("%c",&cract);
fuond =0;
for (i = 0 ; chaine[i] !='\0';i++ ){
    if (chaine[i] == cract)
    {
        fuond++;
        
    }
}
printf("Le caractère '%c' apparaît %d fois dans la chaîne %s " ,cract, fuond,chaine);





    return 0;
}