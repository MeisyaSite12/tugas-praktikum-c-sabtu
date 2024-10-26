#include <stdio.h>

int main(){
	int jm, jk, lp, hasil;
	
	printf("Masukkan jam masuk ? ");
	scanf("%i", &jm);
	
	printf("Masukkan jam keluar ? ");
	scanf("%i", &jk);
	
	if(jk < jm){
		jk = jk +12;
	}
	
	lp = jk - jm;
	
	if(lp > 2){
	lp = lp - 2;
	hasil = 2000 + (lp*500);
	}
	
	else {
		hasil = 2000;
	}
	
	printf("Maka, total biaya parkir = %i", hasil);
	
	return 0;
}
/*	Note :
	jm = Jam Masuk
	jk = Jam Keluar
	lp = Lama Parkir
*/