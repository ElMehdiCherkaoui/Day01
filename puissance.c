#include <stdio.h>
int main()
{
    int i , b;
    printf("give base :");
    scanf("%d",&i);
    printf("give exposant :");
    scanf("%d",&b);
    int result = 1;
    while(b != 0)
    {
        result = result * i;
        b--;
    }
    printf("%d",result);
}