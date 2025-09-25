#include <stdio.h>
#include <string.h>

#define MAX 100     
#define TAILLE 50   



int main()
{
    char titre[MAX][TAILLE];
    char auteur[MAX][TAILLE];
    float prix[MAX];
    int quantite[MAX];
    int n = 0; 
    int choix;
    int nb, i  ;
    char titr[30];
    do {
        printf("\n MENU  des livres\n");
        printf("1. Ajoutter tous les livres\n");
        printf("2.Afficher tous les livres disponibles \n");
        printf("4. Rechercher un livre par son titre\n");
        printf("3. Afficher le nombre total de livres\n");
        printf("5.Supprimer un livre du stock\n");
        printf("6.Mettre à jour la quantité d'un livre\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);   

        switch (choix) 
        {
            case 1:


        printf("Combien de livres voulez-vous ajouter ? ");
        scanf("%d", &nb);

        for (i = 0; i < nb; i++) {
        printf("\n--- Livre %d ---\n", i + 1);

        printf("Titre : ");scanf(" %s", titre[i]); 
        
        while ((getchar()) != '\n');
        printf("Auteur : ");
        scanf(" %s", auteur[i]);
        printf("Prix : ");
        scanf("%f", &prix[i]);
        printf("Quantité : ");
        scanf("%d", &quantite[i]);
        n++;
        }
        break;
    



        case 2:

            if (n == 0) {
             printf("\nAucun livre en stock.\n");
            }
    

            printf("\n--- Liste des livres ---\n");
            for (int i = 0; i < n; i++) {
            printf("%d. %s | %s | %.2f DH | %d exemplaires\n",
             i + 1, titre[i], auteur[i], prix[i], quantite[i]);
            }
        break;

        case 3:
         int total = 0;
         for (int i = 0; i < n; i++) {
         total += quantite[i];
    }
         printf("\nNombre total de livres en stock : %d\n", total);
         break;
         case 4 :
         printf("entrer le titre de livre qui tu veux\n ");
         scanf("%s",titr);
         int found = 1;
         for (i=0;i < nb;i++){
         if(strcmp(titr,titre[i] )== 0){
            printf("le livre est trouver\n ");
            found = 0;

        }
        }
        if (found){

        printf("intovable\n");
        }
        break;
        case 5 : 
        printf("entrer le titre de livre qui tu veux supprimer\n ");
         scanf("%s",titr);
         found = 1;
         for (i=0;i < nb;i++){
            if(strcmp(titr,titre[i] )== 0){
                found = 0;
                break;
            }
        }
        for(i;i < nb ;i++){
            strcpy(titre[i],titre [i+1]);
            strcpy(auteur[i],auteur [i+1]);
            quantite[i]= quantite[i+1];
            prix[i]= prix[i+1];
            printf("le livre est supprimer\n");
            }
        
            if (found){

            printf("intovable\n");
             }
            break;
            case 6 :
            printf("entrer le titre de livre qui vous avez Mettre sa quantité \n ");
    
            scanf("%s",titr);
            found = 1;
            for (i=0;i < nb;i++)
            {
            if(strcmp(titr,titre[i] )== 0){
            found = 0; 
            printf("entrer la nouvelle quantite:");
            scanf("%d",&quantite[i]);
            break;
            }
            }
            if(found)
            printf("echec");
            break;

            case 0: printf("Au revoir !\n"); break;
            } 
            }while (choix != 0);

return 0;
}

 

