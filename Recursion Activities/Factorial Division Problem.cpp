#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

int fat(int n, int i);

int main(){
	
	int n, r, i=1;
	
	printf("informe n: ");
	scanf("%d", &n);
	
	r=fat(n-1, i);
	
	if(n>1){
		printf("\nS = %d", r+1);
	}
	else{
		printf("\nS = %d", r);
	}
	
}

int fat(int n, int i){
	
	printf("%d ", n);
	printf("%d\n", i);
	
	if(i<n){
		return i+i*fat(n, i+1);
	}
	else{
		return i;
	}
	
}
