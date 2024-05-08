# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

Linked list merupakan

## Guided 

### Guided 1

```C++
// Guided 1
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```
Program di atas adalah contoh sederhana dari penggunaan struktur (struct) dalam bahasa pemrograman C++. Program ini membuat sebuah struktur bernama buku yang memiliki lima anggota: JudulBuku (Menyimpan judul buku dalam bentuk string), pengarang (Menyimpan nama pengarang buku dalam bentuk string), penerbit (Menyimpan nama penerbit buku dalam bentuk string), tebalHalaman (Menyimpan jumlah halaman buku dalam bentuk bilangan bulat), dan hargaBuku (Menyimpan harga buku dalam bentuk bilangan bulat).


### Guided 2 

```C++
// Guided 2

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        else {
            tail = NULL;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != NULL) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = NULL;
        tail = NULL;
    }

    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            int data;
            cout << "Enter data to add: ";
            cin >> data;
            list.push(data);
            break;
        }
        case 2: {
            list.pop();
            break;
        }
        case 3: {
            int oldData, newData;
            cout << "Enter old data: ";
            cin >> oldData;
            cout << "Enter new data: ";
            cin >> newData;
            bool updated = list.update(oldData, newData);
            if (!updated) {
                cout << "Data not found" << endl;
            }
            break;
        }
        case 4: {
            list.deleteAll();
            break;
        }
        case 5: {
            list.display();
            break;
        }
        case 6: {
            return 0;
        }
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    }
    return 0;
}


```
Program ini adalah contoh sederhana dari penggunaan struktur data dalam pemrograman C++. Struktur data digunakan untuk mengelompokkan beberapa variabel yang memiliki hubungan dan membentuk suatu entitas yang lebih besar.


## Unguided 

### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:

```C++

```
<p><b>Penjelasan:</b></p>



#### Output:


#### Full Screenshoot Code:







### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.

