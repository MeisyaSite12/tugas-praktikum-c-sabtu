#include <stdio.h>

#define phi 3.14
#define r   7.5		// r merupakan jari-jari lingkaran yang di dapat dari diameter dibagi 2
int main()
{
	float hasil;	//Deklarasi variabel
	
	hasil = (4*phi*r*r*r)/3;	//Rumus volume dari bangun ruang bola
	
	printf("Maka, hasil volume bola adalah %.2f cm", hasil);	//Menampilkan hasil dari perhitungan volume bola
	
	return 0;
}