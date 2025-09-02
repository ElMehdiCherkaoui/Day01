#include <stdio.h>
int main()
{
    int i;
    int results = 0;
    printf("give number : ");
    scanf("%d",&i);
    while(i != 0)
    {
        results = results + i;
        i--;
    }
    printf("%d", results);
}