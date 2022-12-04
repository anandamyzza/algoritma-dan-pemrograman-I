/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP4 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){

    char huruf; //........................//Deklarasi char huruf.
    int n; //.............................//Deklarasi integer n.
    scanf(" %c %d", &huruf, &n); //.......//Scanf untuk meng-input nilai huruf dan n sesuai dengan soal.

    int baris, kolom; //..................//Deklarasi baris dan kolom untuk menentukan berapa * yang akan dihasilkan nanti.
    int genap, ganjil; //.................//Deklarasi genap dan ganjil untuk mengetahui apa jenis makanan yang dibutuhkan Kumara.
    ganjil = 1; //........................//Nilai ganjil menjadi 1 agar ganjil diawali dengan nomor 1.
    genap = 0; //.........................//Nilai genap menjadi 0 agar genap diawali dengan nomor 0.

    for(baris = 1; baris <= n; baris++) //...............................//Baris ke-1 for untuk membuat telinga Kumara.
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
        for(kolom = 1; kolom <= baris; kolom++)  //=========//Telinga kiri Kumara.
        {
            printf("*");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
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
        for(kolom = 1; kolom <= baris; kolom++) //=========//Telinga kanan Kumara.
        {
            printf("*");
        }
        printf("\n");
    }

    for(baris = 2; baris <= n; baris++) //...............................//Baris ke-2 for untuk membuat ekor atas dan dahi Kumara.
    {
        for(kolom = 1; kolom <= n; kolom++) //=============//Buntut atas.
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
        for(kolom = 1; kolom <= n; kolom++) //=============//Dahi (Seterusnya).
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
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(baris = 1; baris <= 1; baris++) //...............................//Baris ke-3 for untuk membuat mata bagian atas dekat dahi Kumara.
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
        printf("\n");
    }

    for(baris = 1; baris <= 1; baris++) //...............................//Baris ke-4 for untuk membuat mata bagian bawah dekat dagu Kumara.
    {
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
            printf("*");
        }
        printf("\n");
    }

    for(baris = 2; baris <= n; baris++) //...............................//Baris ke-5 for untuk membuat ekor bawah dan dagu Kumara.
    {
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
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(baris = 1; baris <= n; baris++) //...............................//Baris ke-6 for untuk membuat badan Kumara dan mangkuk bagian atas.
    {
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
        if((huruf == 'a') || (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o')) //If untuk menentukan apakah inputan yang di input adalah huruf vokal.
        {
            for(kolom = 1; kolom <= n; kolom++) //...//For untuk membuat looping makanan ganjil Kumara.
            {
                if(ganjil <= 9) //===================//If untuk mendeteksi apakah angka ganjilnya kurang dari atau sama dengan 9.
                {
                    printf("%d", ganjil); //=========//Hasil keluaran ganjil yang nilainya kurang dari atau sama dengan 9.
                    ganjil += 2; //==================//Nilai ganjil ditambahkan 2 agar nilainya ganjil dan positif.
                }
                else //==============================//Else jika nilai ganjil sudah lebih dari 9.
                {
                    ganjil = ganjil%2; //============//Nilai ganjil yang lebih dari 9 masuk else dan di modulus 2.
                    printf("%d", ganjil); //=========//Hasil dari nilai sisa ganjil yang di modulus 2 sebelumnya di print.
                    ganjil += 2; //==================//Nilai ganjil ditambahkan 2 agar nilainya ganjil dan positif.
                }
            } //=====================================//Looping ulang menuju for atas untuk memunculkan angka sesuai besar mangkuk Kumara.
        }
        else //......................................//Else untuk menentukan jika huruf yang masuk tidak lolos if huruf vokal, sehingga yang terdeteksi adalah huruf konsonan.
        {
            for(kolom = 1; kolom <= n; kolom++) //...//For untuk membuat looping makanan genap Kumara.
            {
                if(genap < 9) //=====================//If untuk mendeteksi apakah angka genapnya kurang 9 (Karena angka genap yang harus masuk dari 0 <= genap <= 8).
                {
                    printf("%d", genap); //==========//Hasil keluaran genap yang nilainya kurang dari 9.
                    genap += 2; //===================//Nilai genap ditambahkan 2 agar nilainya genap dan positif.
                }
                else //==============================//Else jika nilai genap sudah lebih dari 9.
                {
                    genap = genap%2; //==============//Nilai genap yang lebih dari 9 masuk else dan di modulus 2.
                    printf("%d", genap); //==========//Hasil dari nilai sisa genap yang di modulus 2 sebelumnya di print.
                    genap += 2; //===================//Nilai genap ditambahkan 2 agar nilainya genap dan positif.
                }
            } //======================================//Looping ulang menuju for atas untuk memunculkan angka sesuai besar mangkuk Kumara.
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(baris = 1; baris <= n; baris++) //...............................//Baris ke-7 for untuk membuat kaki Kumara dan mangkuk bagian bawah.
    {
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
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
        for(kolom = 1; kolom <= baris; kolom++) //========//Bagian bawah mangkuk
        {
            printf(" ");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf("*");
        }
        for(kolom = 1; kolom <= n; kolom++)
        {
            printf("*");
        }
        for(kolom = baris; kolom <= n - 1; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}