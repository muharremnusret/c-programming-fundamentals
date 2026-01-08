#include <stdio.h>

int main()
{
    int notlar[7][4];

    for (int i = 0; i < 7; i++)
    {
        int toplam = 0;
        printf("%d. Ders için ", i+1);

        for (int j = 0; j < 4; j++)
        {
            printf("%d. Notu giriniz: ", j+1);
            scanf(" %d", &notlar[i][j]);
            toplam += notlar[i][j];
            if (j==3)
            {
                printf("%d. Ders ortalaması: %d\n", i+1, toplam/4);
            }
        }
        
    }
    
    
    
}