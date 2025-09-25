#include <stdio.h>
#include<stdlib.h>

int main(){
    int c ;

printf("denner moi la temperatur de l'eau ");
scanf("%d",&c);
if (c<0){
    printf(" l'etat de l'eau est solide ");
}
else if( c >= 0 && c <=100) {
    printf("l'etat de l'eau est liquide ");

}
else {
printf("l'etat de l'eau est gase ");

}












    return 0;
}