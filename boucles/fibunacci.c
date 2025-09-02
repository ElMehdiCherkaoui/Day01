#include <stdio.h>
int main()
{
    int i , result = 0, j = 0, c , b = 1;
    printf("give number : ");
    scanf("%d",&i);
    if(i == 0)
    {
        printf("0");
    }
    while(j != i)
    {
        c = b + result;
        result = b;
        b = c;
        printf("%d",result);
        j++;

    }
    
}