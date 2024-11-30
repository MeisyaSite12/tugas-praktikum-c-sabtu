#include <stdio.h>
#include <math.h>

int main(){
	int i, N=0;
	printf("10 bilangan pangkat 2 pertama \n");
	for(int i=0; i<=10; i++){
		N=pow(2, i);
		printf("%6i", N);
}
	return 0;
}
