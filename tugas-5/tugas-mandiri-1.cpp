#include <stdio.h>

int main(){
	int jm, jk, hasil;
	
	printf("Masukkan jam masuk ? ");
	scanf("%i", &jm);
	
	printf("Masukkan jam keluar ? ");
	scanf("%i", &jk);
	
	if(jk < jm){
		jk = jk +12;
	}
	
	hasil = jk - jm;
	
	printf("Maka, lama bekerja = %i jam", hasil);
	
	return 0;
}
/*	Note :
	jm = Jam Masuk
	jk = Jam Keluar
*/