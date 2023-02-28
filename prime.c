#include<stdio.h>
void main()
{
int number,flag=1,i;
printf("enter a number to check either it is prime or not");
scanf("%d",&number);
if(number==1)
{
	printf("Number is neither prime nor composite");
}
else 
{
	for(i=2;i<number/2;++i)
	{
		if(number%i==0)
		{
			flag=0;
		}
	}
	if(flag==1)
		{
			printf("Number is prime");
		}
	else
		{
		printf("Number is composite");
		}
}
}



