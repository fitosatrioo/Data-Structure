# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

### TIPE DATA
<div style="text-align: justify">
Tipe data adalah klasifikasi nilai suatu variabel yang membantu operasi komputer untuk mengenali nilai data tanpa menghasilkan output error. Tipe data memudahkan program dalam mendeteksi berbagai jenis informasi, memastikan sistem dapat berjalan, dan meminimalkan kesalahan. suatu progrsam komputer akan memproses nilai , dinataranya nilai dalam bentuk angka, teks, logika (true / false) dan nilai dalam bentuk yang lebih kompleks [1]. setiap bahasa pemrograman memiliki beberapa tipe data untuk menggolongkan data yang nantinya akan diproses [2]. Jenis tipe data yang digunakan diantaranya adalah:
</div>


### 1. Tipe Data Primitif
Tipe data yang biasa digunakan untuk mendefinisikan variabel dan nilai dasar. ada 4 contoh yang sering ditemui dalam tipe data abstrak ini yaitu:

- Integer, tipe data ini digunakan untuk menyimpan bilangan bulat.
- Float, tipe data ini digunakan untuk menyimpan bilangan desimal 
- Char, tipe data ini merupakan tipe data karakter yang menyimpan huruf dan sebuah simbol.
- Boolean, merupakan tipe data yang dapat menyimpan dua nilai saja yaitu true atau false.

### 2. Tipe Data Abstrak
<div style="text-align: justify">
	
Tipe data sebuah tipe data yang didefinisikan oleh cara operasi-operasinya bekerja, daripada cara si tipe data ini di jalankan. Dalam hal ini, struktur data itu sendiri tidak terlihat oleh pengguna, yang terlihat adalah operasi-operasi yang dapat dilakukan pada struktur data tersebut. Dalam tipe data ini mempelajari dua jenis data yaitu yang pertama ada fungsi class dan struktur data struct. ada perbedaan pada akses default antara keduanya yaitu struct bersifat public dan class bersifat privat. yang artinya variabel pada struct bisa dipanggil ke semua fungsi. kalau variabel pada class hanya bisa di panggil di dalam class itu sendiri. Dalam OOP dapat diwariskan pada sub class di bawahnya, dan kelas yang mewariskannnya disebut superclass [2].

</div>

### 3. Tipe Data Koleksi
tipe data koleksi merupakan kumpulan data yang terdiri dari beberapa elemen atau nilai yang terkait satu sama lain dan diorganisir dalam suatu struktur tertentu. Struktur data koleksi memungkinkan untuk menyimpan, mengakses, dan memanipulasi sejumlah besar data dengan cara yang teratur dan rapih. Berikut contoh jenis data pada tipe data koleksi yang dipelajafi pada materi kali imi:

- Array: Merupakan Kumpulan elemen dengan tipe data yang sama, diatur dalam urutan tertentu. Deklarasi dari suatu array memberitahu kompiler berapa jumlah elemen yang dikandung oleh array dan tipe data tersebut [3]. indeks pada array dimulai dari 0.
- Vector: Tipe data ini hampir sama denagn array. Salah satu perbedaannya adalah jumlah elemen pada vector bisa bertambah lebih dari kapasitas yang sudah ditentukan.
- Map:  Merupakan Kumpulan pasangan kunci-nilai, di mana setiap kunci terkait dengan nilai tertentu dan bisa menyimpan lebih dari satu tipe data.





## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>

using namespace std;

int main(){
	char op;
	float num1, num2;
	
	cin >> op;
	
	cin >> num1 >> num2;
	
	switch(op)
	{
		
	case '+':
		cout << num1 + num2;
		break;
	
	case '-':
		cout << num1 - num2;
		break;
		
	case '*':
		cout << num1 * num2;
		break;
		
	case '/':
		cout << num1 / num2;
		break;
		
	default:
		cout << "error";
	}
	
	return 0;
}


