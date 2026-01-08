#include <stdio.h>

int main()
{
    int dizi[10];
    int toplam=0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d. Sayıyı giriniz: ", i+1);
        scanf(" %d", dizi+i);
        if(*(dizi+i)%2==0)
            toplam += *(dizi+i);
    }
    
    printf("%d Çift sayıların toplamı", toplam);
}