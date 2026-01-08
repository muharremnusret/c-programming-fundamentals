#include <stdio.h>

int ortalama(int *p, int boyut)
{
    return (*p+*(p+1)+*(p+2)+*(p+3)+*(p+4))/boyut;
}

int main()
{
    int notlar[5];

    printf("5 öğrenci için ortalama hesaplama programı.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. öğrencinin notunu giriniz: ", i+1);
        scanf("%d", &notlar[i]);
    }

    printf("Ortalama sonucu: %d",ortalama(notlar,5));
    
}