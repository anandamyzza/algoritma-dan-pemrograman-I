/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan KUIS 2 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>

int main(){

    char main[901]; //Deklarasi char main dengan jumlah array 901. Char ini yang nanti user input.
    char copy[901]; //Deklarasi char copy dengan jumlah array 901. Char ini berfungsi untuk menyalin char main yang sudah di rubah ganjil-genapnya.
    scanf("%s", main); //Meminta user masukan string.

    char opsi[11]; //Deklarasi char untuk menyimpan string ganjil dan genap.
    scanf("%s", opsi); //Meminta user masukan ganjil dan genap.

    int n; //Variabel n yang merupakan jumlah dari indeks string yang dihitung nanti.
    int i, j, k, l; //Variabel untuk membantu pengulangan for dan penjumlahan nanti.
    scanf("%d", &n); //Meminta nilai n dari user.
    char side[n]; //Deklarasi char side yang arraynya sesuai dengan yang user input, char ini merupakan huruf yang akan dicari di string yang sudah diganti genap-ganjilnya.

    for(i = 0; i < n; i++) //Pengulangan for untuk meminta huruf atau kata yang akan dihitung dari user.
    {
        scanf(" %c", &side[i]);
    }
    side[i] = '\0'; //Indeks paling terakhir diberi '\0'.

    j = 0; //Inisialisasi j = 0 agar nilai yang dihasilkan tidak random.
    if(opsi[0] == 'g' && opsi[1] == 'e' && opsi[2] == 'n' && opsi[3] == 'a' && opsi[4] == 'p') //Kondisi apabila user menginput 'genap'.
    {
        for(i = 1; i < strlen(main); i+=2) //Perulangan untuk print huruf berindeks genap.
        {
            printf("%c", main[i]);
            copy[j] = main[i]; //Meng-copy huruf berindeks genap kedalam variabel char copy.
            j++; //Inkremen j++ agar nilai j berambah. (Nilai j merupakan indeks copy).
        }
    }
    else if(opsi[0] == 'g' && opsi[1] == 'a' && opsi[2] == 'n' && opsi[3] == 'j' && opsi[4] == 'i' && opsi[5] == 'l') //Kondisi apabila user menginput 'ganjil'.
    {
        for(i = 0; i < strlen(main); i+=2) //Perulangan untuk print huruf berindeks ganjil.
        {
            printf("%c", main[i]);
            copy[j] = main[i]; //Meng-copy huruf berindeks ganjil kedalam variabel char copy.
            j++; //Inkremen j++ agar nilai j berambah. (Nilai j merupakan indeks copy).
        }
    }
    copy[j] = '\0'; //Indeks paling terakhir dari copy diberi '\0'.

    l = 0; //Inisialisasi l = 0 agar nilai yang dihasilkan tidak random.
    k = 0; //Inisialisasi k = 0 agar nilai yang dihasilkan tidak random.
    
    //Fungsi untuk mencari huruf yang sama dalam string yang sudah dirubah ganjil-genap.
    for(i = 0; i < strlen(copy); i++)
    {
        if(copy[i] == side[0])
        {
            for(j = 0; j < strlen(side); j++)
            {
                if(copy[i + j] == side[j])
                {
                    k++;
                }
            }
        }
        else
        {
            k = 0;
        }

        if(side[k] == '\0')
        {
            l++;
        }
    }

    printf("\n%d\n", l); //Print hasil jumlah huruf yang sama dalam string yang ganjil-genap sudah dihilangkan.
  
    return 0;
}