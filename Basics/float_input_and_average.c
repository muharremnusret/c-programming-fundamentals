#include <stdio.h>

int main(void)
{
    float sayi1, sayi2, sayi3, sayi4, sayi5;
    printf("1.ondalıklı sayıyı girin: ");
    scanf("%f", &sayi1);
    printf("2.ondalıklı sayıyı girin: ");
    scanf("%f", &sayi2);
    printf("3.ondalıklı sayıyı girin: ");
    scanf("%f", &sayi3);
    printf("4.ondalıklı sayıyı girin: ");
    scanf("%f", &sayi4);    
    printf("5.ondalıklı sayıyı girin: ");
    scanf("%f", &sayi5);

    printf("Girilen ondalıklı sayılar: %.2f, %.2f, %.2f, %.2f, %.2f \n", sayi1, sayi2, sayi3, sayi4, sayi5);

    float ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5;   
    printf("Girilen ondalıklı sayıların ortalaması: %.3f", ortalama);
}