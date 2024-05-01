#include <iostream>
using namespace std;

struct buku {
	string JudulBuku;
	string pengarang;
	string penerbit;
	int tebalHalaman;
	int hargaBuku;
};

int main(){
	
buku mybook, mybook2;

mybook.JudulBuku = "Harry Potter";
mybook.pengarang = "J.K Rowling";
mybook.penerbit = "Scholastic Press";
mybook.tebalHalaman = 870;
mybook.hargaBuku = 2000000;

mybook2.JudulBuku = "Kata";
mybook2.pengarang = "Tere Liye";
mybook2.penerbit = "Scholastic Press";
mybook2.tebalHalaman = 250;
mybook2.hargaBuku = 3500000;


cout << "=== Deskripsi Buku ===" << endl;
cout <<"Judul Buku: " << mybook.JudulBuku << endl;
cout <<"Nama Pengarang: " << mybook.pengarang << endl;
cout <<"Nama penerbit: " << mybook.penerbit << endl;
cout <<"Tebal Halaman: " << mybook.tebalHalaman << endl;
cout <<"Harga Buku: " << mybook.hargaBuku << endl;
cout << "" << endl;
cout <<"Judul Buku: " << mybook2.JudulBuku << endl;
cout <<"Nama Pengarang: " << mybook2.pengarang << endl;
cout <<"Nama penerbit: " << mybook2.penerbit << endl;
cout <<"Tebal Halaman: " << mybook2.tebalHalaman << endl;
cout <<"Harga Buku: " << mybook2.hargaBuku << endl;


return 0;

}


