#include<stdio.h>
float c1,c2,c3;
int main(){
printf("Nous allons determiner la nature de votre triangle\n");
do{
   do{
    printf("entrez une mesure de votre triangle\n");
    scanf("%f",&c1);
    printf("entrez une autre mesure de votre triangle\n");
    scanf("%f",&c2);
    printf("entrez la dernière mesure de votre triangle\n");
    scanf("%f",&c3);
    }while(c1<=0 && c2<=0 && c3<=0);
    if (c1>=c2+c3 && c2>=c1+c3 && c3>=c1+c2){
    printf("Ces mesures ne peuvent pas former un triangle\n");
    }
   }while(c1>=c2+c3 && c2>=c1+c3 && c3>=c1+c2);
   
   if(c1==c2==c3){
   printf("Votre triangle est equilateral\n");
   }else if(c1*c1==c2*c2+c3*c3 || c2*c2==c1*c1+c3*c3 || c3*c3==c2*c2+c1*c3 && c1==c2 || c2==c3 || c3==c1 ){
   printf ("Votre triangle est isocèle rectangle\n");
   } else if(c1*c1==c2*c2+c3*c3 || c2*c2==c1*c1+c3*c3 || c3*c3==c2*c2+c1*c3){
   printf ("Votre triangle est rectangle\n");
   }else if(c1==c2 || c2==c3 || c3==c1){
   printf ("Votre triangle est isocele\n");
   }else{
   printf ("Désolé c'est un triangle quelconque");
   }
return 0;
}