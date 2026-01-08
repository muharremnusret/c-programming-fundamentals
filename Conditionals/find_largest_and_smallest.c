#include <stdio.h>

int main(void)
{
    int number1, number2, number3, number4, largest, smallest;
    printf("Please enter first number: ");
    scanf("%d", &number1);

    printf("Please enter second number: ");
    scanf("%d", &number2);

    printf("Please enter third number: ");
    scanf("%d", &number3);

    printf("Please enter fourth number: ");
    scanf("%d", &number4);

    largest=number1;
    smallest=number1;

    if(number2>largest)
    {
        largest=number2;
    }
    if(number3>largest)
    {
        largest=number3;
    }
    if(number4>largest)
    {
        largest=number4;
    }
    else
    {
        largest=largest;
    }
    if(number2<smallest)
    {
        smallest=number2;
    }
    if (number3<smallest)
    {
        smallest=number3;
    }
    if (number4<smallest)
    {
        smallest=number4;
    }
    else
    {
        smallest=smallest;
    }

    printf("Largest number is %d\n", largest);
    printf("Smallest number is %d", smallest);
    
}