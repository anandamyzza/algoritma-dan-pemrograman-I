/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

/* Prosedur untuk proses seluruh program. */
void divide(char str[][200], int jam, int menit, int detik)
{
    char strRight[n][200], strLeft[n][200]; // Deklarasi variabel untuk menyimpan penggalan dialog yang dipisah oleh '?'.

    /* Proses untuk menggantikan huruf kapital menjadi huruf kecil */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < strlen(str[i]); j++)
        {
            if(str[i][j] >= 65 && str[i][j] <= 90)
            {
                str[i][j] += 32;
            }
        }
    }

    /* Proses untuk memisahkan penggalan dialog yang dipisah oleh '?' */
    for(i = 0; i < n; i++)
    {
        j = 0; k = 0;
        do{
            strLeft[i][j] = str[i][k];
            j++;
            k++;
        }while(str[i][k] != '?');
        strLeft[i][j] = '\0';

        j = 0; k++;
        do{
            strRight[i][j] = str[i][k];
            j++;
            k++;
        }while(str[i][k] != '\0');
        strRight[i][j] = '\0';
    }

    /* Proses menghilangkan '_' dari penggalan dialog */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < strlen(strLeft[i]); j++)
        {
            if(strLeft[i][j] == '_')
            {
                for(k = j; k < strlen(strLeft[i]); k++)
                {
                    strLeft[i][k] = strLeft[i][k + 1];
                }
                j--;
            }
        }
        for(j = 0; j < strlen(strRight[i]); j++)
        {
            if(strRight[i][j] == '_')
            {
                for(k = j; k < strlen(strRight[i]); k++)
                {
                    strRight[i][k] = strRight[i][k + 1];
                }
                j--;
            }
        }
    }

    /* Proses untuk mengurutkan huruf dari a-z untuk memudahkan proses strcmp */
    char temp[n][200]; // Deklarasi variabel untuk membantu proses pengurutan.
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= strlen(strLeft[i]) - 1; j++)
        {
            for(k = 0; k < strlen(strLeft[i]) - 1; k++)
            {
                if(strLeft[i][j] < strLeft[i][k])
                {
                    // Sorting system untuk pengurutan huruf.
                    temp[i][j] = strLeft[i][j];
                    strLeft[i][j] = strLeft[i][k];
                    strLeft[i][k] = temp[i][j];
                }
            }
        }
        for(j = 0; j <= strlen(strRight[i]) - 1; j++)
        {
            for(k = 0; k < strlen(strRight[i]) - 1; k++)
            {
                if(strRight[i][j] < strRight[i][k])
                {
                    // Sorting system untuk pengurutan huruf.
                    temp[i][j] = strRight[i][j];
                    strRight[i][j] = strRight[i][k];
                    strRight[i][k] = temp[i][j];
                }
            }
        }
        printf("%s & %s\n", strLeft[i], strRight[i]);
    }

    /* Proses untuk membandingkan penggalan dialog kiri dan kanan */
    int sumStr = 0; // Deklarasi variabel untuk menyimpan jumlah kalimat Anagram.
    for(i = 0; i < n; i++)
    {
        if(strcmp(strLeft[i], strRight[i]) == 0) // Menggunakan string compare untuk proses Anagram.
        {
            printf("Anagram!\n");
            sumStr++;
        }
        else
        {
            printf("Bukan Anagram!\n");
        }
    }
    printf("\n");

    /* Proses untuk mencari total durasi film ditambah dengan jumlah kalimat Anagram */
    int durasi = 0;
    durasi = jam * 3600;
    durasi += menit * 60;
    durasi += detik;
    durasi += sumStr;

    /* Proses untuk mencari apakah total durasi film dan jumlah kalimat adalah Palindrom */
    int total, mark;
    int sum = 0;
    total = durasi;
    while(durasi > 0)
    {
        mark = durasi % 10;
        sum = (sum * 10) + mark;
        durasi = durasi / 10;
    }

    // Proses pengeluaran hasil apakah akan lanjut nonton atau tidur.
    if(total == sum)
    {
        printf("Lanjut Nonton\n");
    }
    else
    {
        printf("Tidur\n");
    }
    
}