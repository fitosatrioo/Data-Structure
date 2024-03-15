#include <iostream>
using namespace std;

struct mahasiswa
{
	const char *nama;
	const char *alamat;
	int usia;
	
};

int main(){
	
	struct mahasiswa mhs1, mhs2;
	
	mhs1.nama = "Fito";
	mhs1.alamat = "Bekasi";
	mhs1.usia = 19;
	mhs2.nama = "Satrio";
	mhs2.alamat = "Canberra";
	mhs2.usia = 20;
	
	cout<<"Mahasiswa 1\n";
	cout<<"Nama: " << mhs1.nama <<endl; 
	cout<<"Alamat: " << mhs1.alamat <<endl; 
	cout<<"Usia: " << mhs1.usia <<endl; 
	
	cout<<"Mahasiswa 2\n";
	cout<<"Nama: " << mhs2.nama <<endl; 
	cout<<"Alamat: " << mhs2.alamat <<endl; 
	cout<<"Usia: " << mhs2.usia <<endl; 
	
	return 0;
	
	
	
}
