#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/*Écrivez un programme C qui définit une structure pour représenter un livre avec les champs titre, auteur, et année.
 Écrivez une fonction qui retourne une variable de cette structure initialisée avec des valeurs données.
 Affichez les informations du livre dans le programme principal*/

 typedef struct {
char titre[30] ;
char auteur[30] ; 
int annee;  
 }livre;
 livre  cree(char titre[], char auteur[],int annee ){
 livre l;
    strcpy(l.titre, titre);   
    strcpy(l.auteur, auteur); 
    l.annee = annee;        
    return l;                 
}
 
int main (){
    livre p = cree("Boite", "Ahmed", 2004);

printf("%s",p.titre);
printf("%s",p.auteur);
printf("%d",p.annee);




    return 0;
}
 










