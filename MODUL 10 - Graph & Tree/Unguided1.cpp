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

