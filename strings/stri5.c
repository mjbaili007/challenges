#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    /*Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée.
     Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba"*/

    char jour[30];
    int i  ;
    
    printf("quelle est la date d'aujourduit \n");
    fgets(jour,sizeof(jour),stdin);
    jour[strcspn(jour,"\n") ]='\0';
    int longeur = strlen(jour);
    for (i=longeur - 1;i>=0 ; i--){
        
        printf("%c",jour[i]);
     
        }

    return 0;
}