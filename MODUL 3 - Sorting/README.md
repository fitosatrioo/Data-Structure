# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori
<div style="text-align: justify">
Algoritma sorting adalah serangkaian langkah atau prosedur yang digunakan untuk mengurutkan elemen-elemen dalam suatu struktur data, seperti array atau daftar, sesuai dengan kriteria tertentu. Tujuan utama dari algoritma sorting adalah untuk menyusun elemen-elemen data dalam urutan yang teratur [1]. baik itu dari yang terkecil ke yang terbesar (ascending), maupun sebaliknya dari yang terbesar ke yang terkecil (descending). Algoritma sorting sangat penting dalam pengembangan perangkat lunak karena sering digunakan dalam berbagai aplikasi, termasuk basis data, pencarian data, dan analisis data.

### 1. Bubble Sorting
Merupakan algoritma sorting yang secara berulang membandingkan pasangan elemen yang berdekatan dan menukarnya jika mereka berada dalam urutan yang salah. Algoritma dimulai dengan membandingkan elemen pertama dengan elemen kedua, kemudian menukar posisi jika diperlukan.
Selanjutnya, elemen kedua dibandingkan dengan elemen ketiga, dan seterusnya, hingga elemen terakhir array.
Proses ini diulang untuk setiap elemen array, sehingga elemen terbesar akan "menggelembung" (bubble) ke posisi terakhir.
Setelah iterasi pertama, elemen terbesar akan berada di posisi terakhir. Kemudian, proses dilakukan lagi untuk elemen-elemen yang belum terurut, kecuali elemen terakhir. Proses ini berlanjut hingga seluruh array terurut.

```C++
procedure bubbleSort(A : list of sortable items)
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure
```

### 2. Selection Sorting
Selection sort adalah perbaikan dari bubble sort, dengan mengurangi jumlah perbandingan [2]. Selection sort memilih satu per satu elemen data dari posisi awal, untuk mencari data terkecil dengan mencatat posisi index saja lalu dilakukan sekali pertukaran pada akhir dari setiap tahapan. selection sort merupakan metode pengurutan dengan mencari nilai data terkecil dimulai dari data di posisi 0 hingga di posisi N-1.

```C++
procedure selectionSort(A : list of sortable items)
    n = length(A)
    for i = 0 to n-2 do
        minIndex = i
        for j = i+1 to n-1 do
            if A[j] < A[minIndex] then
                minIndex = j
            end if
        end for
        swap(A[i], A[minIndex])
    end for
end procedure
```

### 3. Insertion Sorting
Algoritma Insertion Sort bekerja dengan membagi array menjadi dua bagian: bagian yang sudah terurut dan bagian yang belum terurut.
Setiap elemen dari bagian belum terurut dimasukkan ke dalam bagian terurut pada posisi yang tepat, sehingga bagian terurut semakin membesar setiap kali elemen baru dimasukkan. Algoritma ini mengulangi proses tersebut hingga seluruh array terurut [3]. Insertion Sort efisien untuk array yang relatif kecil atau hampir terurut. Algoritma ini sederhana untuk dipahami dan diimplementasikan. Tidak cocok untuk array yang besar karena kinerjanya yang lambat.

```C++
procedure insertionSort(A : list of sortable items)
    n = length(A)
    for i = 1 to n-1 do
        key = A[i]
        j = i - 1
        while j >= 0 and A[j] > key do
            A[j + 1] = A[j]
            j = j - 1
        end while
        A[j + 1] = key
    end for
end procedure

```


## Guided 

### 1. Bubble Sort Ascending

```C++
// Guided 1
// bubble sorting
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
Program di atas adalah implementasi algoritma bubble sort dalam bahasa C++. Algoritma ini digunakan untuk mengurutkan array bilangan pecahan secara berurutan dari yang terkecil hingga yang terbesar. Dalam implementasi ini, algoritma Bubble Sort digunakan untuk mengurutkan array a. Proses pengurutan dimulai dari awal array dengan membandingkan setiap pasangan elemen adjacent dan menukarnya jika diperlukan. Proses ini diulang hingga tidak ada lagi pertukaran yang dilakukan dalam satu iterasi.



### 2. Insertion Sort Descending

```C++
// Guided 2

// insertion sorting

# include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {

    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}


