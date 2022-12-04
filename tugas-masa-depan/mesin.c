/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "header.h"

/* Prosedur untuk memisahkan satuan, puluhan, dan ratusan. Serta mencari Indeks ratusan dan puluhan. */
void unit(char main[], int ascii[], int divide[], int indeks[])
{
    j = 0; // Inisialisasi
    indeks[-1] = 0; // Inisialisasi indeks di indeks[-1] untuk membantu proses spasi.
    for(i = 0; i < strlen(main); i++)
    {
        indeks[i] = 0; // Inisialisasi agar angka tidak random.
        // Syarat untuk pemisahan puluhan.
        if(ascii[i] >= 65 && ascii[i] <= 90 || ascii[i] >= 97 && ascii[i] <= 99)
        {
            divide[j] = ascii[i] / 10; // Pemisahan satuan dari puluhan, contohnya 65 / 10 = 6.5 (Menjadi 6 karena integer).
            j++; // Iterasi indeks divide[j];
            divide[j] = ascii[i] - divide[j-1] * 10; // Pemisahan puluhan, contohnya 65 - 6 * 10 = 5.
            j++; // Iterasi indeks divide[j];
            indeks[i] = j; // Nilai iterasi j ditampung kedalam variabel indeks. Nilai j di syarat ini pasti bertambah 2.
        }
        // Syarat untuk pemisahan ratusan.
        else if(ascii[i] >= 100 && ascii[i] <= 122)
        {
            divide[j] = ascii[i] / 100; // Pemisahan satuan dari ratusan, contohnya 117 / 100 = 1.17 (Menjadi 1 karena integer).
            j++; // Iterasi indeks divide[j];
            divide[j] = (ascii[i] - divide[j-1] * 100) / 10; // Pemisahan puluhan dari ratusan, contohnya (117 - 1 * 100) / 10 = 1.7 (Menjadi 1 karena integer).
            j++; // Iterasi indeks divide[j];
            divide[j] = ascii[i] - divide[j-2] * 100 - divide[j-1] * 10; // Pemisahan ratusan, contohnya 117 - 1 * 100 - 1 * 10 = 7.
            j++; // Iterasi indeks divide[j];
            indeks[i] = j; // Nilai iterasi j ditampung kedalam variabel indeks. Nilai j di syarat ini pasti bertambah 3.
        }
    }
}

/* Fungsi untuk mencari nilai panjang dari array of integer ASCII inputan user. */
int len(char main[], int ascii[])
{
    int panjang = 0; // Deklarasi dan inisialisasi panjang = 0.
    // Perulangannya sama seperti prosedur 'void unit'.
    for(i = 0; i < strlen(main); i++)
    {
        if(ascii[i] >= 65 && ascii[i] <= 90 || ascii[i] >= 97 && ascii[i] <= 99)
        {
            panjang += 2; // Apabila ASCII puluhan, maka panjang bertambah 2.
        }
        else if(ascii[i] >= 100 && ascii[i] <= 122)
        {
            panjang += 3; // Apabila ASCII ratusan, maka panjang bertambah 3.
        }
    }

    // Mengembalikan nilai panjang.
    return panjang;
}

