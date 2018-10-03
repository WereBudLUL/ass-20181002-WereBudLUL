#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("Bitte geben Sie eine Zahl ein: \n");
    scanf("%d",&num1);
    printf("Bitte geben Sie eine zweite Zahl ein: \n");
    scanf("%d",&num2);
    system("clear");
    if(num1<num2)
    {
        printf("%d",num2);
    } else
    {
        printf("%d",num1);
    }
    
    return 0;
    
}
