#include <stdio.h> 

int main(void)
{
    int sayi1, sayi2, toplam;
    printf("1.sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("2.sayıyı girin: ");
    scanf("%d", &sayi2);

    toplam = sayi1+sayi2;

    printf("1. ve 2. sayının toplamının 12'ye bölümünden kalan değer: %d", toplam%12);
}