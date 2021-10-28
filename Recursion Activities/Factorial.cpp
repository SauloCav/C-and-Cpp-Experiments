#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

int fat(int n);

int main(){
	
	int n, r;
	
	printf("informe n: ");
	scanf("%d", &n);
	
	r=fat(n);
	
	printf("\nfatorial de %d = %d", n, r);
	
}

int fat(int n){
	
	if(n==0){
		return 1;
	}
	else{
		return n*fat(n-1);
	}
	
}
