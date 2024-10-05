#include <stdio.h>

int main(){
	float c, f, r; 		//Deklarasi variabel
	
	printf("Masukkan nilai suhu Celcius? ", c);
	scanf("%f", &c);
	
	f = (1.8*c)+32;			//Rumus perhitungan Celcius -> Farhenheit
	r = (0.8*c);			//Rumus perhitungan Celcius -> Reamur
	
	printf("Maka, nilai suhu menjadi  %.2f F dan %.2f R", f, r ); 	//Menampilkan hasil perhitungan
	
	return 0;
}