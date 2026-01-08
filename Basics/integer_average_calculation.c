#include <stdio.h> 

int main(void)
{
    int sayi1, sayi2, sayi3, sayi4, sayi5;
    float ortalama;
    
    printf("1.sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("2.sayıyı girin: ");
    scanf("%d", &sayi2);
    printf("3.sayıyı girin: ");
    scanf("%d", &sayi3);
    printf("4.sayıyı girin: ");
    scanf("%d", &sayi4);
    printf("5.sayıyı girin: ");
    scanf("%d", &sayi5);

    ortalama = (sayi1+sayi2+sayi3+sayi4+sayi5)/5.0;

    printf("5 sayının ortalama değeri: %.2f", ortalama);
}