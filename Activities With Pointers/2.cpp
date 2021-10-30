#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

int main(){
	
	int *a, *b, c=4, d=2;
	a=&c;
	b=&d;
	*b=8;
	*a=*b;
	*a=1;
	b=a;
	*b=0;
	
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n\n", d);
	
	printf("a=%d\n", &a);
	printf("b=%d\n", &b);
	printf("c=%d\n", &c);
	printf("d=%d\n", &d);
	
}
