#include <stdio.h>
int main()
{
    int i , reverse = 0 , remainder;
    printf("give number : ");
    scanf("%d",&i);
    printf("your number is : %d", i);
    while (i != 0)
    {
        remainder = i % 10;
        reverse = reverse * 10 + remainder;
        i = i / 10;
    }
    printf("\nyour revers is : %d", reverse);
}