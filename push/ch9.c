#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Challenge 6 : Positif, Négatif ou Nul
Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro,
 alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro*/
 int n ;
printf("entrer un nombre n\n");
scanf("%d",&n);
   if(n==0){
    printf("le nombre qui entrer est nul");
}
   else if (n < 0){
    printf("le nombre qui entrer est negatif ");
}
   else {
printf("le nombre qui entrer est positif");

}













 return 0;
}