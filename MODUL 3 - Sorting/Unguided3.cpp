#include <iostream>
#include <algorithm> // Untuk penggunaan fungsi sort()

using namespace std;

// Fungsi untuk menampilkan alfabet sebelum sorting
void tampilAlfabet(const char alfabet[], int n) {
    cout << "Alfabet sebelum pengurutan: ";
    for (int i = 0; i < n; ++i) {
        cout << alfabet[i] << " ";
    }
    cout << endl;
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

    // Pengurutan alfabet secara menaik (ascending)
    sort(alfabet, alfabet + n);

    // Menampilkan hasil pengurutan menaik
    cout << "\nHasil pengurutan menaik (ascending): ";
    for (int i = 0; i < n; ++i) {
        cout << alfabet[i] << " ";
    }

    // Pengurutan alfabet secara menurun (descending) tanpa menggunakan greater
    for (int i = 0; i < n / 2; ++i) {
        char temp = alfabet[i];
        alfabet[i] = alfabet[n - i - 1];
        alfabet[n - i - 1] = temp;
    }

    // Menampilkan hasil pengurutan menurun
    cout << "\nHasil pengurutan menurun (descending): ";
    for (int i = 0; i < n; ++i) {
        cout << alfabet[i] << " ";
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

