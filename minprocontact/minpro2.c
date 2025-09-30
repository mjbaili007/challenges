
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>


#define max 40 


/*Créer un programme en C pour gérer un carnet de contacts. Le programme doit permettre à l'utilisateur d'ajouter,
 de rechercher, de modifier, de supprimer et d'afficher des contacts.
 Chaque contact doit contenir un nom, un numéro de téléphone et une adresse e-mail.*/
int na ,nb=10 ;

 typedef struct
{
  char nom[max];
  char nume[max];
  char email[max] ;
} contact;
//======================fonction d'ajout ======================
int recherche_contact (contact pers[],char nomRecherche[50]){
    for (int i = 0; i < nb; i++) {
        if (strcmp(nomRecherche, pers[i].nom) == 0) {
            return i;
        }
    }
    return -1;
}
//====================list de contact===================
   contact pers[]={
                      {"Mari","0654410748","jbailimq@gmail.com"},
                       {"saloma","0655484854","jaadoni78@gmail.com"},
                       {"ahmed","068748484","ahmed45@gmail.com"},
                       {"sanaa","068486486","sanaa78@gmail.com"},
                       {"kawtar","0632135145","kawter45@gmail.com"},
                       {"farida","0654531886","farida121@gmail.com"},
                       {"ikbal","0615135135","ikbal35@gmail.com"},
                       {"salma","0635184484","salma1548@gmail.com"},
                       {"hasna","0684661455","hasna14@gmail.com"},
                       {"oussama","0651545214","oussama54@gmail.com"}
                          };
//====================l'ajouter====================
void ajouter( contact pers[]){
        int na ;
        printf("\n+++++++++++++++ Ajouter une contact+++++++++++++++\n");
        printf("cobien de contact tu doit ajouter ");
        scanf("%d",&na);
        if (na + nb >max){
            printf("le carnet est plein\n ");
        }

        else {
        printf("ecriver les information de contact que tu dois ajoutrer\n ");
        for( int i=0;i<na;i++){
        printf("nom : ");
        scanf("  %s",pers[nb].nom);
        printf("email :");
        scanf("%s",pers[nb].email);
        printf("numeru de tele : ");
        scanf("%s",pers[nb].nume );
        nb ++;
             }
    }

}

//+================rechercher======================
void rechercher(contact pers[]) {
    char nomRecherche[50];
    printf("Entrez le nom du contact à rechercher : ");
    scanf("%s", nomRecherche); 

    int trouve = 0;

    for (int i = 0; i < nb; i++) {
        if (strcmp(nomRecherche, pers[i].nom) == 0) {
            printf("Contact trouvé !\n");
            printf("Nom : %s\n", pers[i].nom);
            printf("Téléphone : %s\n", pers[i].nume);
            printf("Email : %s\n", pers[i].email);
            trouve = 1;
            break; 
        }
    }

    if (!trouve) {
        printf("Contact introuvable.\n");
    }
}
//===================modifier=========================
void modifie(contact pers[]){
    char  nomRecherche[50];
      printf("Entrez le nom du contact à rechercher : ");
      scanf("%s", nomRecherche);
      int index = recherche_contact(pers,  nomRecherche);  
      if(index!=-1) {
            printf("Nom : %s\n", pers[index].nom);
            printf("Téléphone : %s\n", pers[index].nume);
            printf("Email : %s\n", pers[index].email);
            
           printf("Entrez le nouveau nom : ");
           scanf("%s", pers[index].nom);
           printf("Entrez le nouveau téléphone : ");
           scanf("%s", pers[index].nume);
           printf("Entrez le nouvel email : ");
           scanf("%s",pers[index].email);

           printf("Contact modifié avec succès.\n");
      }  
      else {
             printf("Contact introuvable.\n");
      }

}
//======================afficher=======================
void afficher(contact pers[]){
    if (nb==0){
        printf("ne se trouve aucun contact");
    }
    else{
         printf("=====================les contacs===================\n");
         for (int i = 0; i < nb; i++) {
             printf("Nom:%-7s, Tel: %-12s, Email: %-20s\n", pers[i].nom, pers[i].nume, pers[i].email);
        }
    }
}
//=====================supprimer========================
void supprimer (contact pers[]){
      char  nomRecherche[50];
      int i;
      printf("Entrez le nom du contact à supprimer : ");
      scanf("%s", nomRecherche);
      int index = recherche_contact(pers,  nomRecherche);  
      if(index!=-1) {
         printf("Nom : %s\n", pers[index].nom);
         printf("Téléphone : %s\n", pers[index].nume);
         printf("Email : %s\n", pers[index].email);
         
           for(i=index;i<nb-1;i++){
            strcpy(pers[i].nom,pers[i+1].nom);
            strcpy(pers[i].nume,pers[i+1].nume);
            strcpy(pers[i].email,pers[i+1].email);
           }
             nb--;
            printf("le contact est supprimer");
      }
          else {
             printf("Contact introuvable.\n");
      }
    
}


int main (){
 int choix;
do{printf("=======================carnet de contact========================\n");
printf("1- acjouter des contact\n");
printf("2- rechercher des conctact\n");
printf("3- modifie des conctact\n");
printf("4- supprimer des conctac\n");
printf("5- afficher des conctact\n");
printf("0. Quitter\n");
printf("Votre choix : ");
scanf("%d", &choix); 
switch (choix)
{
case 1 : ajouter(pers);
printf(" ajouter avec succes\n");
    break;
case 2 :rechercher(pers);
break;
case 3 :modifie(pers) ;
break;
case 4 :supprimer(pers) ;
break;
case 5: afficher( pers)  ;
break ;
case 0 :  printf("Au revoir !\n"); break;
default: printf("entrer une autre chifre ! \n");
    break;
}
}while(choix!=0);

    return 0;
}














