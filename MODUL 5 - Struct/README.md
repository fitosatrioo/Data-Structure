# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori
<div style="text-align: justify">
Struct merupakan sebuah fitur yang memungkinkan pengguna untuk mendefinisikan sebuah tipe data baru yang terdiri dari beberapa anggota yang berbeda. Setiap anggota ini dapat memiliki tipe data yang berbeda pula. Secara umum, struct digunakan untuk mengelompokkan data terkait menjadi satu unit yang lebih besar. Kata kunci struct memberi tahu kompiler bahwa template struktur sedang ditentukan, yang dapat digunakan untuk membuat variabel struktur. Bidang-bidang yang membentuk struktur disebut anggota atau elemen struktur. Semua elemen dalam suatu struktur secara logis berhubungan satu sama lain. 

Setiap variabel dalam struct memiliki tipe data tertentu, yang bisa berupa tipe data primitif seperti int, float, char, atau bahkan tipe data yang lebih kompleks seperti string, array, atau struct lainnya [1]. Variabel dalam sebuah struct memungkinkan kita untuk mengorganisir dan mengelola data dengan cara yang lebih terstruktur dalam program. Variabel ini memungkinkan kita untuk menggabungkan berbagai jenis data terkait ke dalam satu unit yang dapat dengan mudah diakses dan dimanipulasi.
	
## Guided 

### Guided 1

```C++
// Guided 1
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


```
Program di atas adalah 

### Guided 2 

```C++
// Guided 2

#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string Nama_hewan;
    string Jenis_kelamin;
    string cara_berkembangbiak;
    string alat_pernafasan;
    string tempat_hidup;
    bool karnivora;
};

struct hewanDarat {
    hewan info_hewan;
    int jumlah_kaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    hewan info_hewan;
    string sirip;
    string pertahanan_diri;
};

int main() {
    hewanDarat hewan_darat1; // Renamed variable to hewan_darat1
    hewanLaut hewan_laut1;   // Renamed variable to hewan_laut1
    
    hewan_darat1.info_hewan.Nama_hewan = "Kucing Ireng";
    hewan_darat1.info_hewan.Jenis_kelamin = "betina";
    hewan_darat1.info_hewan.cara_berkembangbiak = "Vivipar / melahirkan";
    hewan_darat1.info_hewan.alat_pernafasan = "Paru - Paru";
    hewan_darat1.info_hewan.tempat_hidup = "Darat";
    hewan_darat1.info_hewan.karnivora = true;
    hewan_darat1.jumlah_kaki = 4;
    hewan_darat1.menyusui = true;
    hewan_darat1.suara = "meow";

    hewan_laut1.info_hewan.Nama_hewan = "Ikan Hiu";
    hewan_laut1.info_hewan.Jenis_kelamin = "jantan";
    hewan_laut1.info_hewan.cara_berkembangbiak = "Ovovivipar";
    hewan_laut1.info_hewan.alat_pernafasan = "Insang";
    hewan_laut1.info_hewan.tempat_hidup = "Laut";
    hewan_laut1.info_hewan.karnivora = true;
    hewan_laut1.sirip = "besar dan kuat";
    hewan_laut1.pertahanan_diri = "menggunakan gigi dan sirip";

    cout <<"=== HEWAN DARAT ===" << endl;
    cout <<"Nama Hewan: " << hewan_darat1.info_hewan.Nama_hewan << endl;
    cout <<"Jenis Kelamin: " << hewan_darat1.info_hewan.Jenis_kelamin << endl;
    cout <<"Cara Berkembangbiak: " << hewan_darat1.info_hewan.cara_berkembangbiak << endl;
    cout <<"Alat Pernafasan: " << hewan_darat1.info_hewan.alat_pernafasan << endl;
    cout <<"Tempat Hidup: " << hewan_darat1.info_hewan.tempat_hidup << endl;
    cout <<"Apakah Karnivora?: " << (hewan_darat1.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout <<"Jumlah Kaki: " << hewan_darat1.jumlah_kaki << endl;
    cout <<"Apakah Menyusui?: " << (hewan_darat1.menyusui ? "Ya" : "Tidak") << endl;
    cout <<"Suara: " << hewan_darat1.suara << endl;

    cout <<"\n=== HEWAN LAUT ===" << endl;
    cout <<"Nama Hewan: " << hewan_laut1.info_hewan.Nama_hewan << endl;
    cout <<"Jenis Kelamin: " << hewan_laut1.info_hewan.Jenis_kelamin << endl;
    cout <<"Cara Berkembangbiak: " << hewan_laut1.info_hewan.cara_berkembangbiak << endl;
    cout <<"Alat Pernafasan: " << hewan_laut1.info_hewan.alat_pernafasan << endl;
    cout <<"Tempat Hidup: " << hewan_laut1.info_hewan.tempat_hidup << endl;
    cout <<"Apakah Karnivora?: " << (hewan_laut1.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout <<"Bentuk Sirip: " << hewan_laut1.sirip << endl;
    cout <<"Pertahanan Diri: " << hewan_laut1.pertahanan_diri << endl;

    return 0;
}

```
Program di atas adalah


## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada sruct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.


```C++
#include <iostream>
#include <string>
using namespace std;

struct buku {
    string JudulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    buku mybook;

    // Memasukkan data buku dari input pengguna
    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan data untuk buku " << i + 1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, mybook.JudulBuku[i]);
        cout << "Nama Pengarang: ";
        getline(cin, mybook.pengarang[i]);
        cout << "Nama penerbit: ";
        getline(cin, mybook.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> mybook.tebalHalaman[i];
        cout << "Harga Buku: ";
        cin >> mybook.hargaBuku[i];
        cin.ignore(); // Membersihkan buffer untuk input berikutnya
        cout << endl;
    }

    // Menampilkan data buku
    cout << "=== Deskripsi Buku ===" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Buku " << i + 1 << ":" << endl;
        cout << "Judul Buku: " << mybook.JudulBuku[i] << endl;
        cout << "Nama Pengarang: " << mybook.pengarang[i] << endl;
        cout << "Nama penerbit: " << mybook.penerbit[i] << endl;
        cout << "Tebal Halaman: " << mybook.tebalHalaman[i] << endl;
        cout << "Harga Buku: " << mybook.hargaBuku[i] << endl;
        cout << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
    
    
}

```
<p><b>Penjelasan:</b></p>




#### Output:


#### Full Screenshoot Code:








### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis array. Bagaimana cara mengisi dan menampilkannya.


<p><b>Penjelasan:</b></p>
kode diatas adalah 


## Kesimpulan
- ### Hasil Praktikum
Praktikum kali ini membahas tentang algoritma searching yang terdiri dari dua yaitu linear search dan binary search. keduanya kerap sekali digunakan dalam sebuah program. hanya saja linear search sangat lama karena harus mencari secara terurut secara satu - satu dan itu sangat membutuhkan waktu yang lama. Beda halnya dengan binary search, algoritma ini lebih cepat karena hanya mencari dari nilai tengahnya saja.

- ### Pelajaran yang didapat
Dari algoritma searching ini membantu kita menemukan elemen tertentu dalam sebuah himpunan data dengan efisien. Pengetahuan tentang berbagai algoritma searching memungkinkan kita untuk memilih metode yang paling sesuai dengan kebutuhan spesifik aplikasi. Terdapat berbagai macam algoritma searching, seperti sequential search, binary search, interpolation search, dan lain-lain. Setiap algoritma memiliki karakteristik, kompleksitas, dan kondisi penggunaan yang berbeda. Analisis Kompleksitas: Penting untuk memahami kompleksitas waktu dan ruang dari setiap algoritma searching. Dengan demikian, kita dapat memilih algoritma yang paling efisien tergantung pada ukuran data dan keterbatasan sumber daya yang ada.

## Referensi
[1] A. D. Samala, B. Ramadhani, F. Ranurja, Pemrograman C++, Padang: UNP Press, 2021. 

[2] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, "Introduction to Algorithms", 3rd ed. The MIT Press, 2009.

