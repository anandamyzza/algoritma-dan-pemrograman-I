/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP8 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int main(){

    char main[100]; //Char main yang berfungsi untuk menyimpan string kunci.
    int sumMain, totalMain; //Int sumMain yang berfungsi untuk membantu menghitung nilai ASCII string kunci, totalMain berfungsi untuk menyimpan hasil akhir dari nilai k.
    int sumSide; //Int sumSide yang berfungsi untuk membantu menghitung nilai ASCII dari string folder.
    scanf("%s", main); //Meminta inputan user untuk string kunci.

    int n, i, j, k, l; //Integer variabel untuk membantu proses pengulangan
    scanf("%d", &n); //Meminta inputan user untuk jumlah string folder.

    char side[n][100]; //Char side dengan String 2 dimensi, char ini berfungsi untuk menyimpan string folder yang user input.
    char corner[n][100]; //Char corner yang berfungsi untuk menyimpan string folder sesudah dihilangkan '*' dan sebelum dideskripsi.
    char len[n][100]; //Char len yang berfungsi untuk menyimpan string folder yang user input di awal untuk menyimpan panjang awal string folder.

    //Scanf inputan string folder sesuai yang user inginkan
    for(i = 0; i < n; i++)
    {
        scanf("%s", side[i]);
    }

    //Fungsi untuk mencari nilai k.
    sumMain = 0; //Inisialisasi sumMain = 0 agar nilai yang dihasilkan tidak random.
    totalMain = 0; //Inisialisasi totalMain = 0 agar nilai yang dihasilkan tidak random.
    for(i = 0; i < strlen(main); i++) //Fungsi pengulangan untuk menjumlahkan nilai ASCII dalam string kunci.
    {
        sumMain += main[i];
    }
    totalMain = sumMain % 26; //Nilai akhir sumMain akan di modulus 26 dan hasilnya disimpan di totalMain, hasil tersebut merupakan nilai k.

    //Pengulangan for untuk men-copy string folder yang belum dirubah kedalam string len[i].
    for(i = 0; i < n; i++)
    {
        strcpy(len[i], side[i]);
    }

    //Fungsi untuk menghilangkan '*' dalam string folder yang user input.
    k = 0; //Inisialisasi k = 0 agar nilai yang dihasilkan tidak random.
    for(i = 0; i < n; i++)
    {   //Fungsi ini kurang lebih mirip seperti di TP7.
        for(j = 0; j < strlen(side[i]); j++)
        {
            if(side[i][j] == '*')
            {
                for(k = j; k < strlen(side[i]); k++)
                {
                    side[i][k] = side[i][k + 1];
                }
                j--;
            }
        }
    }
    
    //Pengulangan for untuk men-copy string folder yang '*'-nya sudah dihilangkan kedalam string corner[i], corner[i] digunakan untuk keluaran program nanti.
    for(i = 0; i < n; i++)
    {
        strcpy(corner[i], side[i]);
    }

    //String folder yang '*'-nya sudah dihilangkan, akan dikurangi nilai ASCII-nya oleh nilai k (totalMain) dalam pengulangan for.
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < strlen(side[i]); j++)
        {   //Character yang dikurangi nilai k hanya terbatas pada char A-Z dan a-z.
            if(side[i][j] >= 65 && side[i][j] <= 90) //If dengan syarat apabila dalam string nya terdapat huruf A-Z.
            {
                side[i][j] -= totalMain; //Maka akan dikurangi oleh nilai k.
                if(side[i][j] < 65) //Jika nilai ASCII setelah dikurangi, kurang dari 65 (Nilai ASCII 'A')
                {
                    side[i][j] += 26; //Maka char tersebut ditambah 26, yang nantinya akan kembali dari belakang (dari 'X').
                }
            }
            else if(side[i][j] >= 97 && side[i][j] <= 122) //Else if dengan syarat apabila dalam string nya terdapat huruf a-z.
            {
                side[i][j] -= totalMain; //Maka akan dikurangi oleh nilai k.
                if(side[i][j] < 97) //Jika nilai ASCII setelah dikurangi, kurang dari 97 (Nilai ASCII 'a')
                {
                    side[i][j] += 26; //Maka char tersebut ditambah 26, yang nantinya akan kembali dari belakang (dari 'x').
                }
            }
        }
    }

    //Fungsi pengulangan untuk menghasilkan keluaran pertama (hasil deteksi virus).
    printf(">> Deteksi Virus <<\n");
    for(i = 0; i < n; i++)
    {   //Inisialisasi sumSide = 0 agar nilai yang dihasilkan tidak random.
        sumSide = 0; //Inisialisasi didalam for agar nilai ter-reset setiap memasuki array of string dengan indeks yang berbeda.
        for(j = 0; j < strlen(side[i]); j++) //Fungsi pengulangan untuk menjumlahkan nilai ASCII dari string per indeks.
        {
            sumSide += side[i][j];
        }

        if(sumSide % 2 == 0) //If dengan syarat apabila total ASCII dari string tersebut genap.
        {
            for(l = 0; l < strlen(len) - strlen(side[i]); l++) //Maka string tersebut akan diposisikan rata kanan.
            {
                printf(" ");
            }
        } //Apabila hasilnya ganjil, maka tidak akan terjadi apa-apa (String rata kiri).

        for(j = 0; j < strlen(side[i]); j++) //Pengulangan untuk mengeluarkan hasil akhir string folder setelah dihilangkan '*' dan dikurangi k (Hasil akhir string folder).
        {
            printf("%c", side[i][j]);
        }
        printf("\n");
    }

    //Fungsi pengulangan untuk menghasilkan keluaran kedua (hasil path directory asli).
    printf("\n>> Path Directory Asli <<\n");
    for(i = 0; i < n; i++)
    {
        printf("%s", side[i]); //Mengeluarkan hasil string folder yang diberi sekat '\'. 
        if(i < n - 1) //Sekat tersebut tidak akan diprint apabila nilai 'i' sudah mencapai 'n - 1' atau diakhir dari string.
        {
            printf("\\");
        }
    }

    //Fungsi pengulangan untuk menghasilkan keluaran ketiga (hasil directory sebelum dan sesudah didekripsi).
    printf("\n\n>> Kamus <<\n");
    for(i = 0; i < n; i++)
    {
        printf("%d. ", i + 1); //Printf nomor sesuai indeks.
        printf("[%s] -> [%s]", corner[i], side[i]); //hasil directory sebelum dan sesudah didekripsi.
        printf("\n");
    }

    return 0;
}