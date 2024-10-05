#include<stdio.h>
#include<math.h>
int a;
float c1,c2,c3,c4,r,A,P,p;
int main(){
printf("Nous allons calculer l aire et le perimetre\n");
printf("Veuillez choisir une figure\n");
printf("1 CARRE\n");
printf("2 CERCLE\n");
printf("3 RECTANGLE\n");
printf("4 TRIANGLE\n");	
do {	
	printf("Veuillez choisir l une des quatre option\n");
	scanf("%d" ,&a);
}while (a!=1 && a!=2 && a!=3 &&a!=4 && !a);

switch(a){
	case 1: {
		do{
		printf("Entrez la mesure du cote de votre carre\n");
		scanf("%f" ,&c1);
		A=c1*c1;
		P=4*c1;
		} while(c1<=0);
		printf("Le perimetre de votre carre est %f et son aire est %f " ,P ,A);
		break;
	}
	case 2:{
		do{
		printf("Entrez la mesure du rayon de votre cercle\n");
		scanf("%f" ,&r);
		A=3.14*r*r;
		P=3.14*2*r;
		} while(r<=0);
		printf("La circonference de votre cercle est %f et son aire est %f " ,P ,A);
		break;
	}
	case 3:{
		do{
		printf("Entrez une mesure de votre rectangle\n");
		scanf("%f" ,&c1);
		printf("Entrez une autre mesure de votre rectangle\n");
		scanf("%f" ,&c2);
		A=c1*c2;
		P=2*(c1+c2);
		} while(c1<=0 &&c2<=0 );
		printf("Le perimetre de votre rectangle est %f et son aire est %f " ,P ,A);
		break;
	}
	case 4:{
		do{
			do{
			printf("Entrez une mesure de votre triangle\n");
		    scanf("%f" ,&c1);
	    	printf("Entrez une autre mesure de votre triangle\n");
		    scanf("%f" ,&c2);
		    printf("Entrez la derniere mesure de votre triangle\n");
		    scanf("%f" ,&c3);
			}while(c1<=0 &&c2<=0 &&c3<=0 );
			 if(c1>=c2+c3 && c2>=c1+c3 && c3>=c1+c2){
			 	printf("Ces mesure ne peuvent pas former un triangle\n");
			 }
             P=c1+c2+c3;
             p=P/2;
             A=sqrt(p*(p-c1)*(p-c2)*(p-c3));
		} while(c1>=c2+c3 && c2>=c1+c3 && c3>=c1+c2);
		printf("Le perimetre de votre rectangle est %f et son aire est %f " ,P ,A);
		break;
	}
}


	return 0;
}