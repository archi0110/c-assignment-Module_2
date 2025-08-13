//Write a C program that acts as a simple calculator. The program should take two numbers and an operator as input from the user and perform the 
//respective operation (addition, subtraction, multiplication, division, or modulus) using operators.
#include<stdio.h>
int main()
{
	int x,y;
	char ch;
	
	printf("+ Addition\n");
	printf("- Substraction\n");
	printf("* Multiplication\n");
	printf("/ Division\n");
	printf("% Modulus\n");
	
	printf("Enter the operators:");
	scanf("%c",&ch);
	
	printf("Enter First Number :");
	scanf("%d",&x);
	
	printf("Enter Second Number :");
	scanf("%d",&y);
	switch(ch)
	{
		case '+': printf("addition is :%d\n",x+y);
		break;
		case '-': printf("Substraction is:%d\n",x-y);
		break;
		case '*': printf("Multiplication is :%d\n",x*y); 
		break;
		case '/': printf("Division is :%d\n",x/y);
		break;
		case '%': printf("Modulus is :%d\n",x%y);
		break;
		default:printf("Invalid Operator '%c'.use to (+,-,*,/,% )%\n",ch);
	}
	return 0;
}
