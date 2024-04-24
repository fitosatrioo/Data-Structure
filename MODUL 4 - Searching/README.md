# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori
<div style="text-align: justify">
Algoritma searching adalah adalah suatu prosedur atau langkah-langkah yang digunakan untuk menemukan lokasi atau keberadaan suatu elemen tertentu dalam sebuah kumpulan data. Ini bisa berupa array, list, atau struktur data lainnya [1]. Algoritma pencarian merupakan bagian penting dalam ilmu komputer dan digunakan dalam berbagai aplikasi, mulai dari pencarian data dalam basis data hingga operasi pencarian dalam algoritma pemrosesan teks.

### 1. Sequential Search
sequential search adalah algoritma pencarian sederhana yang digunakan untuk menemukan keberadaan suatu nilai dalam kumpulan data. Algoritma ini bekerja dengan memeriksa setiap elemen dalam urutan berurutan, mulai dari elemen pertama hingga elemen terakhir, sampai elemen yang dicari ditemukan atau kumpulan data selesai diproses.

Meskipun sederhana, sequential search memiliki kompleksitas waktu O(n), di mana n adalah jumlah elemen dalam kumpulan data. Ini berarti waktu yang diperlukan untuk menemukan elemen dalam kumpulan data sebanding dengan jumlah elemen dalam kumpulan data. Oleh karena itu, meskipun cocok untuk kumpulan data kecil atau tidak terurut, sequential search cenderung tidak efisien untuk kumpulan data besar.



### 2. Binary Search
binary search adalah algoritma pencarian yang efisien digunakan untuk mencari elemen tertentu dalam sebuah kumpulan data yang sudah terurut. Algoritma ini bekerja dengan membagi kumpulan data menjadi dua bagian secara terus menerus dan memeriksa elemen tengahnya. Jika elemen tengah sama dengan elemen yang dicari, pencarian selesai [2]. Jika tidak, algoritma akan memilih bagian kumpulan data yang mungkin mengandung elemen yang dicari berdasarkan nilai elemen tengah tersebut, dan mengulangi proses pencarian di bagian tersebut.
Keuntungan dari binary search adalah waktu eksekusi yang cepat karena setiap iterasi membagi kumpulan data menjadi setengahnya. Namun, syarat utama agar binary search dapat digunakan adalah kumpulan data harus sudah terurut, baik secara menaik maupun menurun.

## Guided 

### 1. Sequential Search

```C++
// Guided 1
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // Algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }

    cout << "\tProgram Sequential Search Sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}

```
Program di atas adalah implementasi dari algoritma sequential search untuk mencari keberadaan suatu elemen tertentu dalam array data yaitu dengan Mendefinisikan array data yang berisi 10 elemen bilangan bulat.
Mendefinisikan variabel n yang menyimpan panjang array data kemudian menyimpan nilai yang ingin dicari dalam array lalu setelah variabel ketemu yang digunakan untuk menandai apakah nilai yang dicari ditemukan dalam array, lakukan iterasi melalui setiap elemen array data. Pada setiap iterasi, memeriksa apakah elemen saat ini sama dengan nilai yang dicari (cari). Jika ditemukan, variabel ketemu diatur menjadi true, dan program keluar dari loop. Jika tidak ditemukan, iterasi dilanjutkan hingga akhir array.


### 2. Binary Search

```C++
// Guided 2

#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
Program di atas adalah implementasi dari algoritma binary search yang digabungkan dengan algoritma selection sort untuk mencari keberadaan suatu nilai dalam array yang sudah diurutkan yaitu dengan Mendefinisikan array bil_data yang berisi 7 elemen bilangan bulat dan variabel cari yang akan digunakan untuk menyimpan nilai yang ingin dicari dalam array, Membuat fungsi selection_sort() untuk mengurutkan array menggunakan algoritma Selection Sort. Proses ini dilakukan untuk memastikan array dalam keadaan terurut sebelum melakukan pencarian menggunakan Binary Search 
dan fungsi binary_search() untuk melakukan pencarian biner dalam array yang sudah diurutkan. Jika nilai yang dicari sama dengan elemen tengah, maka nilai tersebut ditemukan dan program keluar dari loop. Jika nilai yang dicari lebih kecil dari elemen tengah, maka pencarian dilanjutkan di setengah kiri array. Jika nilai yang dicari lebih besar dari elemen tengah, maka pencarian dilanjutkan di setengah kanan array. Jika nilai yang dicari tidak ditemukan setelah loop selesai, maka pesan "Data tidak ditemukan" akan ditampilkan.




## Unguided 

### 1.  . Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!


```C++
#include <iostream>
#include <string>
#include <algorithm> // Inklusi untuk menggunakan fungsi transform()
using namespace std;

