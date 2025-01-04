#include <stdio.h>

int main(){
	int N[11]={12,17,10,5,15,25,11,7,25,16,19};
	int i,search;
	int a=0;
	
	printf("Masukkan bilangan integer: ");
	scanf("%i", &i);
	
	for(int z=0; z<11; z++){
		printf("%4i", N[z]);
	}
	
	for(int z=0;z<11;z++){
		if(N[z]==i){
			if(!search){
				printf("\nADA\nLokasi bilangan yang sama: ");
			}
			printf("%2i", z);
			search=1;
		}
	}
	
	if(!search){
		printf("TIDAK ADA\n");
	}
	
	return 0;
}