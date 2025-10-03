#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
# define max 200

int nombre_animaux =20;
typedef struct {
    char nom[max];
    char espece[max];
    char habitat[max];
    float poids;
    int age;
    int id ;
} animal;


//==========ajout simple
void ajout_simple(animal Animaux[max]){
 if (nombre_animaux >= max) {
    printf("Capacité maximale atteinte\n");
    return;
}
     Animaux[nombre_animaux].id=2000+nombre_animaux;
    printf("ecriver les information de cet animal\n");
    do{printf("le nom :");
    scanf("%s",Animaux[nombre_animaux].nom);
    }while(strlen(Animaux[nombre_animaux].nom)<3);

    printf("\nl'espèce :");
    scanf("%s",Animaux[nombre_animaux].espece);
    printf("\nl'habitat :");
    scanf("%s",Animaux[nombre_animaux].habitat);
    printf("\nle poids :");
    scanf("%f",&Animaux[nombre_animaux]. poids);
    do{
    printf("\nl'age :");
    scanf("%d",&Animaux[nombre_animaux]. age);
    }while(Animaux[nombre_animaux]. age<1);
    printf("Animal ajouté avec l'ID : %d\n", Animaux[nombre_animaux].id);
    printf("\n ajouter avec succes\n") ;
    nombre_animaux ++;
}
//=========ajout multiple
void ajout_multiple(animal Animaux[max]){
      int nombre_ajouter ;
      int i;
      printf("combien de nombre d'animaux qui tu veux ajouter\n");
      scanf("%d",&nombre_ajouter);
      if(nombre_ajouter + nombre_animaux > max){
        printf("la liste est plein , ne peut pas ajouter cet nombre %d ",nombre_ajouter);
      }
      for(i=0;i<nombre_ajouter;i++){
        ajout_simple(Animaux);
      }

}
//===========================================ajouter================================================
void ajouter (animal Animaux[]){

 int choix;
      do {
        printf("==================================ajouter======================================\n");
        printf("1-ajouter un seul animal\n");
        printf("2-ajouter plusieurs animaux\n");
        printf("3-autre choix\n");
        printf("votre choix !!\n");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1 :ajout_simple(Animaux);
            break;
        case 2 :ajout_multiple(Animaux);
            break;
        case 3:
        printf("au revoir\n");
            break;
        default:
        printf("cet choix invalide\n");
            break;
        }

      } while (choix!=3);

}
//============nom de z a A
void trier_nomdeA (animal animaux[], int nombre_animaux ){
    animal temp;
    int i,j;

    for (i=0;i<nombre_animaux -1;i++){
        for(j=0;j<nombre_animaux-i-1;j++){

            if( tolower(animaux[j].nom[0]) > tolower (animaux[j+1].nom[0]) ){
                 temp = animaux[j];
                animaux[j]=animaux[j+1];
                animaux[j+1]=temp;
            }

        }

    }
       printf("___________________________tri par nom_________________________\n");
    for(i=0;i<nombre_animaux;i++){
         printf("nom: %-5s  age:%-3d ans\n", animaux[i].nom, animaux[i].age);
    }
}
//============nom de A a z
void trier_nomdeZ(animal animaux[], int nombre_animaux ){
    animal temp;
    int i,j;

    for (i=0;i<nombre_animaux -1;i++){
        for(j=0;j<nombre_animaux-i-1;j++){

            if( tolower(animaux[j].nom[0]) < tolower (animaux[j+1].nom[0]) ){
                 temp = animaux[j];
                animaux[j]=animaux[j+1];
                animaux[j+1]=temp;
            }

        }

    }
       printf("___________________________tri par nom_________________________\n");
    for(i=0;i<nombre_animaux;i++){
         printf("nom: %-5s  age:%-3d ans\n", animaux[i].nom, animaux[i].age);
    }
}
//=====================================affichage par nom ===========================================
void trier_nom(animal animaux[], int nombre_animaux){
    int choix ;
    do{printf("_____________________________________trier par nom ______________________\n");
       printf("1-treier les noms de A et Z\n");
       printf("2-treier les noms de Z et A\n");
       printf("0-reutour\n");
       printf("votre choix: ");
       scanf("%d",&choix);
           switch (choix){
           case 1:
                trier_nomdeA (animaux,nombre_animaux);
           break;
           case 2:
                trier_nomdeZ (animaux,nombre_animaux);
           break;
           case 0:
                 printf("routeur a list principal\n ");
           break;
          default:
                printf("Choix invalide\n");
        }
    } while (choix != 0);
}
//============afficher par l'age décroi
void trier_agedecroi(animal animaux[], int nombre_animaux ){
    animal temp;
    int i,j;

    for (i=0;i<nombre_animaux ;i++){
        for(j=0;j<nombre_animaux - i -1;j++){

            if( animaux[j].age< animaux[j+1].age){
                 temp = animaux[j];
                animaux[j]=animaux[j+1];
                animaux[j+1]=temp;
            }

        }

    }
       printf("___________________________tri par age d'ecroi_________________________\n");
    for(int i=0;i<nombre_animaux;i++){
         printf("nom: %-5s  age:%-3d ans\n", animaux[i].nom, animaux[i].age);
    }
    }
