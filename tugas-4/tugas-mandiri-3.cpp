#include <stdio.h>

int main(){
	int N;
	
	printf("Masukkan nilai? ");
	scanf("%i", &N);
	
	if(N>50){
		N = N - 25;
	}
	
	N = N + 10;
	
	printf("Hasil = %i", N);
}

/*
Hasil dari input bilangan berikut :
a. 30 = 40
b. 50 = 60
c. 65 = 50
*/