```
Program di atas adalah  implementasi algoritma insertion sort dalam bahasa C++. Algoritma ini digunakan untuk mengurutkan array secara berurutan dari yang terbesar hingga yang terkecil. Dalam implementasi ini, algoritma insertion sort digunakan untuk mengurutkan array a. Proses pengurutan dimulai dari elemen kedua dalam array, dan setiap elemen dibandingkan dengan elemen-elemen sebelumnya. Jika elemen saat ini lebih besar dari elemen sebelumnya, maka elemen tersebut akan "disisipkan" ke posisi yang sesuai di antara elemen-elemen sebelumnya. Proses ini diulang hingga semua elemen telah diproses, sehingga array akan terurut secara berurutan dari yang terbesar hingga yang terkecil.





## Unguided 

### 1.  Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!


```C++
#include <iostream>

using namespace std;

// Fungsi untuk melakukan Selection Sort
void selectionSort(float arr[], int n) {
    int i, j, maks;

    // Loop untuk setiap elemen kecuali elemen terakhir
    for (i = 0; i < n - 1; i++) {
        maks = i; // Menginisialisasi indeks maksimum

        // Loop untuk mencari nilai maksimum dari elemen yang belum diurutkan
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maks]) {
                maks = j;
            }
        }

        // Menukar elemen terbesar dengan elemen pertama yang belum diurutkan
        float temp = arr[i];
        arr[i] = arr[maks];
        arr[maks] = temp;
    }
}

int main() {
    // IPS dari masing-masing mahasiswa
    float ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    // Mengurutkan IPS mahasiswa menggunakan Selection Sort
    selectionSort(ips, n);

    // Menampilkan IPS mahasiswa yang telah diurutkan
    cout << "IPS mahasiswa setelah diurutkan dari yang terbesar hingga terkecil:" << endl;
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }
    cout << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}


```
<p><b>Penjelasan:</b></p>

Inisialisasi Array IPS:
- Array ips[] dideklarasikan untuk menyimpan nilai-nilai IPS mahasiswa.
- Nilai-nilai ini adalah: {3.8, 2.9, 3.3, 4.0, 2.4}.

Fungsi selectionSort:
- Fungsi selectionSort dipanggil untuk mengurutkan nilai-nilai dalam array ips[].
- Panjang array ips[] adalah 5, sehingga panjang ini (n) disampaikan sebagai argumen ke dalam fungsi selectionSort.

Algoritma Selection Sort:
- Algoritma Selection Sort dilakukan dalam fungsi selectionSort.
- Iterasi dimulai dari elemen pertama (i = 0) hingga elemen sebelum elemen terakhir (i < n - 1).
- Pada setiap iterasi, nilai maksimum diidentifikasi dalam sisa array yang belum diurutkan.
- Nilai maksimum tersebut kemudian ditukar dengan elemen pertama yang belum diurutkan.
- Proses ini diulang hingga seluruh array terurut.

#### Output:

![Screenshot (1234)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/499a3325-e7c6-4d41-a95b-6df2b24538cd)


#### Full Screenshoot Code:

![Screenshot (1238)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/5bb64ea4-bfc1-43e7-a685-af9a23f77c54)






### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! 

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk melakukan Bubble Sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Menukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Array berisi nama-nama warga Pak RT
    string namaWarga[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(namaWarga) / sizeof(namaWarga[0]);

    // Mengurutkan nama-nama warga menggunakan Bubble Sort
    bubbleSort(namaWarga, n);

    // Menampilkan nama-nama warga yang telah diurutkan
    cout << "Nama-nama warga Pak RT setelah diurutkan sesuai alfabet:" << endl;
    for (int i = 0; i < n; i++) {
        cout << namaWarga[i] << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}


```
<p><b>Penjelasan:</b></p>

