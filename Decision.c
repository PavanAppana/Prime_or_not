#include<stdio.h>
void main()
{
int n,count,i;
printf("Enter any number : ");
scanf("%d",&n);
count = 0;
for (i=1;i<=n;i++)
{
if (n%i==0)
count++;
}
if (count==2)
{
printf("The given number %d is a prime number\n",n);
}
else
{
printf("The given number %d is not a prime number\n",n);
}
}

