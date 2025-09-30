#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


/*Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur et largeur.
 Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire du rectangle.
 Affichez l'aire dans le programme principal*/
 
 typedef struct {
    float largeur ;
    float langeur ; 
 } rectangle;

void produit(rectangle aire){
    float p = aire.langeur * aire.largeur ;
    printf("le produit de la rectangle %f ",p);
}

int main (){

rectangle aire;

aire.largeur = 15.5;
aire.langeur = 17.8;
produit(aire);


    return 0;
}