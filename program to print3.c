/*
Student name:Adarsha Sunchuri
program:program to display following patterns
roll no:03
Date:16 Jan,2017
*/
#include<stdio.h>
int main()
{
int n,i,j;

printf("enter number of rows:");

scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",i);
	}
	printf("\n");
}
	return 0;
}
