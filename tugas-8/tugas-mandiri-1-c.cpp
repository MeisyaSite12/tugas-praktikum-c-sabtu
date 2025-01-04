#include <stdio.h>

main(){
	int A[11];
	int i, flag;
	
	printf("Masukkan data (999 untuk stop): \n\n");
	for(i=0;i<20;i++){
		printf("Bil %i: ", (i+1));
		scanf("%i", &A[i]);
		
	if(A[i]==999){
	flag=0;
	break;
	}
	
	}
	
	if(flag==0){
		for(i=0; i<11; i++){
			if(A[i]>9){
				printf("%4i", A[i]);
			}
		}	
	}

	return 0;
}