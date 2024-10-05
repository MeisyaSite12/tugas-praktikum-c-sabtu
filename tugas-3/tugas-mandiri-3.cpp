#include <stdio.h>
#include <math.h>

int main()
{
	float hasil, c, a, b;		//Deklarasi variabel
	
	printf("Masukkan nilai a? ", a);
	scanf("%f", &a);
	printf("Masukkan nilai b? ", b);
	scanf("%f", &b);
	
	hasil = pow(a, 2) + pow(b, 2);		//Rumus phytagoras untuk hipotenusa
	c = sqrt(hasil);
	
	printf("Maka, nilai dari sisi miring segitiga adalah %.3f cm", c); //Menampilkan hasil perhitungan rumus
	
	return 0;
}