#include<stdio.h>
int main()
{
    float k;
    int c;
    printf("la vitesse en kilomètres par heure (km/h) pour transforme en mètres par seconde (m/s) : ");
    scanf("%d" , &c);
    k = c * 0.27778;
    printf("mètres par seconde (m/s) est : %.5f m/s \n" , k);

}