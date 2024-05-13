# <h1 align="center">Laporan Praktikum Modul Stack & Queue</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

## A. Stack
Stack adalah struktur data yang mengikuti prinsip LIFO (Last In, First Out), yang berarti item terakhir yang dimasukkan ke dalam tumpukan akan menjadi yang pertama dikeluarkan. Ini mirip dengan menumpuk beberapa buku di atas meja; buku terakhir yang diletakkan di atas tumpukan adalah yang pertama diambil saat menyingkirkan buku-buku tersebut. Operasi dasar pada stack meliputi push (menambahkan elemen), pop (menghapus elemen), dan peek (melihat elemen teratas).

1. Push
Operasi push digunakan untuk menambahkan elemen ke dalam stack. Elemen baru ditambahkan di atas elemen-elemen yang sudah ada sebelumnya. Contohnya, jika kita memiliki stack yang berisi [1, 2, 3], maka dengan melakukan push(4), stack akan menjadi [1, 2, 3, 4].

2. Pop
Operasi pop digunakan untuk menghapus elemen teratas dari stack. Elemen teratas diambil dan dihapus dari stack, dan elemen yang terletak di bawahnya menjadi elemen teratas baru. Contohnya, jika kita memiliki stack [1, 2, 3, 4], maka dengan melakukan pop, elemen teratas (4) akan dihapus, dan stack akan menjadi [1, 2, 3].

3. Peek
Operasi peek digunakan untuk melihat elemen teratas dari stack tanpa menghapusnya. Dengan melakukan peek, kita dapat melihat nilai elemen teratas tanpa mempengaruhi struktur stack. Contohnya, jika kita memiliki stack [1, 2, 3, 4], maka dengan melakukan peek, kita akan melihat bahwa elemen teratasnya adalah 4.

## B. Queue

```r
 
```

## Guided 

### Guided 1

```C++
// Guided 1
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```
Program diatas merupakan implementasi dari struktur data single linked list non-circular dan setiap node memiliki pointer yang menunjukkan ke node berikutnya dalam list. Program ini melakukan serangkaian operasi pengujian terhadap fungsi-fungsi tersebut, seperti menambahkan, menghapus, dan mengubah nilai dari node-node dalam list. dengan penjelasan sebagai berikut: 



### Guided 2 

```C++
// Guided 2

#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```



## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghapus spasi dari string
string removeSpaces(const string& str) {
    string processedStr;
    for(size_t i = 0; i < str.length(); ++i) {
        if(str[i] != ' ') {
            processedStr += str[i];
        }
    }
    return processedStr;
}

// Fungsi untuk menentukan apakah sebuah string adalah palindrom atau tidak
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    // Perbandingan karakter dari kedua ujung string
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Hapus spasi dari string
    string processedInput = removeSpaces(input);

    // Cek apakah string yang sudah diproses adalah palindrom atau tidak
    if (isPalindrome(processedInput)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

```
<p><b>Penjelasan:</b></p>


#### Output:



#### Full Screenshot Code:



### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu.

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    return back == maksimalQueue;
}

bool isEmpty() { // Antrian kosong atau tidak
    return back == 0;
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    int choice;
    string data;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Kurangi Antrian" << endl;
        cout << "3. Lihat Antrian" << endl;
        cout << "4. Jumlah Antrian" << endl;
        cout << "5. Kosongkan Antrian" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Masukkan nama untuk ditambahkan ke antrian: ";
                cin >> data;
                enqueueAntrian(data);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while(choice != 6);
    
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

```
<p><b>Penjelasan:</b></p>
Program ini meminta pengguna untuk melakukan operasi-operasi seperti menambah, menghapus, mengupdate, dan menampilkan data produk kemudian memberikan sebuah menu dengan pilihan operasi yang dapat dilakukan oleh pengguna. Pengguna dapat memilih operasi yang diinginkan dan program akan menjalankan operasi sesuai dengan pilihan pengguna. Setelah setiap operasi, program akan menampilkan hasil operasi tersebut. dengan penjelasan sebagai berikut:



#### Output:

![Screenshot (1281)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/3373d016-ec8d-4849-ad65-942be65643c6)

#### Full Screenshot Code:



## Kesimpulan
- ### Hasil Praktikum
Praktikum kali ini membahas tentang single linked list yang merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial kemudian Double Linked List yang merupakan struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya

- ### Pelajaran yang didapat
Single linked list

Kelebihan:
Implementasi sederhana dan lebih ringan karena setiap node hanya perlu menyimpan satu pointer.
Cocok untuk aplikasi di mana navigasi maju cukup, seperti antrian (queue) dan stack.

Kekurangan:
Tidak mendukung navigasi mundur secara langsung, yang dapat mengakibatkan kinerja yang kurang efisien dalam beberapa operasi.
Operasi seperti menghapus elemen terakhir dalam linked list memerlukan waktu O(n), di mana n adalah jumlah elemen dalam linked list.

Double linked list

kelebihan:
Mendukung navigasi maju dan mundur, sehingga lebih efisien untuk operasi-operasi yang memerlukan penelusuran maju dan mundur.
Operasi penghapusan elemen dari akhir linked list menjadi lebih efisien dengan memiliki pointer ke node sebelumnya.

Kekurangan:
Memerlukan lebih banyak ruang memori karena setiap node harus menyimpan dua pointer tambahan.
Implementasi yang lebih kompleks dibandingkan dengan single linked list.

## Referensi
[1] Hermawan Wijaya, Wibisono Sukmo Wardhono, Issa Arwani, "Implementasi Linked List pada Interaksi Antar Marker Augmented Reality untuk Operand dan Operator Aritmatika", Jurnal Pengembangan Teknologi Informasi dan Ilmu Komputer, 2018.

[2] Felix Andreas Sutanto, "Panduan Praktis Pemrograman Visual Berbasis C++", Yogyakarta; 2021.

[3] M.A. Eljinini, "Practical Data Structures with C++, C#, and Java", Lulu.com, 2020.



