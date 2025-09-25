#include <stdio.h>
#include<stdlib.h>

int main(){

/*Écrivez un programme C pour calculer la prime d'assurance d'une voiture en fonction de :

Âge du conducteur (en années)
Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale)
Nombre d'accidents au cours des 5 dernières années
Les règles de calcul sont :

Conducteur de moins de 25 ans : Prime de base * 1.5
Conducteur de 25 à 65 ans : Prime de base
Conducteur de plus de 65 ans : Prime de base * 1.2
Type de voiture sportive : Prime * 2
Type de voiture utilitaire : Prime * 1.2
Type de voiture familiale : Prime * 1.1
Nombre d'accidents > 1 : Ajoutez 30% à la prime*/
    
    int  chois ,prime, age , n  ;
/*on supp que prime de base est 500dh */
    printf(" entrer l'age de conducteur ");
    scanf("%d",&age);
    if (age < 25 ){
        prime = 500 *1.5;
        
    }
    else if (age<=65 && age >=25){
    prime = 500;

    }
    else {
        prime =500*1.2;
        
    }
    printf("denner moi le type de voiture:1 pour sportive\n, 2 pour utilitaire\n 3 pour familiale\n");
    scanf("%d",&chois);

    switch (chois)
    {
    case 1:
        prime *= 2 ;
        
        break;
    case 2:
        prime = prime * 1.2;
        break;
    case 3 :
        prime*=1.1;
      break;
    default:
        printf("!!!!!!");
        break;
}
    printf("entrer le Nombre d'accidents au cours des 5 dernières années ");
    scanf("%d",&n);
        if (n> 1){
        prime *=1.3;
    }
    printf("le prime est %d ", prime );















return 0 ;
}