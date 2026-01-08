#include <stdio.h>

int main()
{
    int adet,i=0,btoplam=0,ktoplam=0,büyük=0;
    printf("Kaç adet sayı gireceksiniz: ");
    scanf(" %d", &adet);
    int sayilar[adet];

    while(i<adet)
    {
        printf("%d. sayıyı giriniz: ", i+1);
        scanf(" %d", &sayilar[i]);
        if (sayilar[i]>100)
        {
            btoplam+=sayilar[i];
            büyük++;
        }
        else
        {
            ktoplam+=sayilar[i];
        }
        
        i++;
    }

    printf("Büyüklerin ortalaması : %d\n", btoplam/büyük);
    printf("Küçüklerin toplamı : %d", ktoplam);
    return 0;
}