/*Saya Ananda Myzza Marhelio NIM 2100702 mengerjakan evaluasi TP7 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <stdio.h>
#include <string.h>
 
int main()
{
	int i, j, k, l, m; //Deklarasi integer i, j, k, l, m untuk membantu proses pengulangan pada program.
	char main[100]; //Deklarasi char main (kata utama) untuk menampung inputan user dengan jumlah 100 array.
	char side[100]; //Deklarasi char side (kata kunci) untuk menampung inputan user dengan jumlah 100 array.
	
	i = 0; //Inisialisasi i = 0 agar nilai i tidak random.
	//Fungsi do while untuk pengulangan yang berenti di tengah dengan syarat scanfnya di lakukan sekali.
	do
	{
		scanf(" %c", &main[i]); //Meminta inputan user untuk kata utama.
		i++; //Indeks akan bertambah 1 setiap huruf dimasukan agar array selanjutnya dapat masuk ke scanf.
	}while((main[i - 1] >= 97) && (main[i - 1] <= 122)); //Syarat while perulangan yang akan berhenti apabila user menginput character diluar huruf a-z kecil.

	scanf("%s", side); //Meminta inputan user untuk kata kunci.

	main[i] = '\0'; //main[i] yang i nya sudah dijumlahkan pada fungsi do while diatas diberi char 'NULL'.
	side[i] = '\0'; //Karena scanf string pasti diberi 'NULL', tapi karena jaga-jaga saja jadi diberi 'NULL'.

	j = 0; //Inisialisasi j = 0 agar angka yang keluar tidak random.
	k = 0; //Inisialisasi k = 0 agar angka yang keluar tidak random.
	int lenMain = strlen(main); //Deklarasi integer lenMain, yaitu panjang string kata utama.
	int lenSide = strlen(side); //Deklarasi integer lenSide, yaitu panjang string kata kunci.
	for(i = 0; i < lenMain; i++) //Perulangan for yang akan berhenti apabila nilai i kurang dari panjang kata utama.
	{
		if(main[i] == side[0]) //Syarat if apabila kata utama memiliki huruf yang sama dengan kata kunci array pertama.
		{
			for(l = 0; l < strlen(side); l++) //Perulangan for yang akan berhenti apabila nilai l kurang dari panjang kata kunci.
			{								  //Perulangan for ini berguna untuk mengecek 1 atau lebih huruf yang sama (Contohnya mencecek passwordini!as)
				if(main[i + l] == side[l]) //Syarat if apabila kata utama yang indeksnya ditambah oleh 'l' bernilai sama dengan kata kunci array 'l'.
				{
					j++; //Apabila syarat diatas terpenuhi, maka j akan bertambah 1.
				}
			}
		}
		else //Apabila syarat if diatas tidak terpenuhi.
		{
			j = 0; //Maka j akan bernilai 0
		}

		//Fungsi untuk menghilangkan kata kunci di kata utama.
		if(side[j] == '\0') //Syarat if apabila kata kunci array 'J' berisi 'NULL'.
		{
			for(k = i; k < lenMain; k++) //Maka masuk kedalam perulangan for yang inisialisasinya k = i
			{
				main[k] = main[k + lenSide]; //Huruf yang sama akan digantikan oleh huruf dalam array yang ditambahkan panjang kata kunci.
			}
			j = 0; //Inisialisasi j = 0 untuk mereset nilai j.
			i--; //i dikurangi 1 agar pengecekan huruf yang sama tidak melompat.
		}

		if((main[i] < 97) || (main[i] > 122)) //Syarat if apabila di kata utama terdapat inputan character diluar char a-z.
		{
			main[i] = main[i + 1]; //Maka character tersebut di tambah indeks 1, yang nantinya char diluar a-z akan diganti menjadi 'NULL'.
		}
	}

	if(main[0] != '\0') //Syarat untuk menampilkan hasil inputan yang valid.
	{
		printf("Tanpa kunci: %s\n\n", main);

		//Enskripsi 1 yang menampilkan keluaran hasil zigzag.
		printf("Enkripsi 1:\n");
		for(i = strlen(main) - 1; i >= 0 ; i-=2) //Pengulangan zigzag atas dari indeks terakhir kata utama (Karena huruf dibalik) dikurangi 1 agar 'NULL' tidak ikut ter-print.
		{										 //i-=2 agar yang ter-print adalah huruf yang indeksnya ganjil.
			printf("%c", main[i]);
			if(i > 1) //Fungsi if untuk menampilkan ' ' pada enskripsi zigzag bagian atas.
			{		  //Jika tidak memasuki syarat, maka tidak akan menampilkan ' '.
				printf(" ");
			}
		}
		printf("\n");

		for(i = strlen(main) - 2; i >= 0 ; i-=2) //Pengulangan zigzag bawah dari indeks terakhir kata utama dikurangi 2.
		{										 //Agar keluaran yang ter-print adalah huruf yang indeksnya genap.
			printf(" %c", main[i]);
		}
		printf("\n\n");

		//Enkripsi 2 yang menampilkan kumpulkan semua huruf menjadi 1 string
		printf("Enkripsi 2: ");
		for(i = strlen(main) - 1; i >= 0 ; i-=2) //Pengulangan fornya sama seperti di enkripsi 1.
		{
			printf("%c", main[i]);
		}
		for(i = strlen(main) - 2; i >= 0 ; i-=2)
		{
			printf("%c", main[i]);
		}
		printf("\n");
	}
	else if((main[0] < 97) || (main[0] > 122)) //Jika syarat diatas tidak terpenuhi, maka akan masuk ke syarat ini.
	{										   //Syarat yang apabila kata utama pada array ke 0 adalah char diluar huruf a-z. (Fungsi untuk testcase iniiniini!ini dsb.)
		printf("==== Inputan Tidak Valid! ====\n"); //Maka akan keluar hasil inputan tidak valid.
	}
	
  	return 0;
}