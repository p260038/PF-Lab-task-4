#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 distint integers:\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Entered 3 distinct integers are:(%d,%d,%d)\n ",a,b,c);
if(a>b)
{
if(b>c)
printf("Greatest integer is a:%d",a);
else
printf("Greatest integer is c:%d",c);
}
else
{
if(b>c)
printf("Greatest integer is b:%d",b);
else
printf("Greatest integer is c:%d",c);
}

return 0;
}