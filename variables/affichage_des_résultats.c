#include<stdio.h>
int main()
{
    int a;
    int b;
    int results;
    float dev;
    printf("give a number : ");
    scanf("%d" , &a);
    printf("give b number : ");
    scanf("%d" , &b);
    results = a + b;
    printf("a + b  = %d \n" ,results);
    results = a - b;
    printf("a - b  = %d \n" ,results);
    results = a * b;
    printf("a * b  = %d \n" ,results);
    dev = (float)a / b;
    printf("a / b  = %.2f \n" ,dev);
}