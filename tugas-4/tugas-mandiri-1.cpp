#include <stdio.h>

int main(){
	int x;		
	
	printf("Masukkan nilai bilangan ? ");
	scanf("%i", &x);
	
	if(x % 2 == 0){
		printf("GENAP");
	}
	
	else {printf("GANJIL");}
	
	return 0;
}