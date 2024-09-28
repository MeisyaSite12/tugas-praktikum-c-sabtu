#include <stdio.h>

#define alas	8	//data nilai alas pada segitiga
#define tinggi	5	//data nilai tinggi pada segitiga

int main()
{
	int hasil;	//Deklarasi variabel
	
	hasil = (alas*tinggi)/2;	//Rumus luas segitiga
	
	printf("Hasil luas segitiga adalah %i cm", hasil);	//menampilkan hasil perhitungan rumus
	
	return 0;
}