//============afficher par age crois
void trier_agecrois(animal animaux[], int nombre_animaux ){
    animal temp;
    int i,j;

    for (i=0;i<nombre_animaux -1;i++){
        for(j=0;j<nombre_animaux-i-1;j++){

            if( animaux[j].age > animaux[j+1].age){
                 temp = animaux[j];
                animaux[j]=animaux[j+1];
                animaux[j+1]=temp;
            }

        }

    }
       printf("___________________________tri par age crois_________________________\n");
    for(int i=0;i<nombre_animaux;i++){
         printf("nom: %-5s  age:%-3d ans\n", animaux[i].nom, animaux[i].age);
    }
    }
//=====================================afficher par l'age============================================
void trier_age (animal Animaux[],int nombre_animaux){
    int choix ;
    do {printf("___________________________tri par age_______________\n");
       printf("1- tri par age decroissant\n");
       printf("2- tri par age croissant \n");
       printf("3- roteur\n" );
       printf("votre choix:");
       scanf("%d",&choix);
       switch (choix){
           case 1:
           trier_agedecroi(Animaux,nombre_animaux);
           break;
           case 2:
           trier_agecrois(Animaux, nombre_animaux);
           break;
           case 3:
                 printf("routeur a list principal\n ");
           break;
          default:
                printf("Choix invalide\n");
        }
    } while (choix != 3);
}
//===============================affichage list complet==============================================
void afficher_list (animal Animaux[]){

   if(nombre_animaux == 0){
       printf("list des animaux est vide ");
   }
   else {
      printf("Nom       | Espèce     | Habitat    | Poids (kg) | Âge | ID\n");
printf("______________________________________________________________________________\n");
for (int i = 0; i < nombre_animaux; i++) {
    printf("%-10s %-12s %-12s %-10.2f %-4d %-6d\n",
           Animaux[i].nom,
           Animaux[i].espece,
           Animaux[i].habitat,
           Animaux[i].poids,
           Animaux[i].age,
           Animaux[i].id);
}
   }




}
//===============================affichage habitat ==================================================
void afficher_habitat(animal Animaux[], int nombre_animaux) {
    char habitat_recherche[max];
    printf(" Afficher les animaux selon habitat\n");
    printf("Entrez l'habitat à rechercher : ");
    scanf("%s", habitat_recherche);
    int trouve = 0;
    for (int i = 0; i < nombre_animaux; i++) {
        if (strcmpi(habitat_recherche, Animaux[i].habitat) == 0) {
            printf("%-10s %-12s %-12s %-10.2f %-4d %-6d\n",
                   Animaux[i].nom,
                   Animaux[i].espece,
                   Animaux[i].habitat,
                   Animaux[i].poids,
                   Animaux[i].age,
                   Animaux[i].id);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec l'habitat \"%s\".\n", habitat_recherche);
    }
}

//==================================affichage
void afficher(animal Animaux[] ){
    int choix;
  printf("==============================affichage des animaux==========================================\n");
  do{printf("1- afficher la liste complète\n");
     printf("2- trier par nom\n");
     printf("3- Trier par âge\n");
     printf("4- Afficher uniquement les animaux dun habitat\n");
     printf("0- routour\n");
     printf("votre choix: ");
     scanf("%d",&choix);
     switch(choix){
        case 1 :afficher_list(Animaux);
        break;
        case 2 : trier_nom(Animaux, nombre_animaux);
        break ;
        case 3:  trier_age(Animaux,nombre_animaux);
        break;
        case 4:  afficher_habitat(Animaux,nombre_animaux);
        break;
        case 0:
        printf("routeur a list principal\n ");
        break;
        default:
            printf("choix invalidable\n");
     }
  } while(choix!=0);
}
//============Modifier age
void modifier_age (animal Animaux[],int nombre_animaux ){
    int id_chercher;
    printf("Entrer l'ID de l'animal que vous voulez modifier : ");
    scanf(" %d", &id_chercher);

    int trouve = 0;

    for (int i = 0; i < nombre_animaux; i++) {
        if (Animaux[i].id == id_chercher) {
            printf("Animal trouvé : %s (%s),age : %d\n",
                   Animaux[i].nom,
                   Animaux[i].espece,
                   Animaux[i].age);

            do {printf("Entrer le nouvel age : ");
            scanf("%d",&Animaux[i].age);
            }while(Animaux[nombre_animaux]. age<1);
            printf("age modifié avec succès pour l'animal %s\n", Animaux[i].nom);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec id %d\n", id_chercher);
    }
}
//============modifier l'habitat
void modifier_habitat(animal Animaux[], int nombre_animaux) {
    int id_chercher;
    printf("Entrer l'ID de l'animal que vous voulez modifier : ");
    scanf(" %d", &id_chercher);

    int trouve = 0;

    for (int i = 0; i < nombre_animaux; i++) {
        if (Animaux[i].id == id_chercher) {
            printf("Animal trouvé : %s (%s), Habitat: %s\n",
                   Animaux[i].nom,
                   Animaux[i].espece,
                   Animaux[i].habitat);

            printf("Entrer le nouvel habitat : ");
            scanf("%s", Animaux[i].habitat);

            printf("Habitat modifié avec succès pour l'animal %s\n", Animaux[i].nom);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec id %d\n", id_chercher);
    }
}
//===================================modification====================================================
void modifier(animal Animaux[] ){
    int choix1;
    do {
        printf("Que voulez-vous modifier ?");
        printf("\n1-l’habitat");
        printf("\n2-l’âge");
        printf("\n3-retour");
        printf("\nvotre choix : ");
        scanf("%d",&choix1);
        while (choix1 < 1 || choix1 > 3);

        switch(choix1){
            case 1:
                modifier_habitat(Animaux, nombre_animaux);
                break;
            case 2:
                modifier_age(Animaux, nombre_animaux);
                break;
            case 3:
                break;
            default:
                printf("Choix invalide\n");
        }
    } while(choix1 != 3);
}
//===============================recherche par id
void rechercher_id (animal Animaux[], int nombre_animaux ){
 int id_recherche;
 printf("entrer l'id de l'animal qui tu veux rechrcher");
 scanf("%d",&id_recherche);
  int trouve =0;
   for (int i = 0; i < nombre_animaux; i++) {
        if (Animaux[i].id == id_recherche) {
            printf("Animal trouvé  : nom: (%s) espece  :  (%s), Habitat: %s , age : %d\n",
                   Animaux[i].nom,
                   Animaux[i].espece,
                   Animaux[i].habitat,
                   Animaux[i].age);
                   trouve =1;
                   break;
                    }

   }
   if (!trouve){
     printf("Aucun animal trouvé avec id %d\n",id_recherche);
      }
}
//===============================rechrche par nom
void rechercher_nom (animal Animaux[], int nombre_animaux) {
    char nom_recherche[max];
    printf("Entrer le nom de l'animal que tu veux rechercher: ");
    scanf("%s", nom_recherche);

    int trouve = 0;

    for (int i = 0; i < nombre_animaux; i++) {
        if (strcmpi(Animaux[i].nom, nom_recherche) == 0) {
            printf("Animal trouvé : id: %d, espece: %s, Habitat: %s, age: %d\n",
                   Animaux[i].id,
                   Animaux[i].espece,
                   Animaux[i].habitat,
                   Animaux[i].age);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec le nom %s\n", nom_recherche);
    }
}
//=================================rechrche espese
void rechercher_espece(animal Animaux[], int nombre_animaux) {
    char espece_recherche[max];
    printf("Entrer l'espece de l'animal que tu veux rechercher: ");
    scanf("%s", espece_recherche);

    int trouve = 0;

    for (int i = 0; i < nombre_animaux; i++) {
        if (strcasecmp(Animaux[i].espece, espece_recherche) == 0) {
            printf("Animal trouvé : id: %d, nom: %s, Habitat: %s, age: %d\n",
                   Animaux[i].id,
                   Animaux[i].nom,
                   Animaux[i].habitat,
                   Animaux[i].age);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec l'espece %s\n", espece_recherche);
    }
}
//======================================Recherche===========================================
void rechercher (animal  Animaux[] ){
    int selction;
 do{printf("===================recherche ====================\n");
    printf("comment tu veux rechrcher\n");
    printf("1- recherche par id\n");
    printf("2- recherche par un nom\n ");
    printf("3- recherche par espese\n ");
    printf("0 - retour\n");
    printf ("votre choix ");
    scanf("%d",&selction);
     switch (selction)
     {
     case 1:
       rechercher_id (Animaux,nombre_animaux);
     break;
     case 2:
       rechercher_nom (Animaux,nombre_animaux);
     break;
     case 3:
       rechercher_espece (Animaux,nombre_animaux);
     break;
     default:
     break;
     }

   }while(selction != 0);
}
//=======================supprimer==========================
int supprimer(animal Animaux[], int nombre_animaux) {
    animal temp;
    int id_supprimer;
    int choix;
    int trouve = 0;

    printf("Entrer l'id de l'animal à supprimer : ");
    scanf("%d", &id_supprimer);

    for (int i = 0; i < nombre_animaux; i++) {
        if (Animaux[i].id == id_supprimer) {
            printf("Animal trouvé : nom: %s, espece: %s, habitat: %s, age: %d\n",
                   Animaux[i].nom,
                   Animaux[i].espece,
                   Animaux[i].habitat,
                   Animaux[i].age);

            trouve = 1;

            printf("\nVoulez-vous vraiment le supprimer ?\n");
            printf("1 - Oui\n2 - Non\nVotre choix : ");
            scanf("%d", &choix);

            if (choix == 1) {

                for (int j = i; j < nombre_animaux; j++) {
                        temp = Animaux[j];
                        Animaux[j] = Animaux[j+1];
                        Animaux[j+1] = temp;
                }
                nombre_animaux--;
                printf("Animal supprimé avec succès.\n");
            } else {
                printf("Suppression annulée.\n");
            }
            break;
        }
    }

    if (!trouve) {
        printf("Aucun animal trouvé avec id %d\n", id_supprimer);
    }

    return nombre_animaux;
}
//=====================statistique
void statistique (animal Animaux[],int nombre_animaux){
    printf("==============les statistiques de zoo===============\n");
    printf("le nombre total d'animaux est %d\n",nombre_animaux);
    float somme_age = 0;
    for (int i = 0; i < nombre_animaux; i++) {
    somme_age =  somme_age + Animaux[i].age;
    }
    float age_moyen = 0;
    if (nombre_animaux > 0) {
    age_moyen = somme_age / nombre_animaux;
    }
    printf("Âge moyen des animaux : %.2f ans\n", age_moyen);
    int min = Animaux[0].age ;
    for (int i=1;i<nombre_animaux;i++){
            if (min> Animaux[i].age)
                min=Animaux[i].age;
    }
    printf ("l'animal le plus petite a %d ans\n",min);
    int agemax =0;
    for(int i=0;i<nombre_animaux;i++){
        if (agemax <Animaux[i].age ){
            agemax=Animaux[i].age;
        }
    }
    printf("l'animal le plus grand a %d ans\n",agemax);

    //=============espese



   char espese_unique[nombre_animaux][20];
   int compte[nombre_animaux];
   int nb_espese = 0;
   int max_espese = 0;

    for (int i = 0; i < nombre_animaux; i++) {
    int existe =0;
    for (int j = 0; j < nb_espese; j++) {
        if (strcasecmp(Animaux[i].espece, espese_unique[j]) == 0) {
            existe = j;
            break;
        }
    }
    if (existe != 0) {
        compte[existe]++;
    }
    else {

        strcpy(espese_unique[nb_espese], Animaux[i].espece);
        compte[nb_espese] = 1;
        nb_espese++;
    }
    }
    for (int i = 0; i< nb_espese; i++) {
    if (compte[i] > max_espese) {
        max_espese = compte[i];
    }
    }
    printf("Espèces les plus représentées (%d animaux):\n", max_espese);
    for (int i = 0; i < nb_espese; i++) {
    if (compte[i] == max_espese) {
        printf("- %s\n", espese_unique[i]);
    }
    }






}

int main (){
    //=======================================list des animaux=========================================
    animal Animaux[max]={
    {"Rex", "Chien", "Maison", 30, 5, 2000},
    {"Mina", "Chat", "Maison", 5, 3, 2001},
    {"Boby", "Chien", "Jardin", 20, 2, 2002},
    {"Luna", "Chat", "Maison", 6, 4, 2003},
    {"Coco", "Perroquet", "Cage", 1, 7, 2004},
    {"Simba", "Lion", "Savane", 150, 6,2005},
    {"Tigrou", "Tigre", "Jungle", 200, 8, 2006},
    {"Nemo", "Poisson", "Aquarium", 1, 1, 2007},
    {"Polo", "Cheval", "Ferme", 400, 10,2008},
    {"Kiki", "Singe", "Forêt", 35, 5, 2009},
    {"Max", "Chien", "Maison", 25, 9, 2010},
    {"Bella", "Chat", "Maison", 4, 2, 2011},
    {"Rocky", "Chien", "Maison", 28, 4, 2012},
    {"Nala", "Lionne", "Savane", 140, 5, 2013},
    {"Oscar", "Chien", "Jardin", 22, 6, 2014},
    {"Milo", "Chat", "Maison", 3, 1,2015},
    {"Zazu", "Oiseau", "Savane", 2, 3, 2016},
    {"Jack", "Chien", "Maison", 30, 7,2017},
    {"Tom", "Chat", "Maison", 5, 2, 2018},
    {"Jerry", "Souris", "Maison", 1, 1,2019}
};

    int choix;
do {
    printf("====================================== MENU ======================================\n");
    printf("1 - Ajouter un animal\n");
    printf("2 - Afficher les animaux\n");
    printf("3 - Modifier un animal\n");
    printf("4 - Rechercher un animal\n");
    printf("5 - Supprimer un animal\n");
    printf("6 - Statistiques\n");
    printf("0 - Quitter\n");
    printf("==================================================================================\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1: ajouter(Animaux); break;
        case 2: afficher(Animaux); break;
        case 3: modifier(Animaux); break;
        case 4: rechercher(Animaux); break;
        case 5: printf("%d",supprimer( Animaux,nombre_animaux));
             break;
        case 6:   statistique(Animaux,nombre_animaux) ; break;
        case 0: printf("Au revoir !\n"); break;
        default: printf("Choix invalide\n"); break;
    }

} while (choix != 0);


    return 0;
}
