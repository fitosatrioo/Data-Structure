# <h1 align="center">Laporan Praktikum Modul Graph & Tree</h1>

<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

## Graph
Graph ialah struktur data yang terdiri dari himpunan simpul (vertex) yang terhubung oleh himpunan busur (edge). Graf dapat digunakan untuk merepresentasikan berbagai jenis hubungan antara objek, seperti jaringan komputer, jaringan sosial, rute perjalanan, dan lain sebagainya [1].

Jenis Graph:
- Graf Berarah (Directed Graph), adalah graf yang setiap busurnya memiliki arah tertentu yang menunjukkan hubungan satu arah antara dua simpul.
- Graf Tidak Berarah (Undirected Graph), adalah graf yang setiap busurnya tidak memiliki arah yang spesifik, sehingga hubungan antara dua simpul bersifat dua arah.
- Graf Berbobot (Weighted Graph), adalah graf yang setiap busurnya memiliki bobot atau nilai yang menunjukkan "biaya" atau "jarak" dari satu simpul ke simpul lainnya.
- Graf Terhubung (Connected Graph), adalah graf yang setiap pasangan simpulnya dalam graf dapat dihubungkan oleh sekurang-kurangnya satu jalur.
- Graf Tidak Terhubung (Disconnected Graph), adalah graf yang terdapat setidaknya satu pasangan simpul yang tidak dapat dihubungkan oleh jalur.

Representasi Graph:
1. Matriks Ketetanggaan (Adjacency Matrix): Menggunakan matriks dua dimensi di mana elemen mat[i][j] menunjukkan apakah terdapat busur dari simpul i ke simpul j.
2. Daftar Ketetanggaan (Adjacency List): Menggunakan daftar (array, linked list, atau struktur data lainnya) yang menyimpan daftar tetangga dari setiap simpul.

## Tree
Pohon atau Tree adalah struktur data hierarkis yang terdiri dari simpul-simpul yang terhubung satu sama lain melalui edge atau busur. Setiap simpul dalam pohon memiliki tepat satu simpul yang disebut sebagai parent (induk), kecuali simpul paling atas yang disebut sebagai root (akar) [1]. Setiap simpul dapat memiliki beberapa simpul anak (children).

Komponen Pohon:

- Akar (Root) yang merupakan simpul paling atas dari pohon, yang tidak memiliki simpul induk.
- Simpul Anak (Children) merupakan simpul-simpul yang berada di bawah simpul induk.
- Simpul Induk (Parent) adalah simpul yang berada di atas simpul anak.
- Daun (Leaf): Simpul yang tidak memiliki anak.
- Tingkat (Level) merupakan jarak dari simpul tertentu ke akar, dengan tingkat akar adalah 0.
- Tinggi (Height) ialah jumlah tingkat maksimum dalam pohon, atau jarak maksimum dari akar ke daun terjauh.

Tipe-tipe Tree:

1. Binary Tree: Setiap simpul memiliki maksimal dua anak.
2. Binary Search Tree (BST): Binary tree yang setiap simpulnya memenuhi sifat bahwa nilai di simpul kiri kurang dari nilai simpul itu sendiri, dan nilai di 3. simpul kanan lebih besar dari nilai simpul itu sendiri.
3. Balanced Tree: Pohon di mana perbedaan tinggi subtree kiri dan subtree kanan untuk setiap simpul tidak lebih dari 1.
4. Binary Heap: Binary tree khusus yang memenuhi sifat tertentu. Misalnya, dalam Max Heap, nilai setiap simpul lebih besar atau sama dengan nilai anak-anaknya.
5. AVL Tree: Jenis pohon pencarian biner yang seimbang dan memiliki ketinggian yang terjaga. Setiap kali simpul ditambahkan atau dihapus, pohon menjaga keseimbangan dengan melakukan rotasi tertentu.

Operasi pada Tree:

a. Traversing (Penjelajahan): Melakukan pemrosesan data pada setiap simpul dalam pohon dengan urutan tertentu, seperti pre-order, in-order, dan post-order.
Pencarian: Mencari elemen tertentu dalam pohon.
b. Penambahan dan Penghapusan: Menambahkan atau menghapus elemen dari pohon.
c. Membangun Tree: Membangun pohon dari data yang diberikan.



## Guided

## Guided 1