```C++
#include <iostream>
using namespace std;

class Node {
public:
    string namaProduk_030; // Nama produk
    int harga_030; // Harga produk
    Node* prev_030;
    Node* next_030;
};

class DoublyLinkedList {
public:
    Node* head_030;
    Node* tail_030;

    DoublyLinkedList() {
        head_030 = NULL;
        tail_030 = NULL;
    }

    // Fungsi untuk menambahkan produk ke awal daftar
    void tambah(string namaProduk_030, int harga_030) {
        Node* newNode_030 = new Node;
        newNode_030->namaProduk_030 = namaProduk_030;
        newNode_030->harga_030 = harga_030;
        newNode_030->prev_030 = NULL;
        newNode_030->next_030 = head_030;
        if (head_030 != NULL) {
            head_030->prev_030 = newNode_030;
        } else {
            tail_030 = newNode_030;
        }
        head_030 = newNode_030;
    }

    // Fungsi untuk menambahkan produk setelah produk tertentu
    void tambahSetelah(string namaProduk_030, int harga_030, string namaProdukSebelumnya_030) {
        Node* current_030 = head_030;
        while (current_030 != NULL && current_030->namaProduk_030 != namaProdukSebelumnya_030) {
            current_030 = current_030->next_030;
        }
        if (current_030 != NULL) {
            Node* newNode_030 = new Node;
            newNode_030->namaProduk_030 = namaProduk_030;
            newNode_030->harga_030 = harga_030;
            newNode_030->prev_030 = current_030;
            newNode_030->next_030 = current_030->next_030;
            if (current_030->next_030 != NULL) {
                current_030->next_030->prev_030 = newNode_030;
            } else {
                tail_030 = newNode_030;
            }
            current_030->next_030 = newNode_030;
        } else {
            cout << "Produk sebelumnya tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menghapus produk dari awal daftar
    void hapus() {
        if (head_030 == NULL) {
            return;
        }
        Node* temp_030 = head_030;
        head_030 = head_030->next_030;
        if (head_030 != NULL) {
            head_030->prev_030 = NULL;
        } else {
            tail_030 = NULL;
        }
        delete temp_030;
    }

    // Fungsi untuk mengupdate nama produk dan harga berdasarkan nama produk lama
    bool update(string namaProdukLama_030, string namaProdukBaru_030, int hargaBaru_030) {
        Node* current_030 = head_030;
        while (current_030 != NULL) {
            if (current_030->namaProduk_030 == namaProdukLama_030) {
                current_030->namaProduk_030 = namaProdukBaru_030;
                current_030->harga_030 = hargaBaru_030;
                return true;
            }
            current_030 = current_030->next_030;
        }
        return false;
    }

    // Fungsi untuk menghapus produk berdasarkan nama produk
    void hapusBerdasarkanNama(string namaProduk_030) {
        Node* current_030 = head_030;
        while (current_030 != NULL && current_030->namaProduk_030 != namaProduk_030) {
            current_030 = current_030->next_030;
        }
        if (current_030 != NULL) {
            if (current_030->prev_030 != NULL) {
                current_030->prev_030->next_030 = current_030->next_030;
            } else {
                head_030 = current_030->next_030;
            }
            if (current_030->next_030 != NULL) {
                current_030->next_030->prev_030 = current_030->prev_030;
            } else {
                tail_030 = current_030->prev_030;
            }
            delete current_030;
        } else {
            cout << "Produk tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menghapus semua produk dari daftar
    void hapusSemua() {
        Node* current_030 = head_030;
        while (current_030 != NULL) {
            Node* temp_030 = current_030;
            current_030 = current_030->next_030;
            delete temp_030;
        }
        head_030 = NULL;
        tail_030 = NULL;
    }

    // Fungsi untuk menampilkan daftar produk beserta harga
    void tampilkan() {
        Node* current_030 = head_030;
        cout << "Nama Produk\tHarga" << endl;
        while (current_030 != NULL) {
            cout << current_030->namaProduk_030 << "\t" << current_030->harga_030 << endl;
            current_030 = current_030->next_030;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list_030;

    // Menambahkan produk awal ke daftar
    list_030.tambah("Originote", 60000);
    list_030.tambah("Somethinc", 150000);
    list_030.tambah("Skintific", 100000);
    list_030.tambah("Wardah  ", 50000);
    list_030.tambah("Hanasui ", 30000);

    // Menampilkan produk awal
    cout << "Daftar Produk Awal:" << endl;
    list_030.tampilkan();

    // Menu operasi
    while (true) {
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int pilihan_030;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan_030;

        switch (pilihan_030) {
            case 1: {
                string namaProduk_030;
                int harga_030;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk_030;
                cout << "Masukkan harga: ";
                cin >> harga_030;
                list_030.tambah(namaProduk_030, harga_030);
                break;
            }
            case 2: {
                string namaProduk_030;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk_030;
                list_030.hapusBerdasarkanNama(namaProduk_030);
                break;
            }
            case 3: {
                string namaProdukLama_030, namaProdukBaru_030;
                int hargaBaru_030;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> namaProdukLama_030;
                cout << "Masukkan nama produk baru: ";
                cin >> namaProdukBaru_030;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru_030;
                bool berhasil_030 = list_030.update(namaProdukLama_030, namaProdukBaru_030, hargaBaru_030);
                if (!berhasil_030) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk_030, namaProdukSebelumnya_030;
                int harga_030;
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> namaProduk_030;
                cout << "Masukkan harga: ";
                cin >> harga_030;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> namaProdukSebelumnya_030;
                list_030.tambahSetelah(namaProduk_030, harga_030, namaProdukSebelumnya_030);
                break;
            }
            case 5: {
                // Case 5: Hapus Data Urutan Tertentu
                break;
            }
            case 6: {
                list_030.hapusSemua();
                break;
            }
            case 7: {
                list_030.tampilkan();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
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



## Kesimpulan
- ### Hasil Praktikum
Praktikum kali ini membahas tentang struct yang merupakan sebuah fitur yang dapat menyimpan sebuah variabel dengan tipe data yang berbeda - beda. dari guided 1 dan 2 kita mempelajari satu kelas struct dan multiclass struct yang dapat berhubungan dengan kelas struct yang lainnya. kita dapat lihat pada guided 2, untuk menghubungkannya kita menggunakan variabel hewan_info.

- ### Pelajaran yang didapat
Dari struct memungkinkan pengelompokan data terkait menjadi satu unit yang disebut sebagai tipe data baru. Ini memudahkan pengorganisasian data dalam program. Struct dapat memiliki atribut (variabel) dan metode (fungsi) yang memungkinkan untuk memanipulasi dan mengakses data yang terkandung di dalamnya. Struct dapat digunakan dalam berbagai konteks, dari representasi objek dalam pemrograman berorientasi objek hingga penyimpanan data terstruktur dalam program yang lebih umum. Dengan struct, kita dapat membuat representasi data yang kompleks dan terstruktur, yang memudahkan dalam manajemen dan pengolahan data.

## Referensi
[1] S. N Mohanty, P. K. Tripathy, Data Structure and Algorithms Using C++ A Practical Implementation, USA: Wiley, 2021.

[2] A. D. Samala, B. Ramadhani, F. Ranurja, Pemrograman C++, Padang: UNP Press, 2021. 



