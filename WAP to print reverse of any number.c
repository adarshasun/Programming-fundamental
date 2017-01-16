/*
Name:Adarsha Sunchuri
Lab Sheet:17
Program:WAP to print the count of number of digits
Date:16 Jan,2017
*/
#include<stdio.h>
int main()
{
	int n,b,rem=0,rev=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		
		//count=count+1;
		n=n/10;
	}
	printf("The number of reverse is %d",rev);
	if(b==rev)
	{
		printf("No is pallidrome\n");
	}
		else
		 {
			printf("No is not pallidrome");
		 }
	return 0;
}
		
