#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

float sod(float n, float cc, float i);

int main(){
	
	float h, n, cc=0, i=1;
	
	printf("insira n: ");
	scanf("%f", &n);
	
	h=sod(n, cc, i);
	printf("resultado: %f", h);
	
}

float sod(float n, float cc, float i){
	
	if(i<=n){
		return sod(n, cc+=1/i, i+1);
	}
	else{
		return cc;
	}
	
}
