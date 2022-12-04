/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP5 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
int main(){
    int n, m; //Deklarasi Integer n kartu huruf dan m kartu angka yang digunakan untuk menghitung jumlah array.
    int q; //Deklarasi Integer q untuk digunakan di fungsi for dan array.
    
    //Scanf untuk input nilai n kartu huruf untuk array yang user inginkan.
    scanf("%d", &n);
    //Deklarasi char untuk kartu huruf array yang memiliki nilai n. Nilai n tergantung oleh inputan user.
    char cardLet[n];
    
    //Fungsi for untuk mengulangi scanf yang menginput nilai array sebanyak nilai n yang di input user.
    for(q = 0; q < n; q++)
    {
        scanf(" %c", &cardLet[q]);
    }

    //Scanf untuk input nilai m kartu angka untuk array yang user inginkan.
    scanf("%d", &m);
    //Deklarasi char untuk kartu angka array yang memiliki nilai m. Nilai m tergantung oleh inputan user.
    int cardNum[m];

    //Fungsi for untuk mengulangi scanf yang menginput nilai array sebanyak nilai m yang di input user.
    for(q = 0; q < m; q++)
    {
        scanf("%d", &cardNum[q]);
    }

    //Deklarasi integer total huruf dan total angka yang dimulai dari 0 sehingga nilai tidak negatif saat dijumlahkan.
    int totalLet = 0;
    int totalNum = 0;

    //Syarat apabila jumlah nilai n sama dengan nilai m seperti yang soal jelaskan.
    if(n == m)
    {
        //Menunjukan hasil dari kedua array di kotak pertama [0] agar hasil printf kartu selang-seling tidak ada spasi diakhir.
        printf("%c", cardLet[0]);
        printf(" %d", cardNum[0]);
        
        //Fungsi untuk looping hasil kartu huruf dan angka selang-seling yang user input.
        for(q = 1; q < n; q++) //q = 1 karena q = 0 sudah di keluarkan hasilnya sebelumnya.
        {
            printf(" %c", cardLet[q]);
            printf(" %d", cardNum[q]);
        }
        //Menggunakan \n diluar for agar tidak ter-looping saat proses mengeluarkan hasil.
        printf("\n");

        //Fungsi loop untuk mendeteksi berapakah nilai dan jumlah dari kartu huruf yang user input di awal.
        for(q = 0; q < n; q++)
        {
            if(cardLet[q] >= 'A' && cardLet[q] <= 'I')
            {
                cardLet[q] -= 64;
                totalLet += cardLet[q];
            }
            else if(cardLet[q] >= 'J' && cardLet[q] <= 'R')
            {
                cardLet[q] -= 73;
                totalLet += cardLet[q];
            }
            else if(cardLet[q] >= 'S' && cardLet[q] <= 'Z')
            {
                cardLet[q] -= 82;
                totalLet += cardLet[q];
            }
        }
        
        //Fungsi loop untuk menjumlahkan inputan nilai kartu angka yang user input di awal.
        for(q = 0; q < m; q++)
        {
            totalNum += cardNum[q];
        }

        if(totalNum == totalLet) //Syarat apabila total nilai dari kartu Techi dan Ellona berjumlah sama.
        {
            printf("Nilai kartu mereka sama,\n");
            printf("Ada rasa suka di antara mereka.\n");
        }
        else //Syarat apabila total nilai dari kartu Techi dan Ellona berjumlah berbeda.
        {
            printf("Nilai kartu mereka tidak sama,\n");
            printf("Mereka cukup berteman baik saja.\n");
        }
    }
    else //Syarat apabila jumlah n (kartu Techi) dan m (kartu Ellona) tidak sama.
    {
        printf("Jumlah kartu mereka tidak sama,\n");
        printf("Pertemanan mereka tidak akan serasi.\n");
    }
    return 0;
}