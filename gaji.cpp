#include <iostream>
#include <conio.h>
using namespace std ;

struct pegawai
{
	char nama[20];
	int jam,total;
}gaji;

int main(int argc, char** argv)
{
	cout << "Masukkan Nama : ";
	cin >> gaji.nama;
	cout <<"Masukkan Jumlah Jam Kerja : ";
	cin >> gaji.jam;
	
	
	cout << "-----------------------------" << endl;
	cout << "Nama : " << gaji.nama << endl;
	
	
	if (gaji.jam<=7){
		gaji.total = gaji.jam * 500;
		cout << "Gaji : " << gaji.total; 
	}
	
	else if (gaji.jam > 7){
		gaji.total = (gaji.jam - 7)* 7500 + 3500;
		cout << "gaji : " << gaji.total;
	}
	
	return 0;
}


