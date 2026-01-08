#include <stdio.h>

int main(void)
{
    int number1, number2, multiply;
    printf("Please enter first number: ");
    scanf("%d", &number1);
    printf("Please enter second number: ");
    scanf("%d", &number2);
    number1 = 3*number1+5;
    number2 = 2*number2-1;

    multiply = number1*number2;

    printf("The value of the product of the first and second numbers: %d", multiply);

}