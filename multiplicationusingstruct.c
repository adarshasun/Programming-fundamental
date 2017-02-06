/*
Name:Adarsha Sunchuri
Lab Sheet:
Program:WAP to multiply using structure
Date:16 Jan,2017
*/ 
#include<stdio.h>
struct multiplication
{
int a;
int b;
int c;
}result;
int main()
{
int product;
printf("enter the first number\n");
scanf("%d",&result.a);
printf("enter the second number\n");
scanf("%d",&result.b);
printf("enter the third number\n");
scanf("%d",&result.c);
product=result.a*result.b*result.c;
printf("the product is :%d\n",product);
return 0;
