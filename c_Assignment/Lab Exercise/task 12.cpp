//Write a C program that defines a structure to store a student's details (name,roll number, and marks). Use an array of structures to store details of 3
//students and print them.
#include<stdio.h>
#include<string.h>
struct student
{
	char name[100];
	int roll;
	float marks;
};
int main()
{
	student s[3];
	
	for(int i=0 ;i<3; i++)
	{
		printf("\n Enter the student detail:%d\n",i+1);
		printf("Name is : ");
		scanf(" %s",s[i].name);
		printf("Roll no is :");
		scanf(" %d",&s[i].roll);
		printf("Marks is :");
		scanf(" %f",&s[i].marks);
	}
	
	printf("\n");
	printf("Student detail ...\n");
	for(int i=0; i<3 ;i++)
	{
		printf("student details :%d\n",i+1);
		printf("Name is :%s\n",s[i].name);
		printf("Roll no is :%d\n",s[i].roll);
		printf("Marks is :%f\n",s[i].marks);
	}
	
	
	return 0;
	
}
