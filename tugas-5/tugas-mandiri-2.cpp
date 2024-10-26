#include <stdio.h>

int main(){
	char jenis, clear;
	char persen = '%';
	int kode, harga, diskon, hasil;
	
	printf("Kode  = ");
	scanf("%i", &kode);
	
	clear=getchar();
	printf("Jenis (A,B,C) = ");
	jenis = getchar();
	
	printf("Harga = ");
	scanf("%i", &harga);	
	
	if(jenis == 'A'){
		diskon = 10;
	}
	else if (jenis == 'B'){
		diskon = 15;
	}
	else if(jenis == 'C'){
		diskon = 20;
	}
	
	hasil = (harga * diskon)/100;
	hasil = harga - hasil;
	
	printf("Jenis barang %c mendapat discount = %i%c, Harga setelah didiskon = %i ", jenis, diskon, persen, hasil);
	
	return 0;
}