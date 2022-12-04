/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int amount(char main[][100], char seek[])
{
    int sum[n];
    int total[n];
    int uhuy = 0;

    /* Pengulangan untuk mencari kata yang sama dalam semua string yang user input */
    for(i = 0; i < n; i++)
    {
        sum[i] = 0; // Inisialisasi sum = 0;
        total[i] = 0; // Inisialisasi total = 0;
        for(j = 0; j < strlen(main[i]); j++) // Perulangan for yang akan berhenti apabila nilai j kurang dari panjang kata utama.
        {
            if(main[i][j] == seek[0]) // Syarat if apabila kata utama memiliki huruf yang sama dengan kata yang dicari array pertama.
            {
                for(k = 0; k < strlen(seek); k++) // Perulangan for yang akan berhenti apabila nilai k kurang dari panjang kata yang dicari.
                {
                    if(main[i][j + k] == seek[k]) //Syarat if apabila kata utama yang indeksnya ditambah oleh 'k' bernilai sama dengan kata yang dicari array 'k'.
                    {
                        sum[i]++; //Apabila syarat diatas terpenuhi, maka sum akan bertambah 1.
                    }
                }
            }
            else // Apabila syarat if diatas tidak terpenuhi, maka nilainya = 0.
            {
                sum[i] = 0;
            }

            if(seek[sum[i]] == '\0') // Syarat if apabila kata yang dicari array 'sum[i]' berisi 'NULL'.
            {
                total[i]++; // Maka total bertambah 1
            }
        }
    }

    /* Pengulangan untuk menjumlahkan semua kata yang sama dalam string utama */
    for(i = 0; i < n; i++)
    {
        uhuy += total[i]; // Digunakan perulangan, karena jumlahnya terpisah oleh array.
    }

    /* Mengembalikan nilai total atau uhuy */
    return uhuy;
}