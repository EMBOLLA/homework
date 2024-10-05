#include<stdio.h>
#include<math.h>
float a,b,c,A,B,C,AB,BC,CA;
int main(){
	printf("Nous allons determiner les mesures du triangle forme par les trois poins dont vous specifierai les coordonnees \n");
	printf("Entrez l abscisse du point A\n");
	scanf("%f",&A);
	printf("Et maintenant son ordonnee \n");
	scanf("%f",&a);
    printf("Entrez l abscisse du point B\n");
	scanf("%f",&B);
	printf("Et maintenant son ordonnee \n");
	scanf("%f",&b);
	printf("Entrez l abscisse du point C\n");
	scanf("%f",&C);
	printf("Et maintenant son ordonnee \n");
	scanf("%f",&c);
	AB=sqrt(pow(b-a,2)+pow(B-A,2));
	BC=sqrt(pow(c-b,2)+pow(C-B,2));
	CA=sqrt(pow(a-c,2)+pow(A-C,2));
	printf("Les dimensions de votre triangle sont AB=%f BC=%f AC=%f \n" ,AB ,BC ,CA);
	return 0;
}