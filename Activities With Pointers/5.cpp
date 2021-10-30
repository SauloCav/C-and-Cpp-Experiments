#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

int x;
int y;

int main(){
	
	int *a, *b;
	int aux;
	
	printf("informe x: ");
	scanf("%d", &x);
	printf("informe y: ");
	scanf("%d", &y);
	
	a=&x;
	b=&y;
	aux=*a;
	*a=*b;
	a=&y;
	*a=aux;
	
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	
}
