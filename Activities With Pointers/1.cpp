#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	int x=10;
	int *p_x=&x;
	int **p_p_x=&p_x;
	int ***p_p_p_x=&p_p_x;
	
	**p_p_x+=5;
	x+=10;
	*p_x=sqrt(*p_x);

	printf("x=%d\n", x);
	printf("p_x=%d\n", p_x);
	printf("p_p_x=%d\n", p_p_x);
	printf("p_p_p_x=%d\n\n", p_p_p_x);
	
	printf("x=%d\n", &x);
	printf("p_x=%d\n", &p_x);
	printf("p_p_x=%d\n", &p_p_x);
	printf("p_p_p_x=%d\n", &p_p_p_x);
}
