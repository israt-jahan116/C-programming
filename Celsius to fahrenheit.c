#include<stdio.h>
float toFahrenheit (float c);
int main()
{
    float celsius;
    printf("Enter celsius:");
    scanf("%f",&celsius);
    printf("Fahrenheit=%.2f\n",toFahrenheit(celsius));
    return 0;
}
float toFahrenheit(float c)
{
    return(c*1.8)+32;

}