```C++
// Guided 1
#include <iostream>
#include <iomanip>
using namespace std;

// Definisi simpul dan busur
string simpul[7] = {"Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

// Fungsi untuk menampilkan graph
void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << simpul[kolom] << "{" << busur[baris][kolom] << "} ";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}


```


Program ini adalah contoh implementasi dari representasi graf menggunakan matriks ketetanggaan. Graf yang direpresentasikan di sini adalah graf berarah dengan bobot pada setiap busur.

- Variabel simpul adalah array yang berisi label simpul-simpul dalam graf.
- Variabel busur adalah matriks yang menyimpan bobot setiap busur antara simpul-simpul. Jika terdapat busur dari simpul i ke simpul j, maka bobotnya disimpan di busur[i][j]. Jika tidak ada busur dari simpul i ke simpul j, maka nilai di busur[i][j] adalah 0.
- Fungsi tampilGraph digunakan untuk menampilkan graf ke layar. Ini dilakukan dengan iterasi melalui setiap baris dan kolom dalam matriks busur, kemudian mencetak label simpul dan bobot busur yang terhubung dengan simpul tersebut.



## Guided 2

```C++
// Guided 2
#include <iostream>
using namespace std;

// Definisi struktur pohon
struct Pohon {
    Pohon* kanan;
    char data;
    Pohon* kiri;
};

// Deklarasi variabel global
Pohon* root;
Pohon* alamat[256];

// Fungsi untuk inisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
Pohon* simpulBaru(char dataMasukkan) {
    Pohon* simpul = new Pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
    return simpul;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data: ";
        cin >> dataAnda;
        root = simpulBaru(dataAnda);
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl;
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1;
        char dataUser;
        alamat[i] = root;

        while (j < 256) {
            cout << "Masukkan data kiri (atau '0' untuk berhenti): ";
            cin >> dataUser;
            if (dataUser != '0') {
                alamat[i]->kiri = simpulBaru(dataUser);
                j++;
                alamat[j] = alamat[i]->kiri;
            } else {
                alamat[j] = NULL;
                break;
            }

            cout << "Masukkan data kanan (atau '0' untuk berhenti): ";
            cin >> dataUser;
            if (dataUser != '0') {
                alamat[i]->kanan = simpulBaru(dataUser);
                j++;
                alamat[j] = alamat[i]->kanan;
            } else {
                alamat[j] = NULL;
                break;
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() {
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            cout << alamat[i]->data << " ";
            pencacah++;
            if (pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

// Fungsi utama
int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}



```

Program ini merupakan implementasi sederhana dari struktur data pohon biner. Pohon biner adalah struktur data hierarkis di mana setiap simpul memiliki paling banyak dua anak: satu anak di sebelah kiri dan satu di sebelah kanan.
Isi dari program ini mencakup: Program ini memberikan interaksi kepada pengguna untuk membuat pohon biner dengan memasukkan data ke dalam setiap simpul. Kemudian, program menampilkan isi pohon secara berurutan dari simpul kiri ke kanan.

- Definisi struktur Pohon yang merepresentasikan setiap simpul dalam pohon. Struktur ini memiliki tiga bagian utama: sebuah data, dan dua pointer ke simpul anak kiri dan kanan.
- Deklarasi variabel global, di antaranya root yang merupakan pointer ke simpul akar dari pohon.
- Fungsi-fungsi untuk inisialisasi pohon, pembuatan simpul baru, penambahan simpul ke dalam pohon, dan pencetakan isi pohon.
- Fungsi utama (main()) yang mengatur alur program dengan memanggil fungsi-fungsi tersebut.







## Unguided

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.

