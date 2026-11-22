#include<stdio.h>
int main()
{
float height;
int weight;
printf("Enter weight in kg:");
scanf("%d",&weight);
printf("Enter height in meters:");
scanf("%f",&height);
float bmi=weight/(height*height);
printf("Your BMI:%.2f\n",bmi);
if(bmi<18.5)
printf("Category: Underweight");
else if(bmi>18.5 && bmi<25.0)
printf("Catrgoary: Normal");
else if(bmi>25.0 && bmi<30.0)
printf("Category: Overweight");
else if(bmi>30.0)
printf("Category: Obese");
return 0;
}