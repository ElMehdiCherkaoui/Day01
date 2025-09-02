#include <stdio.h>
int main() 
{
    char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c est un alphabet ", c);
        if (c >= 'a' && c <= 'z') printf("minuscule\n");
        else printf("majuscule\n");
    } else {
        printf("%c n'est pas un alphabet\n", c);
    }
}
