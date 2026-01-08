#include <stdio.h>

int main()
{

    int sayi[50];
    int toplam=0;
    int adet=0;

    for (int i = 0; i < 50; i++)
    {
        printf("%d. Sayıyı giriniz:", i+1);
        scanf(" %d", &sayi[i]);
        if (sayi[i]<30)
        {
            toplam += sayi[i];
            adet++;
            printf("adet : %d,toplam : %d \n", adet,toplam);
            if (toplam%65==0 || toplam%79==0)
            {
                return 0;
            }
            
        }
        
    }


    return 0;
}