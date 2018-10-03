#include <stdio.h>

int main()
{
    int num = 0;
    printf("Geben Sie eine Zahl ein um den Countdown zu starten: \n");
    scanf("%d",&num);
    system("clear");
    if(num<0)
    {
        printf("Bitte geben Sie eine positive Zahl ein!");
    } else
    {
        for(num;num>=0;num--)
        {
            printf("%d \n", num);
        }
    }
    return 0;
}