Array namaWarga[]:
- Array namaWarga[] menyimpan nama-nama warga Pak RT dalam bentuk string.
- Nilai-nilai yang disimpan dalam array tersebut adalah: {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"}.
- Nama-nama warga tersebut tidak terurut secara alfabet.
  
Fungsi bubbleSort:
- Fungsi ini merupakan implementasi algoritma Bubble Sort.
- Menerima array string arr[] sebagai input, yang merupakan array yang akan diurutkan, dan int n yang menyatakan panjang array tersebut.
- Dalam fungsi ini, terdapat dua loop bersarang:
- Loop pertama (for (int i = 0; i < n - 1; i++)) berjalan sebanyak (n - 1) kali, menunjukkan jumlah iterasi yang diperlukan untuk mengurutkan seluruh array.
- Loop kedua (for (int j = 0; j < n - i - 1; j++)) digunakan untuk membandingkan setiap pasangan elemen adjacent dan melakukan pertukaran jika diperlukan.
- Proses pertukaran dilakukan jika nilai elemen pada indeks j lebih besar dari nilai elemen pada indeks j + 1.

Fungsi dalam main:
- Array namaWarga[] dideklarasikan dan diinisialisasi dengan nama-nama warga Pak RT yang belum terurut.
- Panjang array namaWarga[] dihitung menggunakan ekspresi sizeof(namaWarga) / sizeof(namaWarga[0]) dan disimpan dalam variabel n.
- Fungsi bubbleSort dipanggil untuk mengurutkan array namaWarga[].


#### Output:

![Screenshot (1235)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/d26b7bb3-5cfa-46e8-8be6-6cd0a9b01f7e)

#### Full Screenshoot Code:

![Screenshot (1239)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/77be6144-0ea6-4f17-9527-e3890d93dc19)



### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)! 

```C++
#include <iostream>

using namespace std;

// Fungsi untuk menampilkan alfabet sebelum sorting
void tampilAlfabet(const char alfabet[], int n) {
    cout << "Alfabet sebelum pengurutan: ";
    for (int i = 0; i < n; ++i) {
        cout << alfabet[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk melakukan insertion sort)
void insertionSort(char arr[], int n) {
    int i, j;
    char key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        // Pindahkan elemen dari arr[0..i-1] yang lebih besar dari key
        // ke posisi satu di depan posisi mereka saat ini
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah alfabet (n): ";
    cin >> n;

    char alfabet[n];

    // Meminta pengguna untuk memasukkan alfabet sejumlah n
    for (int i = 0; i < n; ++i) {
        cout << "Alfabet ke-" << i + 1 << ": ";
        cin >> alfabet[i];
    }

    // Memanggil fungsi untuk menampilkan alfabet sebelum pengurutan
    tampilAlfabet(alfabet, n);

    // Panggil fungsi insertion sort untuk mengurutkan alfabet secara menurun
    insertionSort(alfabet, n);

    // Menampilkan hasil pengurutan menurun
    cout << "\nHasil pengurutan menurun (descending): ";
    for (int i = 0; i < n; ++i) {
        cout << alfabet[i] << " ";
    }
    
    cout << "\n\nBy: Fito Satrio (2311110030)" << endl;

    return 0;
}


```
<p><b>Penjelasan:</b></p>

Fungsi tampilAlfabet:
- Fungsi ini digunakan untuk menampilkan alfabet sebelum dilakukan pengurutan.
- Menerima dua parameter, yaitu array const char alfabet[] yang berisi alfabet-alfabet yang akan ditampilkan dan integer n yang merupakan panjang array tersebut.
- Melalui loop, setiap elemen alfabet akan ditampilkan ke layar.
  
Fungsi insertionSort:
- Fungsi ini digunakan untuk melakukan pengurutan array menggunakan algoritma insertion sort secara menurun.
- Menerima dua parameter, yaitu array char arr[] yang akan diurutkan dan integer n yang merupakan panjang array tersebut.
- Algoritma insertion sort digunakan di dalam fungsi ini. Pada algoritma ini, elemen-elemen array akan disusun satu per satu dengan cara - membandingkan dengan elemen sebelumnya, dan jika ditemukan elemen yang lebih besar, maka akan dipindahkan ke posisi yang sesuai.

Fungsi dalam main:
- Meminta pengguna untuk memasukkan jumlah alfabet yang akan dimasukkan (n).
- Array alfabet[] dideklarasikan dengan panjang n.
- Menggunakan loop untuk meminta pengguna memasukkan alfabet sejumlah n.
- Memanggil fungsi tampilAlfabet untuk menampilkan alfabet sebelum pengurutan.
- Memanggil fungsi insertionSort untuk mengurutkan alfabet secara menurun.


#### Output:

![Screenshot (1236)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/6b43d41a-fc59-48fc-bff4-4fd21c83893c)


#### Full Screenshoot Code:

![Screenshot (1240)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/969fd900-c772-4809-b7b9-64d61a96e150)




## Kesimpulan
- ### Hasil Praktikum

- ### Pelajaran yang didapat


## Referensi
[1] T. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, "Introduction to Algorithms," 3rd ed. The MIT Press, 2009.

[2] M. N. Fakhruzzaman, Ika Qutsiati Utami, Purbandini, "BUKU AJAR ALGORITMA PEMROGRAMAN", Airlangga University Press, 2023.

[3] Mark Allen Weiss, "Data Structures and Algorithm Analysis in C++ 4th Edition", Pearson, 2014.
