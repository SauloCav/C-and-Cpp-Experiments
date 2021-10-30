#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
	
	int *a, *b, c=8, d=2;
	a=&c;
	b=&d;
	*a=5;
	(*a)+=10;
	*b=*a;
	
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n\n", d);
	
	printf("a=%d\n", &a);
	printf("b=%d\n", &b);
	printf("c=%d\n", &c);
	printf("d=%d\n", &d);
	
}
