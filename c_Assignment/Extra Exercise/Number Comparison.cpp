//Write a C program that takes three numbers from the user and determines:
//The largest number. 
//The smallest number.
//Challenge: Solve the problem using both if-else and switch-case statements.
#include<stdio.h>
int main()
{
	int a,b,c;
	int largest , smallest;
	
	printf("Enter the Number:");
	scanf("%d",&a);
	
	printf(" Enter the Number :");
	scanf("%d",&b);
	
	printf(" Enter the Number :");
	scanf("%d",&c);
	
	if( a >= b && a>= c)
	{
		printf("Largest Number :%d\n",a);
	}
	else if( b >= a && b >=c)
	{
		printf("Largest Number :%d\n",b);
	}
	else
	{
		printf("Largest Number :%d\n",c);
	}
	
	if( a>=b && a>=c)
	{
		printf("Smallest Number :%d\n",a);
	}
	else if(b>=a && b>=c)
	{
		printf("Smallest Number :%d\n",b);
	}
	else
	{
		printf("Smallest Number :%d\n",c);
	}
	
	printf("Largest Number : %d\n",largest);
	printf("Smallest Number : %d\n",smallest);
	
	


//	 switch case 

	
	int ch ;
	
	printf("Enter the Choice:");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			if(a>=b && a>=c)
			{
				printf("Largest Number :%d\n",a);
			}
			else if(b>=a && b>=c)
			{
				printf("Largest Number :%d\n",b);
			}
			else
			{
				printf("Largest Number :%d\n",c);
			}
		case 2:
			if(a>=b && a>=c)
			{
				printf("Smallest Number :%d\n",a);
			}	
			else if(b>=a && b>=c)
			{
				printf("Smallest Number :%d\n",b);
			}	
			else
			{
				printf("Smallest Number :%d\n",c);
			}
	}
}
