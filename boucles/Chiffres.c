#include <stdio.h>
int main()
{
    int i;
    int c = 0;
    printf("give number : ");
    scanf("%d",&i);
    while(i != 0)
    {
        i /= 10;
        c++;
    }
    printf("le chiffer est : %d",c);
}