// Fungsi untuk melakukan pencarian biner pada sebuah string
bool binarySearch(string kalimat_030, char target_030, int& index_030) {
    int left_030 = 0;
    int right_030 = kalimat_030.length() - 1;

    // Melakukan pencarian biner
    while (left_030 <= right_030) {
        int mid_030 = left_030 + (right_030 - left_030) / 2;

        // Jika karakter yang dicari ditemukan pada indeks 'mid_030'
        if (kalimat_030[mid_030] == target_030) {
            index_030 = mid_030; // Simpan indeks karakter yang ditemukan
            return true; // Kembalikan true untuk menandakan karakter ditemukan
        } else if (kalimat_030[mid_030] < target_030) {
            left_030 = mid_030 + 1; // Cari di sebelah kanan 'mid_030'
        } else {
            right_030 = mid_030 - 1; // Cari di sebelah kiri 'mid_030'
        }
    }

    return false; // Jika karakter tidak ditemukan, kembalikan false
}

int main() {
    string kalimat_030 = "fito mau ke bank"; // Kalimat yang akan dicari
    char target_030 = 'f'; // Huruf yang ingin dicari
    int index_030;

    // Ubah kalimat menjadi huruf kecil untuk pencarian yang tidak peka huruf besar/kecil
    std::transform(kalimat_030.begin(), kalimat_030.end(), kalimat_030.begin(), ::tolower);

    // Lakukan pencarian menggunakan binary search
    if (binarySearch(kalimat_030, target_030, index_030)) {
        cout << "Huruf '" << target_030 << "' ditemukan dalam kalimat pada indeks ke-" << index_030 << endl;
    } else {
        cout << "Huruf '" << target_030 << "' tidak ditemukan dalam kalimat." << endl;
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

<b>note:</b> (030 adalah nim belakang saya)


#### Output:
![Screenshot (1244)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/1949733a-9008-42a3-b076-ab04b1fe1f37)


#### Full Screenshoot Code:
![Screenshot (1247)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/58e49e6b-aa63-497e-801b-44176eda4082)







### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung jumlah dan frekuensi huruf vokal dalam sebuah kalimat
int hitungVokal_030(string kalimat_030, int frekuensiVokal_030[]) {
    int jumlahVokal_030 = 0;

    // Inisialisasi frekuensi setiap huruf vokal dengan 0
    for (int i_030 = 0; i_030 < 5; ++i_030) {
        frekuensiVokal_030[i_030] = 0;
    }

    // Melakukan iterasi untuk setiap karakter dalam kalimat
    for (size_t i_030 = 0; i_030 < kalimat_030.length(); ++i_030) {
        char karakter_030 = kalimat_030[i_030];
        // Mengecek apakah karakter adalah huruf vokal
        if (karakter_030 == 'a' || karakter_030 == 'A') {
            frekuensiVokal_030[0]++;
            jumlahVokal_030++;
        } else if (karakter_030 == 'i' || karakter_030 == 'I') {
            frekuensiVokal_030[1]++;
            jumlahVokal_030++;
        } else if (karakter_030 == 'u' || karakter_030 == 'U') {
            frekuensiVokal_030[2]++;
            jumlahVokal_030++;
        } else if (karakter_030 == 'e' || karakter_030 == 'E') {
            frekuensiVokal_030[3]++;
            jumlahVokal_030++;
        } else if (karakter_030 == 'o' || karakter_030 == 'O') {
            frekuensiVokal_030[4]++;
            jumlahVokal_030++;
        }
    }

    return jumlahVokal_030;
}

int main() {
    string kalimat_030;
    int frekuensiVokal_030[5] = {0}; // Array untuk menyimpan frekuensi kemunculan masing-masing huruf vokal

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat_030);

    // Memanggil fungsi untuk menghitung jumlah dan frekuensi huruf vokal dalam kalimat
    int jumlahVokal_030 = hitungVokal_030(kalimat_030, frekuensiVokal_030);

    cout << "Frekuensi kemunculan masing-masing huruf vokal:" << endl;
    cout << "'a': " << frekuensiVokal_030[0] << endl;
    cout << "'i': " << frekuensiVokal_030[1] << endl;
    cout << "'u': " << frekuensiVokal_030[2] << endl;
    cout << "'e': " << frekuensiVokal_030[3] << endl;
    cout << "'o': " << frekuensiVokal_030[4] << endl;
    cout << "Jumlah huruf vokal dalam kalimat adalah: " << jumlahVokal_030 << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

```
<p><b>Penjelasan:</b></p>
kode diatas adalah contoh program yang menghitung jumlah dan frekuensi kemunculan huruf vokal dalam sebuah kalimat.

Program dimulai dengan mendeklarasikan sebuah string kalimat_030 yang akan digunakan untuk menyimpan input kalimat dari pengguna.
Selanjutnya, sebuah array frekuensiVokal_030 dengan panjang 5 digunakan untuk menyimpan frekuensi kemunculan masing-masing huruf vokal (a, i, u, e, o).
Fungsi hitungVokal_030() dibuat untuk menghitung jumlah dan frekuensi huruf vokal dalam kalimat yang diberikan.
Di dalam fungsi hitungVokal_030(), dilakukan iterasi untuk setiap karakter dalam kalimat.
Setiap karakter diuji untuk menentukan apakah itu adalah huruf vokal. Jika iya, maka frekuensi kemunculan huruf vokal tersebut diinkremen dan jumlah huruf vokal juga ditambah.
Setelah iterasi selesai, fungsi mengembalikan jumlah total huruf vokal dalam kalimat.
Di dalam fungsi main(), program meminta pengguna untuk memasukkan sebuah kalimat.
Kemudian, program memanggil fungsi hitungVokal_030() untuk menghitung jumlah dan frekuensi huruf vokal dalam kalimat tersebut.
Setelah perhitungan selesai, program menampilkan frekuensi kemunculan masing-masing huruf vokal, serta jumlah total huruf vokal dalam kalimat.


#### Output:
![Screenshot (1245)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/ea2029e8-6543-47ab-a53e-7a52c7ca3431)


#### Full Screenshoot Code:
![Screenshot (1248)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/8f89fce4-794b-44aa-9a39-9505d34e8859)



### 3. . Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
using namespace std;

int sequentialSearch_030(int data_030[], int n_030, int target_030) {
    int count_030 = 0; // Inisialisasi variabel count untuk menghitung jumlah kemunculan angka 4

    // Melakukan iterasi untuk setiap elemen dalam array
    for (int i_030 = 0; i_030 < n_030; ++i_030) {
        // Mengecek apakah elemen saat ini adalah angka 4
        if (data_030[i_030] == target_030) {
            count_030++; // Jika ya, increment count
        }
    }

    return count_030; // Mengembalikan jumlah kemunculan angka 4
}

int main() {
    int data_030[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n_030 = sizeof(data_030) / sizeof(data_030[0]); // Menghitung panjang array
    int target_030 = 4; // Angka yang ingin dicari

    int count_030 = sequentialSearch_030(data_030, n_030, target_030);

    cout << "Jumlah kemunculan angka 4 dalam array adalah: " << count_030 << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

```
<p><b>Penjelasan:</b></p>
kode diatas adalah contoh program yang menggunakan algoritma sequential search untuk menghitung jumlah kemunculan angka 4 dalam sebuah array.

Program dimulai dengan mendeklarasikan sebuah array data_030 yang berisi sekumpulan bilangan bulat.
Variabel n_030 digunakan untuk menyimpan panjang array data_030.
Variabel target_030 didefinisikan untuk menyimpan angka yang ingin dicari dalam array.
Fungsi sequentialSearch_030() dibuat untuk melakukan pencarian sekuensial dalam array.
Di dalam fungsi sequentialSearch_030(), dilakukan iterasi untuk setiap elemen dalam array.
Setiap elemen diuji untuk menentukan apakah itu sama dengan angka 4. Jika iya, variabel count_030 diinkremen.
Setelah iterasi selesai, fungsi mengembalikan jumlah kemunculan angka 4 dalam array.
Di dalam main(), program memanggil fungsi sequentialSearch_030() untuk menghitung jumlah kemunculan angka 4 dalam array.
Setelah perhitungan selesai, program menampilkan jumlah kemunculan angka 4.

#### Output:
![Screenshot (1246)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/fe104287-01a0-49e4-b2bc-15079a88ac6c)

#### Full Screenshoot Code:
![Screenshot (1249)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/7064c06a-d396-4906-bea7-e23851f51e94)





## Kesimpulan
- ### Hasil Praktikum
Praktikum kali ini membahas tentang algoritma 

- ### Pelajaran yang didapat
Dari algoritma 

## Referensi
[1] Robert Sedgewick and Kevin Wayne, "Algorithms 4th Edition", Addison Wesley, 2011.

[2] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, "Introduction to Algorithms", 3rd ed. The MIT Press, 2009.

