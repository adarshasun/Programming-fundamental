/*
Name:Adarsha Sunchuri
Lab Sheet:17
Program:WAP to display the given pattern
Date:16 Jan,2017
*/
#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("Enter any number");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(i==rev)
	{
		printf("The number is palidrome:\n");
	}
	else
	{
		printf("the number is not palidrome:\n");
	}
	return 0;
}
