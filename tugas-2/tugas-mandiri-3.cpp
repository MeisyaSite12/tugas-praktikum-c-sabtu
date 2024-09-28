#include <stdio.h>
#include <math.h>

#define alas 4		//data nilai alas pada segitiga
#define tinggi 5	//data nilai tinggi pada segitiga

int main()
{
	float hasil, c;		//Deklarasi variabel
	
	hasil = pow(alas, 2) + pow(tinggi, 2);		//Rumus phytagoras untuk hipotenusa
	c = sqrt(hasil);
	
	printf("Maka, nilai dari sisi miring segitiga adalah %.3f cm", c); //Menampilkan hasil perhitungan rumus
	
	return 0;
}