/* Prosedur untuk mengeluarkan hasil print dari baris ke-1 pola ASCII. */
void lineA(char main[], int divide[], int indeks[], int batas)
{
    /* Perulangan untuk membuat pola dengan tebal yang user inginkan. */
    for(k = 0; k < n; k++) // Perulangan untuk baris.
    {
        for(i = 0; i < strlen(main); i++) // Perulangan untuk proses print spasi.
        {
            for(j = indeks[i-1]; j < indeks[i]; j++) // Perulangan untuk proses print angka ascii yang sudah dipisah.
            {                                       // Perulangan akan berhenti setiap nilai j sudah mencapai indeks[i].
                /* Karena di baris ke-1, angka 0, 2, 5, 6, 8, dan 9 memiliki pola yang sama, maka syaratnya digabung. */
                if(divide[j] == 0 || divide[j] == 2 || divide[j] == 5
                || divide[j] == 6 || divide[j] == 8 || divide[j] == 9)
                {
                    // Proses print pola untuk angka 0, 2, 5, 6, 8, dan 9.
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    // Jika nilai j kurang dari nilai batas yang dikurangi 1, maka pola spasi akan di print.
                    // Syarat ini dibuat agar jika angka berada di akhir indeks tidak memiliki spasi.
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 1 di baris ke-1. */
                else if(divide[j] == 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 3 di baris ke-1. */
                else if(divide[j] == 3)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    // Jika nilai j kurang dari nilai batas yang dikurangi 1, maka pola spasi akan di print.
                    // Syarat ini dibuat agar jika angka 3 berada di akhir indeks tidak memiliki spasi.
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 4 di baris ke-1. */
                else if(divide[j] == 4)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 7 di baris ke-1. */
                else if(divide[j] == 7)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    // Jika nilai j kurang dari nilai batas yang dikurangi 1, maka pola spasi akan di print.
                    // Syarat ini dibuat agar jika angka 7 berada di akhir indeks tidak memiliki spasi.
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }

                /* Syarat untuk print spasi selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali ketebalan. */
                if(j == indeks[i] - 1) // Jika nilai j sudah sama dengan nilai indeks[i] - 1.
                {
                    if(j < batas - 1) // Dan jika nilai j kurang dari batas array of integer dikurangi 1.
                    {
                        // Maka 2 spasi akan di print.
                        for(l = 0; l < n; l++)
                        {
                            printf("  ");
                        }
                    }
                }
                /* Syarat untuk print spasi selisih dari setiap angka dalam satu ASCII dari 1 huruf adalah 1 spasi dikali ketebalan. */
                else if(j < indeks[i] - 1) // Jika nilai j kurang dari nilai indeks[i] - 1.
                {
                    // Maka 1 spasi akan di print.
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                }

                /* Syarat untuk print newline. */
                if(j == batas - 1) // Newline tidak akan di print apabila nilai j belum sama dengan nilai batas array of integer dikurangi 1.
                {
                    printf("\n");
                }
            }
        }
    }   
}

// Note:
// Prosedur selanjutnya memiliki proses yang sama dengan prosedur baris pertama.
// Yang berbeda adalah syarat untuk print pola angka saja.
// Untuk print 1 spasi setiap angka dan 2 spasi setiap nilai ASCII, tetap memiliki algoritma yang sama.

/* Prosedur untuk mengeluarkan hasil print dari baris ke-2 pola ASCII. */
void lineB(char main[], int divide[], int indeks[], int batas)
{
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < strlen(main); i++)
        {
            for(j = indeks[i-1]; j < indeks[i]; j++)
            {
                /* Proses print pola untuk angka 0, 4, 8, dan 9 di baris ke-2. */
                if(divide[j] == 0 || divide[j] == 4 || divide[j] == 8 || divide[j] == 9)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    
                }
                /* Proses print pola untuk angka 1 di baris ke-2. */
                else if(divide[j] == 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 2 di baris ke-2. */
                else if(divide[j] == 2)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 3 di baris ke-2. */
                else if(divide[j] == 3)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 5 dan 6 di baris ke-2. */
                else if(divide[j] == 5 || divide[j] == 6)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    /* Syarat print untuk 2 kolom kosong yang diisi dengan spasi untuk pola angka 5 dan 6 apabila
                    nilai j kurang dari batas yang dikurangi 1 dan 2 (Untuk yang dikurangi 2, syarat <=) */
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                    if(j <= batas - 2)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 7 di baris ke-2. */
                else if(divide[j] == 7)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }

                /* Syarat untuk print spasi selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali ketebalan. */
                if(j == indeks[i] - 1)
                {
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf("  ");
                        }
                    }
                }
                /* Syarat untuk print spasi selisih dari setiap angka dalam satu ASCII dari 1 huruf adalah 1 spasi dikali ketebalan. */
                else if(j < indeks[i] - 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                }

                /* Syarat untuk print newline. */
                if(j == batas - 1)
                {
                    printf("\n");
                }
            }
        }
    }
}

