/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi UTS dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){

    int n; //Deklarasi integer n
    scanf("%d", &n); //Scanf untuk meng-input nilai n sesuai dengan keinginan user di cmd.

    int baris, kolom; //Deklarasi baris dan kolom untuk membantu pembuatan * yang akan dihasilkan nanti.

    //Baris ke-1 Pola Piringan Bintang
    for(baris = 1; baris <= n; baris++)
    {
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Baris ke-2 Pola Piringan Bintang
    for(baris = 1; baris <= n; baris++)
    {
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= baris - 1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Baris ke-3 Pola Piringan Bintang
    for(baris = 1; baris <= n; baris++)
    {
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n + 1; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Baris ke-4 Pola Piringan Bintang
    for(baris = 1; baris <= n; baris++)
    {
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Baris ke-5 Pola Piringan Bintang
    for(baris = 1; baris <= n; baris++)
    {
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris - 1; kolom++)
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}