```
program diatas merupakan sebuah kalkulator sederhana dengan menggunakan operasi aritmatika tambah, kurang, bagi, kali dengan meminta pengguna untuk memasukkan operator (+, -, *, atau /)
dan dua operand (num1 dan num2). 

Variabel op adalah variabel bertipe char yang digunakan untuk menyimpan operator yang dimasukkan oleh pengguna. Operator ini akan digunakan dalam pernyataan switch untuk menentukan operasi aritmatika yang akan dilakukan.

Pernyataan switch case diatas digunakan untuk membandingkan isi dari suatu variabel dengan beberapa nilai yang mungkin. Pada program ini, pernyataan switch case digunakan untuk memilih operasi aritmatika yang akan dilakukan berdasarkan nilai dari variabel op. Setiap case dalam pernyataan switch case berisi nilai yang mungkin diambil oleh variabel op, dan jika nilai op sesuai dengan salah satu case, maka blok kode yang terkait dengan case tersebut akan dieksekusi. Misalnya, jika pengguna memasukkan operator +, maka program akan menjalankan blok kode yang terdapat pada case +, yaitu cout << num1 + num2;. Jika pengguna memasukkan operator -, maka program akan menjalankan blok kode yang terdapat pada case -, yaitu cout << num1 - num2;, dan seterusnya.



### 2. Tipe Data Abstrak

```C++
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


```
Program di atas adalah contoh program dalam bahasa C++ dengan menggunakan tipe data abstrak yaitu adalah struct untuk menyimpan informasi tentang mahasiswa.

program ini mendeklarasikan sebuah struct dengan nama mahasiswa. Struct ini memiliki tiga anggota: nama, alamat, dan usia. Ketiga anggota ini memiliki tipe data yang sesuai, yaitu pointer ke tipe data char untuk nama dan alamat, serta tipe data int untuk usia.

variabel struct mahasiswa dengan nama mhs1 dan mhs2. Variabel-variabel ini akan digunakan untuk menyimpan informasi tentang dua mahasiswa.

informasi tentang mhs1 dan mhs2 dicetak ke layar menggunakan fungsi printf(). Setiap anggota struktur dicetak dengan format yang sesuai menggunakan placeholder seperti %s untuk string dan %d untuk integer. output yang dihasilkan yaitu menampilkan informasi tentang masing-masing mahasiswa, termasuk nama, alamat, dan usia.



### 3. Tipe Data Koleksi

```C++
#include <iostream>

using namespace std;
int main(){
	
	int nilai[5];
	nilai[0] = 23;
	nilai[1] = 50;
	nilai[2] = 34;
	nilai[3] = 78;
	nilai[4] = 90;
	
	cout << "isi array pertama adalah :" << nilai[0] << endl;
	cout << "isi array kedua adalah :" << nilai[1] << endl;
	cout << "isi array ketiga adalah :" << nilai[2] << endl;
	cout << "isi array keempat adalah :" << nilai[3] << endl;
	cout << "isi array kelima adalah :" << nilai[4] << endl;
	return 0;
	
	
}

```
Program di atas adalah contoh program dengan menggunakan tipe data kolekasi yang berupa array untuk menyimpan beberapa nilai integer.

sebuah array bernama "nilai" dengan ukuran 5 elemen (nilai[0] hingga nilai) dideklarasikan. Array ini digunakan untuk menyimpan beberapa nilai integer. kemudian setiap elemen array "nilai" diisi dengan nilai yang sesuai. Misalnya, nilai[0] diisi dengan nilai 23, nilai diisi dengan nilai 50, dan seterusnya.

nilai-nilai dari setiap elemen array "nilai" dicetak ke layar menggunakan fungsi cout. Setiap elemen dicetak dengan format yang sesuai menggunakan operator <<.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int num;
    bool compare;

    // Input dari pengguna
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> num;

    // Memeriksa apakah bilangan tersebut genap atau ganjil
    compare = (num % 2 == 0);

    // Menampilkan hasil
    if (compare) {
        cout << num << " adalah bilangan genap." << endl;
    } else {
        cout << num << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
```
#### Output:

![Screenshot (1080)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/10efef45-f7ba-4f59-a49b-36a7cf9e6c0e)

## Full Screenshoot Code


<p><b>Penjelasan:</b></p>

Program diatas menggunakan dua tipe data primitif yaitu integer dan boolean. boolean disini berfungsi untuk melakukan pengecekan terhadap bilangan genap atau ganjil dengan menggunakan suatu fungsi (num % 2 == 0) pada variabel compare. jika hasilnya true maka bilangan nya adalah genap, sebaliknya jika hasilnya false maka hasilnya ganjil.
Dalam program ini, tipe data primitif yang digunakan adalah integer (untuk bilangan bulat) dan boolean (untuk nilai boolean).
Tipe data primitif seperti int digunakan untuk menyimpan nilai dasar seperti bilangan bulat, sementara tipe data bool digunakan untuk menyimpan nilai kebenaran (true/false).


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
#include <string>

// menyimpan informasi mengenai produk, seperti nama produk, stok yang tersedia, harga, dan deskripsi.
struct Produk {
    std::string nama;
    int stok;
    int harga;
    std::string deskripsi;
};

// Deklarasi class
class Mobil {
public:
    // Terdapat fungsi SetInfo untuk mengatur nilai atribut dan DisplayInfo untuk menampilkan informasi mobil.
    void SetInfo(std::string m, std::string t, int y) {
        merk = m;
        tipe = t;
        tahunProduksi = y;
    }

    // Fungsi untuk menampilkan informasi mobil
    void DisplayInfo() {
        std::cout << "Mobil: " << merk << " " << tipe << " Tahun " << tahunProduksi << std::endl;
    }

private:
    std::string merk;
    std::string tipe;
    int tahunProduksi;
};

int main() {
    // Objek produk1 dari tipe Produk digunakan untuk menyimpan informasi mengenai produk dan menampilkannya ke layar.
    Produk produk1;
    produk1.nama = "Iphone 13 Promax";
    produk1.stok = 10;
    produk1.harga = 20000000;
    produk1.deskripsi = "lorem ipsum dolor sit amet";

    std::cout << "=== Data Produk ===" << std::endl;
    std::cout << "Nama: " << produk1.nama << std::endl;
    std::cout << "Stok: " << produk1.stok << std::endl;
    std::cout << "Harga: " << produk1.harga << std::endl;
    std::cout << "Deskripsi: " << produk1.deskripsi << std::endl;

    // Objek mobil1 dari tipe Mobil digunakan untuk menyimpan informasi mengenai mobil dan menampilkannya ke layar.
    Mobil mobil1;
    mobil1.SetInfo("BMW", "330i M Sport Pro", 2022);

    std::cout << "\n=== Data Mobil ===" << std::endl;
    mobil1.DisplayInfo();

    return 0;
}
```
#### Output:
![Screenshot (1081)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/ea49e19e-eba3-4598-8275-e1e8164262b1)

<p><b>Penjelasan:</b></p>

- class adalah salah satu fitur utama dalam pemrograman berorientasi objek (OOP) di C++. Class merupakan suatu blueprint atau cetak biru yang mendefinisikan sifat-sifat dan perilaku objek yang akan dibuat berdasarkan class tersebut. Dalam class, dapat mendefinisikan atribut (variabel) dan metode (fungsi) yang terkait dengan objek yang akan dihasilkan dari class tersebut. Class digunakan untuk memodelkan suatu entitas atau konsep dalam program dan memberikan cara untuk mengorganisir dan menyusun kode secara terstruktur.
  
- struct juga merupakan fitur dalam C++ yang digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda menjadi satu unit. Secara umum, struct mirip dengan class, namun terdapat perbedaan utama dalam visibilitas default dari anggotanya. Pada struct, anggota-anggota defaultnya adalah public, sehingga bisa diakses langsung dari luar struct.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
#include <iostream>
#include <map>

int main() {
    // sebuah map dengan key bertipe int dan value bertipe std::string dideklarasikan dengan nama Buah dan langsung diinisialisasi.
    std::map<int, std::string> Buah;

    // Elemen-elemen dengan key dan value tertentu ditambahkan ke dalam map. Setiap key (angka) diassign dengan nama buah yang sesuai.
    Buah[1] = "Jeruk";
    Buah[2] = "Apel";
    Buah[3] = "Pisang";
    Buah[4] = "Melon";
    Buah[5] = "Semangka";

    // menampilkan elemen-elemen map dengan menggunakan perintah std::cout. 
   //  Pesan yang ditampilkan memberikan judul "=== Nama Buah ===" dan menampilkan nama-nama buah sesuai dengan key-nya.
    std::cout << "=== Nama Buah ===" << std::endl;
    std::cout << "Buah 1: " << Buah[1] << std::endl;
    std::cout << "Buah 2: " << Buah[2] << std::endl;
    std::cout << "Buah 3: " << Buah[3] << std::endl;
    std::cout << "Buah 4: " << Buah[4] << std::endl;
    std::cout << "Buah 5: " << Buah[5] << std::endl;
    
    return 0;
}

```
#### Output:
![Screenshot (1082)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/6fe9df8f-0c90-45df-8ce7-c1c4f05cb785)

