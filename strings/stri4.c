 
 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main (){
    
/*ecrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non.
 Affichez un message indiquant si les chaînes sont égales ou différentes*/

char livre1[30];
char livre2[30];

 printf("entrer le nom de livre 1 \n");fgets(livre1,30,stdin);livre1[strcspn(livre1,"\n") ]='\0';
 printf("entrer le nom de livre 2 \n");fgets(livre2,30,stdin);livre2[strcspn(livre2,"\n") ]='\0';
 system("cls");
 if (strcmp(livre1,livre2)==0){
    printf(" les chaînes sont égales");
 }

 else 
printf("les chaînes sont defferent");




    return 0;
}