```C++
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_SIMPUL = 10; // Maksimal jumlah simpul

// Definisi struktur graf
struct Graph {
    int jumlahSimpul__2311110030;
    string simpul__2311110030[MAX_SIMPUL];
    int jarak__2311110030[MAX_SIMPUL][MAX_SIMPUL];

    // Konstruktor untuk inisialisasi graf
    Graph(int n) : jumlahSimpul__2311110030(n) {
        for (int i__2311110030 = 0; i__2311110030 < jumlahSimpul__2311110030; ++i__2311110030) {
            for (int j__2311110030 = 0; j__2311110030 < jumlahSimpul__2311110030; ++j__2311110030) {
                jarak__2311110030[i__2311110030][j__2311110030] = 0; // Inisialisasi jarak antar simpul menjadi 0
            }
        }
    }

    // Fungsi untuk menambahkan jarak antar simpul
    void tambahJarak__2311110030(int simpulAwal__2311110030, int simpulTujuan__2311110030, int jarakAntar__2311110030) {
        jarak__2311110030[simpulAwal__2311110030][simpulTujuan__2311110030] = jarakAntar__2311110030;
    }

    // Fungsi untuk menampilkan graf
    void tampilGraf__2311110030() {
        // Menampilkan header baris
        cout << setw(10) << " ";
        for (int i__2311110030 = 0; i__2311110030 < jumlahSimpul__2311110030; ++i__2311110030) {
            cout << setw(10) << simpul__2311110030[i__2311110030];
        }
        cout << endl;

        // Menampilkan jarak antar simpul
        for (int i__2311110030 = 0; i__2311110030 < jumlahSimpul__2311110030; ++i__2311110030) {
            cout << setw(10) << simpul__2311110030[i__2311110030];
            for (int j__2311110030 = 0; j__2311110030 < jumlahSimpul__2311110030; ++j__2311110030) {
                cout << setw(10) << jarak__2311110030[i__2311110030][j__2311110030];
            }
            cout << endl;
        }
    }
};

int main() {
    int jumlahSimpul__2311110030;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul__2311110030;

    // Validasi jumlah simpul
    if (jumlahSimpul__2311110030 <= 0 || jumlahSimpul__2311110030 > MAX_SIMPUL) {
        cout << "Jumlah simpul tidak valid. Harap masukkan angka antara 1 dan " << MAX_SIMPUL << ".\n";
        return 1;
    }

    // Membuat objek graf dengan jumlah simpul yang telah dimasukkan
    Graph graf__2311110030(jumlahSimpul__2311110030);

    // Memasukkan nama-nama simpul
    cout << "Silakan masukkan nama simpul:\n";
    for (int i__2311110030 = 0; i__2311110030 < jumlahSimpul__2311110030; ++i__2311110030) {
        cout << "Simpul " << i__2311110030+1 << ": ";
        cin >> graf__2311110030.simpul__2311110030[i__2311110030];
    }

    // Memasukkan jarak antar simpul
    cout << "Silakan masukkan bobot antar simpul:\n";
    for (int i__2311110030 = 0; i__2311110030 < jumlahSimpul__2311110030; ++i__2311110030) {
        for (int j__2311110030 = 0; j__2311110030 < jumlahSimpul__2311110030; ++j__2311110030) {
            cout << graf__2311110030.simpul__2311110030[i__2311110030] << " ---> " << graf__2311110030.simpul__2311110030[j__2311110030] << " = ";
            cin >> graf__2311110030.jarak__2311110030[i__2311110030][j__2311110030];
        }
    }

    // Menampilkan graf
    cout << endl;
    graf__2311110030.tampilGraf__2311110030();


    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;
    return 0;
}



```

<p><b>Penjelasan:</b></p>
Program ini mendemonstrasikan cara membentuk dan menampilkan graf berdasarkan input pengguna, menggunakan struktur data dasar seperti array dua dimensi dan manipulasi string untuk menampilkan data dalam format tabel. Berikut adalah uraian mengenai konsep dan langkah-langkah utama yang dilakukan oleh program ini:

Deklarasi dan Inisialisasi:
- Program menggunakan konstanta MAX_SIMPUL untuk menentukan jumlah maksimum simpul (nodes) yang dapat dimiliki graf, yang diatur ke 10.
- Struktur Graph didefinisikan untuk merepresentasikan graf, yang terdiri dari jumlah simpul (jumlahSimpul__2311110030), nama-nama simpul (simpul__2311110030), dan matriks jarak (jarak__2311110030).


Inisialisasi Objek Graph:
- Konstruktor Graph menginisialisasi jumlah simpul dan mengatur semua jarak antar simpul menjadi 0. Ini dilakukan melalui dua loop bersarang yang mengisi matriks jarak dengan nilai 0.

Menambahkan Jarak Antar Simpul:
- Fungsi tambahJarak__2311110030 digunakan untuk menambahkan atau memperbarui jarak antara dua simpul tertentu.

