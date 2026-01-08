#include <stdio.h>

int main ()
{
    int scores[5];
    int total = 0;

    for(int i = 0; i<5; i++)
    {
        printf("Enter the exam score of %d. student: ", i+1);
        scanf("%d",&scores[i]);
        total+=scores[i];
        printf("%d\n",total);
    }

    printf("The average score of five students is %d", total/5);
    return 0;
}