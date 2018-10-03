#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("Bitte geben Sie ihre erste Zahl ein: \n");
    scanf("%d",&num1);
    printf("Bitte geben Sie ihre zweite Zahl ein: \n");
    scanf("%d",&num2);
    system("clear");
    printf("Ihr Ergebnis ist: %d",num1+num2);
    
    return 0;
    
}
