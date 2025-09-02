#include <stdio.h>
int main()
{
    int i;
    int impair;
    int c = 0;
    printf("give number : ");
    scanf("%d",&i);
    while(i != 0)
    {
        impair = 0;
        while(impair != 1)
        {
            if(c % 2 == 1)
            {
            printf("%d", c);
            impair = 1;
            }
            c++;
        }
    i--;

    }
}