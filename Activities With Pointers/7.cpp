#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

using namespace std;

void func(float *end);

int main(){
	
	float x, *px;
	
	printf("informe x: ");
	scanf("%f", &x);
	
	printf("\n");
	
	px=&x;
	
	func(px);
	
}

void func(float *end){
	
	float y;
	
	printf("endereco de x: %d\n", &end);
	printf("valor de x: %.2f\n", *end);
	printf("tamanho de x: %d bytes\n", sizeof(*end));
	
	y=100-*end;
	
	if(y>=0){
		printf("incrementar: %.2f", y);
	}
	else{
		y=(y*-1);
		printf("decrementar: %.2f", y);
	}
	
}

