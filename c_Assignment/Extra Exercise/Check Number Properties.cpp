//Write a C program that takes an integer from the user and checks the following using different operators:
// Whether the number is even or odd.
// Whether the number is positive, negative, orzero.
//  Whether the number is a multiple of both 3 and 5.
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the Number:");
	scanf("%d",&num);
	
	if(num %2==0)
	{
		printf("The Number is Even \n");
	}
	else
	{
		printf("The Number is odd \n");
	}
	if(num>0)
	{
		printf("The Number is Positive \n");
	}
	else if(num<0)
	{
		printf("The Number is Negative \n");
	}
	else
	{
		printf("The Number is Zero \n");
	}
	if(num %3==0 && num %5==0)
	{
		printf("The Number is Multiple of 3 and 5 \n");
	}
	else
	{
		printf("The Number is Not Multiple of 3 and 5 \n");
	}
	return 0;
}
