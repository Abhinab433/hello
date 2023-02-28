#include<stdio.h>
void main()
{
int a=1,b=0,c,i,n;
printf("Enter the number of term to be printed");
scanf("%d",&n);
printf("\n%d\n%d\n",b,a);
for(i=2;i<n;++i){
c=a+b;
printf("\n%d\n",c);
b=a;
a=c;
}
}
