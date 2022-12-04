/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP10 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

/* Prosedur untuk mencari total nilai yang dimiliki BobaBobi, Wanda, dan Natasha */
void value(char nameSus[][50], int numBobi[], int numWanda[], int numNatasha[], int total[])
{
    // Pengulangan untuk menghitung total nilai dari pertambahan kode angka seluruh karakter.
    for(i = 0; i < 3; i++)
    {
        total[i] = 0; // Inisialisasi awal total nilai = 0;
        
        /* Syarat untuk ketiga karakter */
        if(nameSus[i][0] == 'B')
        {
            // Pengulangan total nilai BobaBobi.
            for(j = 0; j < 4; j++)
            {
                total[i] += numBobi[j];
            }
            total[i] *= 2; // Total yang dikali 2 sesuai dengan soal.
            strcpy(nameSus[i], "Boba dan Bobi"); // Penggantian string dari 'B' ke 'Boba dan Bobi'.
        }
        else if(nameSus[i][0] == 'W')
        {
            // Pengulangan total nilai Wanda.
            for(j = 0; j < 5; j++)
            {
                total[i] += numWanda[j];
            }
            strcpy(nameSus[i], "Wanda"); // Penggantian string dari 'W' ke 'Wanda'.
        }
        else if(nameSus[i][0] == 'N')
        {
            // Pengulangan total nilai Natasha.
            for(j = 0; j < 7; j++)
            {
                total[i] += numNatasha[j];
            }
            strcpy(nameSus[i], "Natasha"); // Penggantian string dari 'N' ke 'Natasha'.
        }
    }
}

/* Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai yang terkecil) */
int orderNum1(char nameSus[][50], int total[])
{
    int temp; // Variabel integer untuk membantu proses pengurutan nilai.
    int shelt; // Variabel untuk menampung total nilai.
    char tempSus[3][50]; // Variabel character untuk membantu proses pengurutan nama.

    /* Pengulangan untuk mengurutkan nilai dari yang terkecil ke yang terbesar */
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(total[i] < total[j])
            {
                // Sorting system untuk pengurutan nilai.
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;
                // Sorting system untuk pengurutan nama.
                strcpy(tempSus[i], nameSus[i]);
                strcpy(nameSus[i], nameSus[j]);
                strcpy(nameSus[j], tempSus[i]);
            }
        }
    }

    // Menampung nilai total indeks ke-0 pada variabel shelt.
    shelt = total[0];
    // Mengembalikan nilai shelt. (Total indeks ke-0).
    return shelt;
}

/* Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai ke-dua) */
int orderNum2(char nameSus[][50], int total[])
{
    int temp; // Variabel integer untuk membantu proses pengurutan nilai.
    int shelt; // Variabel untuk menampung total nilai.
    char tempSus[3][50]; // Variabel character untuk membantu proses pengurutan nama.

    /* Pengulangan untuk mengurutkan nilai dari yang terkecil ke yang terbesar */
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(total[i] < total[j])
            {
                // Sorting system untuk pengurutan nilai.
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;
                // Sorting system untuk pengurutan nama.
                strcpy(tempSus[i], nameSus[i]);
                strcpy(nameSus[i], nameSus[j]);
                strcpy(nameSus[j], tempSus[i]);
            }
        }
    }

    // Menampung nilai total indeks ke-1 pada variabel shelt.
    shelt = total[1];
    // Mengembalikan nilai shelt. (Total indeks ke-1).
    return shelt;
}

/* Fungsi untuk mengurutkan nilai dari tercekil ke yang terbesar. (Mengembalikan nilai yang terbesar) */
int orderNum3(char nameSus[][50], int total[])
{
    int temp; // Variabel integer untuk membantu proses pengurutan nilai.
    int shelt; // Variabel untuk menampung total nilai.
    char tempSus[3][50]; // Variabel character untuk membantu proses pengurutan nama.

    /* Pengulangan untuk mengurutkan nilai dari yang terkecil ke yang terbesar */
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            if(total[i] < total[j])
            {
                // Sorting system untuk pengurutan nilai.
                temp = total[i];
                total[i] = total[j];
                total[j] = temp;
                // Sorting system untuk pengurutan nama.
                strcpy(tempSus[i], nameSus[i]);
                strcpy(nameSus[i], nameSus[j]);
                strcpy(nameSus[j], tempSus[i]);
            }
        }
    }
    
    // Menampung nilai total indeks ke-2 pada variabel shelt.
    shelt = total[2];
    // Mengembalikan nilai shelt. (Total indeks ke-2).
    return shelt;
}

/* Prosedur untuk mengeluarkan hasil pengurutan */
void orderName(char nameSus[][50])
{
    printf("Urutan :\n");
    for(i = 0; i < 3; i++)
    {
        printf("- %s\n", nameSus[i]);
    }
}

