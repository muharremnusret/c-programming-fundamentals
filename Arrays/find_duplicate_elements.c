#include <stdio.h>

int main()
{
    int dizi[5];
    int tekrar = 0;
    int k = 0;

    while (k < 5)
    {
        printf("Dizinin %d. elemanını giriniz: ", k + 1);
        scanf("%d", &dizi[k]);
        k++;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (dizi[i] == dizi[j])
            {
                tekrar++;
                break;
            }
        }
    }

    if (tekrar > 0)
    {
        printf("Tekrarlayan eleman sayısı: %d\n", tekrar);
    }
    else
    {
        printf("Tekrarlayan eleman bulunamadı.\n");
    }

    return 0;
}
