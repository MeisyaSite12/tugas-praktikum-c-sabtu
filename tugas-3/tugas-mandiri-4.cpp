#include <stdio.h>

int main(){
	int a;		// Deklarasi variabel 
	
	printf("Masukkan nilai a? ", a);
	scanf("%i", &a);
	
	if(a%2 == 0){				// Seleksi data nilai a
		printf("GENAP");
	}
	
	else {
		printf("GANJIL");
	}
	
	return 0;
}