#include <stdio.h>

int main()
{
    int sayilar[10][4][4];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d. Tablo, %d. Satır, %d. Sütün için sayı giriniz: ",i+1,j+1,k+1);
                scanf(" %d", &sayilar[i][j][k]);

                if (sayilar[i][j][k]<0)
                {
                    sayilar[i][j][k]=sayilar[i][j][k]*-1;
                }

                else if (sayilar[i][j][k]>0)
                {
                    sayilar[i][j][k]+=5;
                }

                printf("%d\n",sayilar[i][j][k]);
                
            }
            
        }
        
    }
    
}