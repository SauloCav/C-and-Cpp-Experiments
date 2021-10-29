#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

float jf(float cont, float fra, float jos);

int main(){
	
	float cont=0, fra=160, jos=140, h;
	
	h=jf(cont, fra, jos);
	
	printf("%.1f Meses", h);
	
}

float jf(float cont, float fra, float jos){
	
	if(jos<=fra){
		return jf(cont=cont+1, fra+2, jos+3);	
	}
	else{
		return cont;
	}
	
}
