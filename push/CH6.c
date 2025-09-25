#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int a , f , in , s1,s2,s3 ;
float result ;
printf(" entrer la note de Arabe \n ");
scanf("%d",&a);
s1=a*2;
printf(" entrer la note de francais\n ");
scanf("%d",&f);
s2=f*3;
printf(" entrer la note de l'informatique \n ");
scanf("%d",&in);
s3=in*5;
result=(s1+s3+s2)/10;
printf("la moyen de pendere est %.2f",result);















    return 0 ;
}