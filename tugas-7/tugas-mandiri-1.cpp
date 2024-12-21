#include <stdio.h>

main(){
	int nilai[11];
	int i;
	
	printf("Input 10 Nilai Mahasiswa: \n\n");
	for(i=0; i<10; i++){
		printf("Bil %i: ", (i+1));
		scanf("%i", &nilai[i]);
	}
	
	for(i=0; i<10; i++){
		if(nilai[i]>=60){printf("%9i", nilai[i]);}
	}
	return 0;
}