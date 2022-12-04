/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

int main(){

    char main[100]; // Array of char untuk menampung string inputan user.
    
    /* Meminta string dan tebal pola dari user */
    scanf("%s", main);
    scanf("%d", &n);

    /* Array of interger */
    int ascii[100]; // Untuk menampung nilai ASCII string inputan user.
    int divide[100]; // Untuk menampung pemisahan satuan, puluhan, ratusan.
    int indeks[100]; // Untuk menampung indeks puluhan dan ratusan yang digunakan untuk proses spasi.

    /* Convert string menjadi ASCII */
    for(i = 0; i < strlen(main); i++)
    {
        ascii[i] = main[i];
    }

    /* Memanggil prosedur dan fungsi */
    unit(main, ascii, divide, indeks);
    len(main, ascii);
    // Nilai hasil return fungsi len di tampung kedalam integer batas.
    int batas = len(main, ascii); // Batas menjadi parameter untuk seluruh prosederu line atau baris.
    lineA(main, divide, indeks, batas);
    lineB(main, divide, indeks, batas);
    lineC(main, divide, indeks, batas);
    lineD(main, divide, indeks, batas);
    lineE(main, divide, indeks, batas);

    return 0;
}