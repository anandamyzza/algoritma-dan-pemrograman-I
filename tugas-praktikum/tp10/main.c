/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP10 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    char nameSus[3][50]; // Variabel untuk menampung nama BobaBobi, Wanda, dan Natasha.
    int numBobi[4], numWanda[5], numNatasha[7]; // Variabel untuk menampung nilai kode angka ketiga karakter.
    int total[3]; // Variabel untuk menampung nilai total pertambahan kode angka ketiga karakter.

    /* Pengulangan untuk meminta inputan user untuk data ketiga katakter */
    for(i = 0; i < 3; i++)
    {
        // Meminta user untuk inputan huruf depan salah satu dari ketiga karakter.
        scanf(" %s", &nameSus[i]);
        // Syarat apabila Boba yang diinput.
        if(nameSus[i][0] == 'B')
        {
            // Pengulangan untuk meminta user inputan kode angka Boba.
            for(j = 0; j < 4; j++)
            {
                scanf("%d", &numBobi[j]);
            }
        }
        // Syarat apabila Wanda yang diinput.
        else if(nameSus[i][0] == 'W')
        {
            // Pengulangan untuk meminta user inputan kode angka Wanda.
            for(j = 0; j < 5; j++)
            {
                scanf("%d", &numWanda[j]);
            }
        }
        // Syarat apabila Natasha yang diinput.
        else if(nameSus[i][0] == 'N')
        {
            // Pengulangan untuk meminta user inputan kode angka Natasha.
            for(j = 0; j < 7; j++)
            {
                scanf("%d", &numNatasha[j]);
            }
        }
    }
    
    /* Untuk memanggil prosedur dan fungsi */
    value(nameSus, numBobi, numWanda, numNatasha, total);
    orderNum1(nameSus, total);
    orderNum2(nameSus, total);
    orderNum3(nameSus, total);
    orderName(nameSus);
    encryptionResult(nameSus, numBobi, numWanda, numNatasha, total);

    return 0;
}