Menampilkan Graf:
- Fungsi tampilGraf__2311110030 menampilkan graf dalam bentuk tabel. Header tabel terdiri dari nama-nama simpul, dan setiap baris menunjukkan jarak dari simpul tersebut ke simpul lainnya.
- Fungsi ini menggunakan manipulasi string untuk memastikan tampilan tabel yang rapi dan mudah dibaca.

inputan Pengguna:
- Program dimulai dengan meminta pengguna memasukkan jumlah simpul. Jika jumlah simpul yang dimasukkan tidak valid (lebih dari MAX_SIMPUL atau kurang dari 1), program akan menampilkan pesan kesalahan dan berhenti.
- Setelah jumlah simpul valid diterima, pengguna diminta untuk memasukkan nama-nama simpul satu per satu.
- Selanjutnya, program meminta pengguna untuk memasukkan bobot atau jarak antar simpul untuk setiap pasangan simpul dalam graf.
- Setelah semua data dimasukkan, program menampilkan graf yang telah dibentuk dalam format tabel.


#### Output:

![Screenshot (1425)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/4045b7b4-e3ed-4587-9746-87d686c504b4)



```C++
##include <iostream>
using namespace std;

// Definisi struktur pohon
struct Pohon_2311110030 {
    Pohon_2311110030* kiri_2311110030;
    char data_2311110030;
    Pohon_2311110030* kanan_2311110030;
};

// Deklarasi variabel global
Pohon_2311110030* root_2311110030;

// Fungsi untuk inisialisasi root
void inisialisasi_2311110030() {
    root_2311110030 = NULL;
}

// Fungsi untuk membuat simpul baru
Pohon_2311110030* simpulBaru_2311110030(char dataMasukkan_2311110030) {
    Pohon_2311110030* simpul_2311110030 = new Pohon_2311110030;
    simpul_2311110030->data_2311110030 = dataMasukkan_2311110030;
    simpul_2311110030->kiri_2311110030 = NULL;
    simpul_2311110030->kanan_2311110030 = NULL;
    return simpul_2311110030;
}

// Fungsi untuk menambah simpul ke pohon
void tambahSimpul_2311110030(Pohon_2311110030* &pohon_2311110030, char data_2311110030) {
    if (pohon_2311110030 == NULL) {
        pohon_2311110030 = simpulBaru_2311110030(data_2311110030);
    } else if (data_2311110030 <= pohon_2311110030->data_2311110030) {
        tambahSimpul_2311110030(pohon_2311110030->kiri_2311110030, data_2311110030);
    } else {
        tambahSimpul_2311110030(pohon_2311110030->kanan_2311110030, data_2311110030);
    }
}

// Fungsi untuk mencetak pohon secara pre-order
void preOrder_2311110030(Pohon_2311110030* pohon_2311110030) {
    if (pohon_2311110030 != NULL) {
        cout << pohon_2311110030->data_2311110030 << " ";
        preOrder_2311110030(pohon_2311110030->kiri_2311110030);
        preOrder_2311110030(pohon_2311110030->kanan_2311110030);
    }
}

// Fungsi untuk mencetak pohon secara in-order
void inOrder_2311110030(Pohon_2311110030* pohon_2311110030) {
    if (pohon_2311110030 != NULL) {
        inOrder_2311110030(pohon_2311110030->kiri_2311110030);
        cout << pohon_2311110030->data_2311110030 << " ";
        inOrder_2311110030(pohon_2311110030->kanan_2311110030);
    }
}

// Fungsi untuk mencetak pohon secara post-order
void postOrder_2311110030(Pohon_2311110030* pohon_2311110030) {
    if (pohon_2311110030 != NULL) {
        postOrder_2311110030(pohon_2311110030->kiri_2311110030);
        postOrder_2311110030(pohon_2311110030->kanan_2311110030);
        cout << pohon_2311110030->data_2311110030 << " ";
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu_2311110030() {
    cout << "\nMenu:\n";
    cout << "1. Tambah simpul\n";
    cout << "2. Tampilkan pre-order\n";
    cout << "3. Tampilkan in-order\n";
    cout << "4. Tampilkan post-order\n";
    cout << "5. Keluar\n";
    cout << "Pilihan: ";
}

int main() {
    inisialisasi_2311110030();
    int pilihan_2311110030;
    char data_2311110030;

    do {
        tampilkanMenu_2311110030();
        cin >> pilihan_2311110030;

        switch (pilihan_2311110030) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data_2311110030;
                tambahSimpul_2311110030(root_2311110030, data_2311110030);
                break;
            case 2:
                cout << "Pre-order: ";
                preOrder_2311110030(root_2311110030);
                cout << endl;
                break;
            case 3:
                cout << "In-order: ";
                inOrder_2311110030(root_2311110030);
                cout << endl;
                break;
            case 4:
                cout << "Post-order: ";
                postOrder_2311110030(root_2311110030);
                cout << endl;
                break;
            case 5:
                cout << "Terima kasih!\n";
                break;

        }
    } while (pilihan_2311110030 != 5);

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}


```

