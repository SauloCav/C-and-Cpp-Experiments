#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int *a, *b, *c, d=12, e=4, f=0;
	a=&d;
	b=&e;
	c=&f;
	*a=5;
	*c=1;
	++*c;
	(*a)+=10;
	*b=*a;
	c=b;
	*a=25;
	*c=3;
	
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	printf("e=%d\n", e);
	printf("f=%d\n\n", f);
	
	printf("a=%d\n", &a);
	printf("b=%d\n", &b);
	printf("c=%d\n", &c);
	printf("d=%d\n", &d);
	printf("e=%d\n", &e);
	printf("f=%d\n", &f);
	
}
