#include <stdio.h>
int main()
{
    int first;
    int second;
    int third;

    printf("donner pondération 2 : ");
    scanf("%d" , &first);
    printf("donner pondération 3 : ");
    scanf("%d" , &second);
    printf("donner pondération 5 : ");
    scanf("%d" , &third);
    int total = (first + second + third) / 3;
    printf("Moyenne pondérée de trois ponderations est : %d" , total);
}