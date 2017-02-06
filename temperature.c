#include<stdio.h>
int temperature();
int main()
{
float result;
result=temperature();
printf("The temperature in fahrenhiet is %f",result);
return 0;
}
int temperature()
{
float c,f;
printf("Enter temperature in celsius=");
scanf("%f",&c);
f=(180 * c + 3200)/100;
return f;
}

