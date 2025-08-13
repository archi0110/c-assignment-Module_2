//Write a C program that calculates the factorial of a number using a function.Include function declaration, definition, and call.
#include<stdio.h>
int fact (int n);
int main()
{
	int num ,result;
	printf("Enter the number :");
	scanf("%d",&num);	
	
	result =fact(num);
	
	printf("%d\n",result);
	
	return 0;
}
int fact (int n)
{
	int fact=1;
	for(int i= 1 ;i<=n ;i++)
	{
		fact =fact*i;
	}
	return fact;
}