/* Prosedur untuk mencari mengeluarkan hasil enskripsi */
void encryptionResult(char nameSus[][50], int numBobi[], int numWanda[], int numNatasha[], int total[])
{
    printf("\nKode Enkripsi :\n");
    /* Pengulangan untuk kode enskripsi */
    for(i = 0; i < 3; i++)
    {
        // Syarat untuk string "Boba dan Bobi".
        if(strcmp(nameSus[i], "Boba dan Bobi") == 0)
        {
            // Mengganti string "Boba dan Bobi" menjadi "BobaBobi".
            strcpy(nameSus[i], "BobaBobi");
            // Pertambahan huruf depan ASCII Boba "B".
            if(numBobi[0] > 26)
            {
                numBobi[0] %= 26;
            }
            nameSus[i][0] += numBobi[0];
            if(nameSus[i][0] > 90) // Syarat apabila nilai ASCII melebihi Z (ASCII Z = 90).
            {
                nameSus[i][0] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet A-Z.
            }
            // Pertambahan huruf belakang ASCII Boba "oba".
            for(j = 1; j < 4; j++)
            {
                if(numBobi[j] > 26)
                {
                    numBobi[j] %= 26;
                }
                if(nameSus[i][j] + numBobi[j] > 122) // Syarat apabila nilai ASCII melebihi z (ASCII z = 122).
                {
                    nameSus[i][j] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet a-z.
                }
                nameSus[i][j] += numBobi[j];
            }

            // Pertambahan huruf depan ASCII Bobi "B".
            if(numBobi[0] > 26)
            {
                numBobi[0] %= 26;
            }
            nameSus[i][4] += numBobi[0];
            if(nameSus[i][4] > 90) // Syarat apabila nilai ASCII melebihi Z (ASCII Z = 90).
            {
                nameSus[i][4] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet A-Z.
            }
            // Pertambahan huruf belakang ASCII Bobi "obi".
            k = 1; // Inisialisasi  k=1 agar kembali ke nilai kode angka ke-2 BobaBobi.
            for(j = 5; j < 8; j++)
            {
                if(numBobi[j] > 26)
                {
                    numBobi[j] %= 26;
                }
                if(nameSus[i][j] + numBobi[k] > 122) // Syarat apabila nilai ASCII melebihi z (ASCII z = 122).
                {
                    nameSus[i][j] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet a-z.
                }
                nameSus[i][j] += numBobi[k];
                k++;
            }
        }
        // Syarat untuk string "Wanda".
        else if(strcmp(nameSus[i], "Wanda") == 0)
        {
            // Pertambahan huruf depan ASCII Wanda "W".
            if(numWanda[0] > 26)
            {
                numWanda[0] %= 26;
            }
            nameSus[i][0] += numWanda[0];
            if(nameSus[i][0] > 90) // Syarat apabila nilai ASCII melebihi Z (ASCII Z = 90).
            {
                nameSus[i][0] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet A-Z.
            }
            // Pertambahan huruf belakang ASCII Wanda "anda".
            for(j = 1; j < strlen(nameSus[i]); j++)
            {
                if(numWanda[j] > 26)
                {
                    numWanda[j] %= 26;
                }
                if(nameSus[i][j] + numWanda[j] > 122) // Syarat apabila nilai ASCII melebihi z (ASCII z = 122).
                {
                    nameSus[i][j] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet a-z.
                }
                nameSus[i][j] += numWanda[j];
            }
        }
        // Syarat untuk string "Natasha".
        else if(strcmp(nameSus[i], "Natasha") == 0)
        {
            // Pertambahan huruf depan ASCII Natasha "N".
            if(numNatasha[0] > 26)
            {
                numNatasha[0] %= 26;
            }
            nameSus[i][0] += numNatasha[0];
            if(nameSus[i][0] > 90) // Syarat apabila nilai ASCII melebihi Z (ASCII Z = 90).
            {
                nameSus[i][0] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet A-Z.
            }
            // Pertambahan huruf belakang ASCII Natasha "atasha".
            for(j = 1; j < strlen(nameSus[i]); j++)
            {
                if(numNatasha[j] > 26)
                {
                    numNatasha[j] %= 26;
                }
                if(nameSus[i][j] + numNatasha[j]> 122) // Syarat apabila nilai ASCII melebihi z (ASCII z = 122).
                {
                    nameSus[i][j] -= 26; // Dikurangi 26 agar kembali ke dalam Alphabet a-z.
                }
                nameSus[i][j] += numNatasha[j];
            }
        }
        // Mengeluarkan hasil enskripsi.
        printf("%s", nameSus[i]);
    }
    printf("\n");
}