#include <stdio.h>

int main(void)
{
    char ad[100];
    char soyad[100];
    long int ogrenci_no;
    int ortalama_not;

    printf("Ad giriniz: ");
    scanf("%s", ad);
    printf("Soyad giriniz: ");
    scanf("%s", soyad);
    printf("Ögrenci no giriniz: ");
    scanf("%ld", &ogrenci_no);
    printf("Ortalama not giriniz: ");
    scanf("%d", &ortalama_not);

    printf("Ad: %s \n", ad);
    printf("Soyad: %s \n", soyad);
    printf("Öğrenci no: %ld \n", ogrenci_no);
    printf("Ortalama not: %d \n", ortalama_not);
}