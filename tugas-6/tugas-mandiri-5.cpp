#include <stdio.h>

int main(){
	int i;
	long N=1000000;	
	float bunga = 0.02;
	
	for(i=1; i<=10; i++){
		N=N*bunga+N;
	}

	printf("Maka, jumlah uang setelah 10 bulan : Rp%d", N);
	
	return 0;
}