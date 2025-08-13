//Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while). 
#include<stdio.h>

main()
{
	int i;
//	While
	i =1;
 	printf("While Loop:\n");
 	while(i<=10)
 	{
 		printf("%d\n",i);
 		i++;
	}
	
	printf("\n");
	
//	for
	i =1;
	printf("For Loop:\n");
	for(int i=1; i<=10; i++)
	{
		printf("%d\n",i);
	}
	
	printf("\n");
	
//	Do-While

	printf("Do-While Loop:\n");
	i=1;
	do
	{
		printf("%d\n",i);
	    i++;
	}while(i<=10);
	
	
	return 0;
}
