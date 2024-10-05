#include <stdio.h>

int main(){
	int alas, tinggi;			//Deklarasi variabel
	float luas, keliling;		//Deklarasi variabel
	
	printf("Masukkan nilai panjang alas? ", alas);
	scanf("%i", &alas);
	
	printf("Masukkan nilai panjang tinggi? ", tinggi);
	scanf("%i", &tinggi);	
	
	luas = (alas*tinggi)/2;			//Rumus perhitungan Luas Segitiga 
	keliling = alas+tinggi;			//Rumus perhitungan Keliling Segitiga
	
	printf("Maka, luas segitiga %.2f cm dan keliling nya %.2f cm", luas, keliling );		//Menampilkan hasil perhitungan
	
	return 0;
}