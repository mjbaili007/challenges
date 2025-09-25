#include <stdio.h>
#include<stdlib.h>

int main(){
/*Écrivez un programme C pour évaluer la performance d'un employé en fonction de :

Score de performance (de 0 à 100)
Ancienneté (en années)
Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)
Les évaluations sont :

Score >= 90 et Ancienneté >= 5 ans : Excellente
Score >= 75 et Ancienneté >= 3 ans : Bonne
Score >= 50 et Ancienneté < 3 ans : Satisfaisante
Score < 50 : Insuffisante
Ajoutez un bonus si des récompenses ont été reçues : 10% pour une récompense, 20% pour deux ou plus*/
int score , ancien , n , chois ;

        printf("denner moi votre score de performance ");
        scanf("%d",&score);
        printf("combien d'annee tu travail dans cet entreprise  ");
        scanf("%d",&ancien);
           printf("combien de récompence recues 0 pour aucune, 1 pour une, 2 pour deux ou plus  ");
        scanf("%d",&n);
            if(score>=90 && ancien>=5){
                printf("Excellente\n");
            }

            else if ( score >= 75 && ancien >= 3){
                printf("Bonne\n");  
            }
            else if (score >= 50 && ancien < 3 ){
                printf("Satisfaisante\n");
            }
            else {
                printf("Insuffisante\n");
            }
        switch (chois)
        {
        case 0 :
            printf(" ne se trouve  pas des bnus  ");
            break;
            case 1 :
            printf(" vous avez une bunus de 10%% ");
            break;
             case 2 :
            printf(" vous avez une bunus de 20%% ");
            break;
        
        default: printf("ne se trouve cet chois ");
            break;
        }






    return 0 ;
}
