#include <stdio.h>
int main()
{
int x, y;
printf("Enter x and y coordinates: ");
scanf("%d %d", &x, &y);
if (x > 0 && y > 0)
printf("Quadrant 1\n");
else if (x < 0 && y > 0)
 printf("Quadrant 2\n");
else if (x < 0 && y < 0)
 printf("Quadrant 3\n");
else if (x > 0 && y < 0)
 printf("Quadrant 4\n");
else if (x == 0 && y == 0)
 printf("Origin\n");
else if (y == 0)
printf("On the X-axis\n");
else
printf("On the Y-axis\n");
return 0;
}