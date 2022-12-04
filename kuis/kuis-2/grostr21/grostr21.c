/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan KUIS 2 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int main(){

    int n; //Variabel n yang merupakan jumlah dari indeks array of string
    int i, j, k; //Variabel untuk membantu perulangan for.
    scanf("%d", &n); //Meminta inputan nilai 'n' dari user.
    char main[n][200]; //Deklarasi char bernama main dengan array dua dimensi.
    int len, leng; //Variabel len untuk membantu mencari string terpanjang dari array of string. Leng untuk membantu proses new line apabila ada string yang lebih pendek dari string sebelumnya.

    for(i = 0; i < n; i++) //Perulangan for untuk meminta user inputan kata array of string.
    {
        scanf("%s", main[i]);
    }

    len = 0; //Inisialisasi len = 0 agar nilai yang dihasilkan tidak random.
    for(i = 0; i < n; i++) //Perulangan for untuk mencari nilai terpanjang dari array of string yang user input.
    {
        if(strlen(main[i]) > len)
        {
            len = strlen(main[i]);
        }
    }

    for(i = 0; i < n; i++) //Perulangan for untuk hasil akhir program.
    {   
        leng = strlen(main[i]); //Nilai panjang main[i] dimasukan ke leng untuk menjadi patokan print new line.
        for(j = 0; j < len - strlen(main[i]); j++) //Pengulangan for untuk membuat seluruh string menjadi rata kanan.
        {
            printf(" ");
        }
        for(k = strlen(main[i]) - 1; k >= 0; k--) //Perulangan for untuk menampilkan string dari belakang.
        {
            printf("%c", main[i][k]);
        }
        
        if(i < n - 1) //Fungsi if yang print new line apabila indeks kurang dari nilai n - 1.
        {
            printf("\n");
        }
        
        if(leng > strlen(main[i + 1])) //Fungsi if untuk membuat new line apabila string-nya yang lebih pendek dari string sebelumnya.
        {
            printf("\n");
        }
    }

    return 0;
}