#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define max 30

    /*Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs nom,
     prenom, et un tableau d'entiers pour stocker les notes.
     Assignez des valeurs aux champs et aux notes, puis affichez les informations de l'étudiant.*/
typedef struct{
char nom[30];
char prenom[30];
float note[5];
} persson ;

int main (){


persson etudiant[30] ;
strcpy (etudiant[0].nom,"mari");
strcpy (etudiant[0].prenom,"jbaili");
etudiant[0].note[0]= 11;
etudiant[0].note[1]= 13;
etudiant[0].note[2]= 20;
etudiant[0].note[3]= 19;
etudiant[0].note[4]= 18;

printf(" %s",etudiant[0].nom);
printf(" %s",etudiant[0].prenom);
for (int i=0;i<5;i++){
printf("\n note \n %.2f" ,etudiant[0].note[i]);
}

return 0 ;
}