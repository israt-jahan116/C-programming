#include<stdio.h>
float calculateArea(float r);
float calculatePerimeter(float r);
int main(){
float radius;
printf("Enter radius:");
scanf("%f",&radius);
printf("Area=%.2f\n",calculateArea(radius));
printf("Perimeter=%.2f\n",calculatePerimeter(radius));
return 0;
}
float calculateArea(float r)
{
    return 3.1416*r*r;
}
float calculatePerimeter(float r)
{
    return 2*3.1416*r;
}
