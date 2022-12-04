/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

void amount(data value[])
{
    int temp; // Variabel untuk membantu proses pengurutan

    /* Pengulangan untuk proses pengurutan nilai dari terkecil hingga terbesar tipe terstruktur integer 2 dimensi */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                if(value[i].mark[j] < value[i].mark[k])
                {
                    // Sorting system untuk pengurutan nilai.
                    temp = value[i].mark[j];
                    value[i].mark[j] = value[i].mark[k];
                    value[i].mark[k] = temp;
                }
            }
        }
    }


    int help = 0; // Variabel untuk membantu proses spasi saat pengeluaran hasil.

    /* Pengulangan untuk proses pengeluaran hasil dan pemberian spasi */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 4; j++)
        {
            // Pengulangan untuk pengeluaran spasi.
            for(k = 0; k < help; k++)
            {
                printf(" ");
            }
            // Mengeluarkan hasil dari pengurutan.
            printf("%d\n", value[i].mark[j]);
        }

        /* Syarat untuk penambahan help (Batas spasi) */
        if(value[i].mark[3] < 10)
        {
            help++;
        }
        else if(value[i].mark[3] >= 10 && value[i].mark[3] < 100)
        {
            help += 2;
        }
        else if(value[i].mark[3] >= 100 && value[i].mark[3] < 1000)
        {
            help += 3;
        }
        else if(value[i].mark[3] >= 1000)
        {
            help += 4;
        }
    }
}