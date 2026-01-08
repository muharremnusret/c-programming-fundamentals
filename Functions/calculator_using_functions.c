#include <stdio.h>

int toplama(int a, int b)
{
    return a+b;
}

int cikarma(int a, int b)
{
    return a-b;
}

int carpma(int a, int b)
{
    return a*b;
}

int bölme(int a, int b)
{
    return a/b;
}

int main()
{
    char islem;
    int sayi1, sayi2;
    printf("Hesap makinesine hoşgeldiniz.\n");

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Yapmak istediğiniz işlemi giriniz (+,-,*,/): ");
    scanf(" %c",&islem);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d", &sayi2);
    
    
    if (islem == '+')
    {
       printf("%d", toplama(sayi1,sayi2));
    }

    else if (islem == '-')
    {
       printf("%d", cikarma(sayi1,sayi2));
    }
    
    else if (islem == '*')
    {
       printf("%d", carpma(sayi1,sayi2));
    }
    
    else if (islem == '/')
    {
       printf("%d", bölme(sayi1,sayi2));
    }
    else
    {
        printf("Hatali işlem");
    }
    
    return 0;
}