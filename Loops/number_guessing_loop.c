#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int guess(int randomnumber,int userguess)
{
    return userguess==randomnumber;
}

int main ()
{
    int numberinput;
    srand(time(NULL));
    int randomnumber = rand()%11;

    do
    {
        printf("Guess the number (Between 0-10): ");
        scanf(" %d",&numberinput);
        if (!guess(randomnumber,numberinput))
        {
            printf("Your guess is wrong! Please try again.\n");
        }
        
    } 
    while (guess(randomnumber,numberinput)<1);

    printf("Congratulations! You won.");
    

}