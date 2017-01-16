/*
Name:Adarsha Sunchuri
Lab Sheet:17
Program:WAP to print the count of number of digits
Date:16 Jan,2017
*/
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		count=count+1;
		n=n/10;
	}
	printf("The number of count is %d",count);
	return 0;
}
		
