//printing all arithmetic operations
#include<stdio.h>
void main()
{
	int a, b, S, A, T, H, I;
	a = 200;
	b = 500;
	
	S = a+b;
	A = a-b;
	T = a*b;
	H = a/b;
	I = a%b;
	
	printf("Sum of %d and %d is %d\n", a, b, S);
	printf("Difference of %d and %d is %d\n", a, b, A);
	printf("Multiple of %d and %d is %d\n", a, b, T);
	printf("Division of %d and %d is %d\n", a, b, H);
	printf("Module division of %d and %d is %d\n", a, b, I);	
}
