#include<stdio.h>
int main(void)
{
int choice,num,i,s=0;
unsigned long int fact;
while(1)
{
printf("\n 1.perfect or not");
printf("\n 2.Prime");
printf("\n 3.Odd & Even");
printf("\n 4.Exit");
printf("\n Your choice?");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("\n Enter number");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
if(num%i==0)
{
printf("\n Factors are %d",i);
s=s+i;
}
}
if(s==num)
printf("\n Number is a perfect number");
else
printf("\n Number is not a perfect number");
break;
case 2:
printf("\n Enter number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("\n Not a prime number");
break;//Takes control out of for loop
}
}
if(i==num)
printf("\n Prime number");
break;//Takes control out ofswitch
case 3:
printf("\n Enter number;");
scanf("%d",&num);
if(num%2==0)
printf("\n Odd numder");
else
printf("\n Even Number");
break;
}
}

return 0;
}
