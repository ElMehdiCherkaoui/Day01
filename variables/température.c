#include<stdio.h>
int main()
{
    float k;
    int c;
    printf("la temperature en Celsius pour transforme en Kelvin : ");
    scanf("%d" , &c);
    k = c + 273.15;
    printf("la temperature en Kelvin est : %.2f" , k);

}