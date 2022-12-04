/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){

    int m, i;
    scanf("%d", &m);
    char word[m];

    for(i = 0; i < m; i++)
    {
        scanf(" %c", &word[i]);
    }

    int n;
    scanf("%d", &n);

    int baris, kolom;

    int help;
    if(n % 10 == 0)
    {
        help = n / 5;

        for(baris = 1; baris <= help; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= 1; baris++)
        {
            for(kolom = 0; kolom <= n/2; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }

        for(baris = 1; baris <= help + 3; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= 1; baris++)
        {
            for(kolom = n/2; kolom <= n; kolom++)
            {
                printf("%c", word[kolom]);
            }
            printf("\n");
        }

        //Baris ke-2
        for(baris = 1; baris <= m/2; baris++)
        {
            for(kolom = 0; kolom <= n/2; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }

        for(baris = 1; baris <= 1; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= m/2; baris++)
        {
            for(kolom = n/2; kolom <= n; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }
        printf("\n");
    }
    else
    {
        //baris ke 1
        for(baris = 1; baris <= 1; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= 1; baris++)
        {
            for(kolom = 0; kolom <= n/2 - 1; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }

        for(baris = 1; baris <= 3; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= 1; baris++)
        {
            for(kolom = n/2; kolom <= n; kolom++)
            {
                printf("%c", word[kolom]);
            }
            printf("\n");
        }

        //Baris ke-2
        for(baris = 1; baris <= m/2; baris++)
        {
            for(kolom = 0; kolom <= n/2 - 1; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }

        for(baris = 1; baris <= 1; baris++)
        {
            printf(" ");
        }

        for(baris = 1; baris <= m/2; baris++)
        {
            for(kolom = n/2; kolom <= n; kolom++)
            {
                printf("%c", word[kolom]);
            }
        }
        printf("\n");
    }

    //baris ke-3


    return 0;
}