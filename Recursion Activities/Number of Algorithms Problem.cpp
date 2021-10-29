#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

int alg(int n, int cc);

int main(){
	
	int n, r=0, cc=0;
	
	printf("insira um numero: ");
	scanf("%d", &n);
	
	r=alg(n, cc);
	
	printf("numero de algarismos: %d", r);
	
}

int alg(int n, int cc){
	
	if(n>0){
		
		return alg(n=(n/10), cc=cc+1);
		
	}
	else{
		
		return cc;
		
	}
	
}
