#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define max 50 
int main (){

/*Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne.
 Affichez la chaîne résultante.*/

char nom[max];
char prenom[max];
printf("entrer votre nom\n ");fgets(nom,sizeof(nom),stdin);nom[strcspn(nom,"\n")] = '\0';
printf("entrer votre prenom \n");fgets(prenom,max,stdin);prenom[strcspn(prenom,"\n")]='\0';

strcat(prenom,nom);
puts(prenom);
    return 0 ;
}