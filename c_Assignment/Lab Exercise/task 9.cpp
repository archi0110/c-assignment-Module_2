//Write a C program that stores 5 integers in a one-dimensional array and printsthem. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements.
#include<stdio.h>
int main()
{
	int arr[5];
//	one dimensional array 
	printf("Enter 5 integers 1D array:\n");
	for(int i=0; i< 5; i++)
	{
		printf("%d :",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("one-dimensional array :\n");
	for(int i=0; i<5; i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("\n");
//	two dimensional array
	
	int matrix[3][3],sum=0 ;
	
	printf("Enter 9 integers 3*3 matrix :\n");
	for(int i=0; i<3; i++)
	{
		for(int r=0; r<3; r++)
		{
			printf("%d %d :",i,r);
			scanf("%d",&matrix[i][r]);
			sum += matrix[i][r];
		}
	}
	printf("\n");
	
	printf("3*3 matrix:\n");
	for(int i=0; i<3; i++)
	{
		for(int r=0; r<3; r++)
		{
			printf("%d",matrix[i][r]);
		}
		printf("\n");
	}
	printf("sum of all elements:%d\n",sum);
	
	return 0;
	
}