<p><b>Penjelasan:</b></p>

Program ini adalah implementasi pohon biner menggunakan bahasa pemrograman C++. Pohon biner adalah struktur data di mana setiap simpul (node) memiliki paling banyak dua anak, yaitu anak kiri dan anak kanan. Program ini memungkinkan pengguna untuk menambahkan simpul ke dalam pohon dan kemudian menampilkan isi pohon dalam tiga jenis traversal: pre-order, in-order, dan post-order.

- Program dimulai dengan mendefinisikan struktur pohon yang terdiri dari tiga elemen utama: anak kiri, data, dan anak kanan. Setiap simpul dalam pohon diwakili oleh struktur ini. Program juga mendeklarasikan sebuah variabel global root yang akan menunjuk ke akar pohon.
- Inisialisasi akar pohon sebagai NULL, yang berarti pohon dimulai dalam keadaan kosong.
- Membuat simpul baru dalam pohon dengan data yang diberikan oleh pengguna. Simpul baru ini akan memiliki anak kiri dan anak kanan yang diinisialisasi sebagai NULL.
- menambahkan simpul baru ke pohon berdasarkan nilai data. Jika pohon masih kosong (akar NULL), simpul baru akan menjadi akar pohon. Jika tidak, data akan dibandingkan dengan data simpul saat ini untuk menentukan apakah simpul baru akan ditempatkan di anak kiri atau anak kanan.

Traversal Pohon
Traversal pohon adalah proses mengunjungi setiap simpul dalam pohon dengan urutan tertentu [2]. Program ini mendukung tiga jenis traversal:

1. Pre-order:
Dalam traversal pre-order, simpul saat ini dikunjungi terlebih dahulu, diikuti oleh anak kiri, kemudian anak kanan.

2. In-order:
Dalam traversal in-order, anak kiri dikunjungi terlebih dahulu, diikuti oleh simpul saat ini, kemudian anak kanan. Traversal ini menghasilkan urutan data yang terurut secara ascending jika diterapkan pada pohon biner pencarian.

3. Post-order:
Dalam traversal post-order, anak kiri dikunjungi terlebih dahulu, diikuti oleh anak kanan, dan akhirnya simpul saat ini.


#### Output:

a. Menambahkan Simpul
![Screenshot (1426)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/fc0926f9-18c7-494f-bc1f-543bbaabb177)

b. Pre-Order

![Screenshot (1427)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/960bea9f-a39f-496f-9f29-ad5c2f63fc7b)

c. In-Order

![Screenshot (1428)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/efd6e5bd-8054-4637-a831-3438fb21b841)

d. Post-Order

![Screenshot (1429)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/8508618e-c4f2-46b1-83c2-76b2e8c6034f)




## Kesimpulan


Graph dan Tree adalah struktur data yang esensial dengan beragam aplikasi praktis. Graph sangat fleksibel dan digunakan untuk memodelkan hubungan kompleks di berbagai domain, sementara Tree menawarkan struktur hierarkis yang efisien untuk pencarian dan pengelolaan data. Pemahaman mendalam tentang konsep, jenis, dan algoritma yang terkait dengan graph dan tree sangat penting bagi siapa saja yang terlibat dalam pengembangan perangkat lunak, analisis data, dan ilmu komputer pada umumnya.

## Referensi

[1]. H. Cormen, C. E. Leiserson, R. L. Rivest, and C. Stein, Introduction to Algorithms, 3rd ed. Cambridge, MA: MIT Press, 2009.

[3] M. T. Goodrich, R. Tamassia, and M. H. Goldwasser, Data Structures and Algorithms in Java, 6th ed. Hoboken, NJ: Wiley, 2014.