/* Prosedur untuk mengeluarkan hasil print dari baris ke-3 pola ASCII. */
void lineC(char main[], int divide[], int indeks[], int batas)
{
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < strlen(main); i++)
        {
            for(j = indeks[i-1]; j < indeks[i]; j++)
            {
                /* Proses print pola untuk angka 0 di baris ke-3. */
                if(divide[j] == 0)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    
                }
                /* Proses print pola untuk angka 1 di baris ke-3. */
                else if(divide[j] == 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 2, 4, 5, 6, 8, dan 9 di baris ke-3. */
                else if(divide[j] == 2 || divide[j] == 4 || divide[j] == 5 || divide[j] == 6 || divide[j] == 8 || divide[j] == 9)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 2 di baris ke-3. */
                else if(divide[j] == 3)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 7 di baris ke-3. */
                else if(divide[j] == 7)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }

                /* Syarat untuk print spasi selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali ketebalan. */
                if(j == indeks[i] - 1)
                {
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf("  ");
                        }
                    }
                }
                /* Syarat untuk print spasi selisih dari setiap angka dalam satu ASCII dari 1 huruf adalah 1 spasi dikali ketebalan. */
                else if(j < indeks[i] - 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                }

                /* Syarat untuk print newline. */
                if(j == batas - 1)
                {
                    printf("\n");
                }
            }
        }
    }
}

/* Prosedur untuk mengeluarkan hasil print dari baris ke-4 pola ASCII. */
void lineD(char main[], int divide[], int indeks[], int batas)
{
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < strlen(main); i++)
        {
            for(j = indeks[i-1]; j < indeks[i]; j++)
            {
                /* Proses print pola untuk angka 0 di baris ke-4. */
                if(divide[j] == 0)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 1 di baris ke-4. */
                else if(divide[j] == 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 2 di baris ke-4. */
                else if(divide[j] == 2)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    /* Syarat print untuk 2 kolom kosong sebelum nilai j mencapai kedua syarat */
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                    if(j <= batas - 2)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 3 di baris ke-4. */
                else if(divide[j] == 3)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 4, 5, 7, dan 9 di baris ke-4. */
                else if(divide[j] == 4 || divide[j] == 5 || divide[j] == 7 || divide[j] == 9)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 6 dan 8 di baris ke-4. */
                else if(divide[j] == 6 || divide[j] == 8)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }

                /* Syarat untuk print spasi selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali ketebalan. */
                if(j == indeks[i] - 1)
                {
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf("  ");
                        }
                    }
                }
                /* Syarat untuk print spasi selisih dari setiap angka dalam satu ASCII dari 1 huruf adalah 1 spasi dikali ketebalan. */
                else if(j < indeks[i] - 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                }

                /* Syarat untuk print newline. */
                if(j == batas - 1)
                {
                    printf("\n");
                }
            }
        }
    }
}

/* Prosedur untuk mengeluarkan hasil print dari baris ke-5 pola ASCII. */
void lineE(char main[], int divide[], int indeks[], int batas)
{
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < strlen(main); i++)
        {
            for(j = indeks[i-1]; j < indeks[i]; j++)
            {
                /* Proses print pola untuk angka 0, 2, 5, 6, 8, dan 9 di baris ke-5. */
                if(divide[j] == 0 || divide[j] == 2 || divide[j] == 5 || divide[j] == 6 || divide[j] == 8 || divide[j] == 9)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 1 di baris ke-5. */
                else if(divide[j] == 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }
                /* Proses print pola untuk angka 3 di baris ke-5. */
                else if(divide[j] == 3)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf(" ");
                        }
                    }
                }
                /* Proses print pola untuk angka 4 dan 7 di baris ke-5. */
                else if(divide[j] == 4 || divide[j] == 7)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                    for(l = 0; l < n; l++)
                    {
                        printf("B");
                    }
                }

                /* Syarat untuk print spasi selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali ketebalan. */
                if(j == indeks[i] - 1)
                {
                    if(j < batas - 1)
                    {
                        for(l = 0; l < n; l++)
                        {
                            printf("  ");
                        }
                    }
                }
                /* Syarat untuk print spasi selisih dari setiap angka dalam satu ASCII dari 1 huruf adalah 1 spasi dikali ketebalan. */
                else if(j < indeks[i] - 1)
                {
                    for(l = 0; l < n; l++)
                    {
                        printf(" ");
                    }
                }

                /* Syarat untuk print newline. */
                if(j == batas - 1)
                {
                    printf("\n");
                }
            }
        }
    }
}