#include<stdio.h>

int a,s,i;

int main(){
	printf("Nous allons calculer le factoriel\n");
	do{
		printf("Veuillez entrer un entier positif s il vous plait\n "),
		scanf("%d" ,&a);
	} while(a<0);
	s=1;
	i=1;
	if(a==0){
	printf("Le factoriel de 0 est 1");	
	}else{
		for(i=1;i<=a;i++){
			s=s*i;
		}
		printf("Le factoriel de %d est %d" ,a,s);
	}
	return 0;
}