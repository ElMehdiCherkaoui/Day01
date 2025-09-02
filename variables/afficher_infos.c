#include <stdio.h>
int main()
{
    char nom[50];
    char prenom[50];
    int age;
    char sexe[50]; 
    char adresses[100];

    printf("whats your name : ");
    scanf("%s",&nom);
    printf("whats your nickname : ");
    scanf("%s",&prenom);
    printf("whats your age : ");
    scanf("%d",&age);
    printf("male or female ? :");
    scanf("%s",&sexe);
    printf("whats your adress? : ");
    scanf("%s",&adresses);

    printf("\n nom : %s \n prenom : %s \n age : %d \n sexe : %s \n adress : %s" , nom , prenom , age , sexe , adresses);


}