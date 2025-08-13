//Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
#include<stdio.h>
int main()
{
	int num =10;
	int *ptr= &num;

	
	printf("Enter the value :%d\n",num);

	*ptr= 30;	
	
	printf("Modify  value :%d\n",num);
	
	return 0;
	
}
