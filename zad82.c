//Program treba uneseni postotni  broj pretvorit normalni oblik.

#include<stdio.h>

float postotak(float x){
	
	// Dijelimo sa 100 da dobijemo normlani oblik.
	x=x/100;
	return x;
}

int main(){
	float x;
	printf("Unesi broj u obliku postotka %%:");
	scanf("%f",&x);
	float broj=postotak(x);
	printf("Zadani broj u postotnom obliku %.2f%% i u normalnom obliku je %.2f",x,broj);
	return 0;
}
