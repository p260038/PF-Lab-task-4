#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three sides of triangle:");
scanf("%d %d %d",&a,&b,&c);
if (a<b+c && b<a+c && c<a+b)
{
if(a==b)
{
if(b==c)
printf("Equilateral\n");
else
printf("Isosceles\n");
}
else
{
if(b==c)
printf("Isosceles\n");
else
{
if(a==c)
{
printf("Isosceles\n");
}
else
{
printf("Scalene\n");
}
}
}
}
else
printf("Not a valid triangle\n");
return 0;
}