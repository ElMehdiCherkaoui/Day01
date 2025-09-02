#include <stdio.h>
int main() 
{
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    if (c >= 65 && c <= 90)
        printf("Majuscule\n");
    else
        printf("Pas majuscule\n");
}