<p><b>Penjelasan:</b></p>

Array: Menggunakan tipe data yang sama untuk setiap elemennya. Misalnya, array int akan menyimpan sejumlah bilangan bulat. Diakses menggunakan indeks numerik yang dimulai dari 0. Indeks menunjukkan posisi relatif elemen dalam array. Cocok untuk menyimpan sejumlah elemen dengan tipe data yang sama.

Map: Menggunakan struktur data yang disebut associative container yang memetakan kunci ke nilai. Setiap elemen memiliki sepasang kunci-nilai dan tipe data untuk kunci dan nilai dapat berbeda. Diakses menggunakan kunci. Setiap elemen memiliki kunci unik yang digunakan untuk mengakses nilainya. Cocok untuk menyimpan pasangan kunci-nilai yang tidak terbatas dengan tipe data yang berbeda.

## Kesimpulan
- ### Hasil Praktikum
Hasil dari praktikum 1 ini, dapat mengetahui mengenai karakteristik 3 tipe data, yaitu tipe data primitif yang didalamnya berupa (char, integer, float), dan boolean). tipe data abstrak yang didalamnya berupa (struct dan class), dan  tipe data koleksi yang didalamnya berupa (array dan map). Saya juga menjadi lebih tau mengenai jalannya program dari ketiga tipe data tersebut dengan contoh - contoh soal yang diberikan.

- ### Pelajaran yang didapat
Dalam tipe data memiliki tiga jenis yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi. Tipe data primitif meliputi integer, float, character, dan boolean. Tipe data abstrak meliputi struct dan class, struct memiliki askses default yang bersifat public sedangkan class bersifat private. Tipe data koleksi meliputi array, vector, dan map. Array adalah struktur data statis, berukuran tetap, berisi tipe data yang sama secara berurutan. Vector adalah struktur data dinamis, ukurannya dapat disesuaikan, dan alokasi memorinya dilakukan otomatis dan bersebelahan. Sedangkan Map adalah struktur data yang memetakan kunci (key) ke nilai (value), setiap kuncinya harus unik.

## Referensi
[1] Dr. Irmawati, Augury El Rayeb, Carudin, Budanis Dwi Mellani, Apriyanto Halim, Dr. Tutuk Indrayani, et al, "BUKU AJAR PEMROGRAMAN". PT. Sonpedia Publishing Indonesia, 2023.

[2] Raden Budiarto Hadiprakoso, "Pemrograman Berorientasi Objek Teori dan implementasi dengan Java", RBH, 2021

[3] Ema Utami, Sukrisno, "10 Langkah Belajar Logika dan Algoritma. menggunakan Bahasa C dan C++ di GnuLlinux", ANDI OFFSET, 2005
