#include <stdio.h>

int main() {
int i;
int j = 1;
int result;
printf("give a number you want : ");
scanf("%d",&i);
while (j <= 10)
{
    result = i * j;
    printf("\n %d * %d = %d",i , j , result);
    j++;
}
}
