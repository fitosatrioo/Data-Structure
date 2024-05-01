# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori
<div style="text-align: justify">
Struct adalah
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
Program dimulai dengan mendefinisikan sebuah string kalimat_030 yang berisi kalimat atau teks yang akan dicari. Kemudian, sebuah karakter target_030 juga didefinisikan untuk menentukan karakter yang akan dicari dalam string kalimat_030. Fungsi binarySearch() dibuat untuk melakukan pencarian biner pada string kalimat_030 terhadap karakter target_030. Dalam fungsi binarySearch(), pencarian biner dilakukan dengan membagi string menjadi dua bagian, kemudian membandingkan karakter yang dicari dengan karakter di tengah string. Jika karakter yang dicari ditemukan pada indeks mid_030, maka indeks tersebut disimpan dalam variabel index_030 dan fungsi mengembalikan true untuk menandakan karakter ditemukan.
Jika karakter yang dicari lebih kecil dari karakter di tengah, maka pencarian dilanjutkan di sebelah kanan karakter tengah. Jika karakter yang dicari lebih besar dari karakter di tengah, maka pencarian dilanjutkan di sebelah kiri karakter tengah. Jika karakter tidak ditemukan setelah loop selesai, maka fungsi mengembalikan false untuk menandakan karakter tidak ditemukan. Di dalam fungsi main(), program memanggil fungsi binarySearch() untuk mencari karakter target_030 dalam string kalimat_030.
Setelah pencarian selesai, program menampilkan pesan apakah karakter ditemukan atau tidak, beserta indeks karakter tersebut jika ditemukan.




#### Output:
![Screenshot (1244)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/1949733a-9008-42a3-b076-ab04b1fe1f37)


#### Full Screenshoot Code:
![Screenshot (1247)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/58e49e6b-aa63-497e-801b-44176eda4082)







### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis array. Bagaimana cara mengisi dan menampilkannya.


<p><b>Penjelasan:</b></p>
kode diatas adalah 


## Kesimpulan
- ### Hasil Praktikum
Praktikum kali ini membahas tentang algoritma searching yang terdiri dari dua yaitu linear search dan binary search. keduanya kerap sekali digunakan dalam sebuah program. hanya saja linear search sangat lama karena harus mencari secara terurut secara satu - satu dan itu sangat membutuhkan waktu yang lama. Beda halnya dengan binary search, algoritma ini lebih cepat karena hanya mencari dari nilai tengahnya saja.

- ### Pelajaran yang didapat
Dari algoritma searching ini membantu kita menemukan elemen tertentu dalam sebuah himpunan data dengan efisien. Pengetahuan tentang berbagai algoritma searching memungkinkan kita untuk memilih metode yang paling sesuai dengan kebutuhan spesifik aplikasi. Terdapat berbagai macam algoritma searching, seperti sequential search, binary search, interpolation search, dan lain-lain. Setiap algoritma memiliki karakteristik, kompleksitas, dan kondisi penggunaan yang berbeda. Analisis Kompleksitas: Penting untuk memahami kompleksitas waktu dan ruang dari setiap algoritma searching. Dengan demikian, kita dapat memilih algoritma yang paling efisien tergantung pada ukuran data dan keterbatasan sumber daya yang ada.

## Referensi
[1] Robert Sedgewick and Kevin Wayne, "Algorithms 4th Edition", Addison Wesley, 2011.

[2] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, "Introduction to Algorithms", 3rd ed. The MIT Press, 2009.

