/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    /* Meminta nilai n dari user */
    scanf("%d", &n);
    /* Deklarasi char untuk menyimpan string yang user input */
    char main[n][100];
    char seek[100];

    /* Pengulangan untuk meminta string dari user */
    for(i = 0; i < n; i++)
    {
        scanf("%s", main[i]);
    }

    /* Meminta kata yang akan dicari dalam string main */
    scanf("%s", seek);

    /* Memanggil fungsi */
    amount(main, seek);

    /* Mengeluarkan hasil dari program */
    printf("%d\n", amount(main, seek));

    return 0;
}