#include <stdio.h>

int averagecalculate(int array[], int size)
{
    int total = 0;
    int i = 0;
    while(i<5)
    {
        printf("Enter the exam score of %d. student: ", i+1);
        scanf("%d", &scores[i]);
        total+=scores[i];
        i++;
    }
    return total/size;
}

int main()
{
    int scores[5];

    printf("%d",total/5);
    return 0;
}