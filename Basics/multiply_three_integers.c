#include <stdio.h>

int main(void)
{
    int sayi1, sayi2, sayi3, carp;
    printf("1.sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("2.sayıyı girin: ");
    scanf("%d", &sayi2);
    printf("3.sayıyı girin: ");
    scanf("%d", &sayi3);

    carp = sayi1*sayi2*sayi3;

    printf("3 sayının çarpımı: %d", carp);

}