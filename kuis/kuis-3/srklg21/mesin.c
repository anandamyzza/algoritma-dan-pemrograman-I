/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi KUIS 3 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void sentence(char main[][51])
{
    int len = 0; // Deklarasi variabel untuk membantu mencari string terpanjang dari array of string.
    
    /* Perulangan untuk mencari nilai string terpanjang dari seluruh array of string */
    for(i = 0; i < n; i++)
    {
        if(strlen(main[i]) > len)
        {
            len = strlen(main[i]);
        }
    }

    /* Perulangan untuk mencari hasil program */
    for(i = 0; i < n; i++)
    {
        // Perulangan untuk membuat array of string rata kanan.
        for(j = 0; j < len - strlen(main[i]); j++)
        {
            printf(" ");
        }

        // Permisalan untuk mencari apakah panjang hurufnya genap.
        if(strlen(main[i]) % 2 == 0)
        {
            // Perulangan untuk mengeluarkan hasil array of string genap yang separuh dari belakang.
            for(k = strlen(main[i]) / 2; k < strlen(main[i]); k++)
            {
                printf("%c", main[i][k]);
            }

            // Perulangan untuk mengeluarkan hasil array of string genap yang separuh dari depan.
            for(k = 0; k < strlen(main[i]) / 2; k++)
            {
                printf("%c", main[i][k]);
            }
        }
        // Permisalan untuk mencari apakah panjang hurufnya ganjil.
        else if(strlen(main[i]) % 2 != 0)
        {
            // Perulangan untuk mengeluarkan hasil array of string ganjil dari huruf belakang.
            for(k = strlen(main[i]) - 1; k >= 0; k--)
            {
                printf("%c", main[i][k]);
            }
        }
        printf("\n");
    }
}