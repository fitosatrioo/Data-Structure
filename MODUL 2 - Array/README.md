# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

### ARRAY
<div style="text-align: justify">
Array adalah 
</div>


### 1. Array 2 Dimensi

### 2. Array 3 Dimensi
<div style="text-align: justify">
	

</div>


## Guided 

### 1. Array Tiga Dimensi

```C++
// Guided 1
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" <<
z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z
<< "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
				;
            }
            cout << endl;
        }
        cout << endl;
    }
}



```
interpretasi:



### 2. Nilai Maksimal pada Array

```C++
// Guided 2
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

```
interpretasi





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

#### Full Screenshoot Code:

![Screenshot (1137)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/0f875934-bda5-453d-afe5-49534004b961)

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

#### Full Screenshoot Code:

![Screenshot (1138)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/7c29258f-e4ce-4fd9-a58c-bf26e8e91313)

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

#### Full Screenshoot Code:

![Screenshot (1139)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/a699e72b-b3de-4c5b-932e-383ea87d3546)

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

