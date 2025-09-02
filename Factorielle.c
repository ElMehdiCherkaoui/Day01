#include <stdio.h>

int main() {
int i;
int result = 1;
printf("give number : ");
scanf("%d" , &i);
while(i != 1)
{
    result= result * i;
    i--;
}
printf("%d" , result);
}