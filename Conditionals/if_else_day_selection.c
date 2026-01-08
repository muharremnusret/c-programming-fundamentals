#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter the number (1-6): ");
    scanf("%d", &number);

    if(number == 1)
    {
        printf("Monday");
    }
    else if(number == 2)
    {
        printf("Tuesday");
    }
    else if(number == 3)
    {
        printf("Wednesday");
    }
    else if(number == 4)
    {
        printf("Thursday");
    }
    else if(number == 5)
    {
        printf("Friday");
    }
    else if(number == 6)
    {
        printf("Weekend");
    }
    else
    {
        printf("Incorrect Value");
    }
}