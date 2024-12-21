#include <stdio.h>

main(){
	int A[11];
	int i;
	
	printf("Input 11 Bilangan Acak: \n\n");
	for(i=0;i<11;i++){
		printf("Bil %i: ", (i+1));
		scanf("%i", &A[i]);
	}
	for(i=0; i<11; i++){
		if(A[i]%2==0){printf("%11i", A[i]);}
	}
	
	return 0;
}