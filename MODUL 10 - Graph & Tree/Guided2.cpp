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

