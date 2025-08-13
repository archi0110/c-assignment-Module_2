//Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results. 
#include<stdio.h>
main()
{
	int x, y;
	char ch ;
	
	printf("Enter First Number:");
	scanf("%d",&x);
	printf("Enter second Number:");
	scanf("%d",&y);
	
	
//	Arithmetic Operator
	printf("\n ...... Arithmetic ........\n");
	printf("Addition :%d\n",x+y);
	printf("Substraction: %d\n",x-y);
	printf("Multiplication: %d\n",x*y);
	printf("Divison :%d\n",x/y);
	printf("Modulus :%d\n",x%y);
	
//	Relational Operator
	printf("\n ......Relational .........\n");
	printf("Equal To :%d\n",x==y);
	printf("Not Equal To :%d\n",x!=y);
	printf("Less Than :%d\n",x<y);
	printf("Greater Than :%d\n",x>y);
	printf("Less Than Eqaul To:%d\n",x<=y);
	printf("Greater Than Eqaul To:%d\n",x>=y);
	
//	Logical Operator
	printf("\n ...... Logical .......\n");
	printf(" Logical And :%d\n",x&&y);
	printf("Logical Or :%d\n",x||y);
	printf("Logical not :%d\n",!(x,y));
	
	return 0;
	
}
