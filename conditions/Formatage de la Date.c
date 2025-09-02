#include <stdio.h>
int main() 
{
    int j, m, a;
    printf("Entrez une date (jj/mm/aaaa): ");
    scanf("%d/%d/%d", &j, &m, &a);
    printf("%d-", j);
    if (m == 1) printf("Janvier");
    else if (m == 2) printf("Fevrier");
    else if (m == 3) printf("Mars");
    else if (m == 4) printf("Avril");
    else if (m == 5) printf("Mai");
    else if (m == 6) printf("Juin");
    else if (m == 7) printf("Juillet");
    else if (m == 8) printf("Aout");
    else if (m == 9) printf("Septembre");
    else if (m == 10) printf("Octobre");
    else if (m == 11) printf("Novembre");
    else if (m == 12) printf("Decembre");
    else printf("Mois-invalide");
    printf("-%d\n", a);
}

