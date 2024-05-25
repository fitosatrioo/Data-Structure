#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n);

// Fungsi rekursif tidak langsung untuk menghitung faktorial dari n
int faktorial_rekursif(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// Fungsi utama untuk memanggil fungsi rekursif tidak langsung
int faktorial(int n) {
    return faktorial_rekursif(n);
}

int main() {
    int bilangan;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Validasi input, pastikan bilangan positif
    if (bilangan < 0) {
        cout << "Masukkan harus bilangan bulat positif." << endl;
        return 1; // Keluar program dengan kode error
    }

    // Memanggil fungsi faktorial dan menampilkan hasilnya
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial(bilangan) << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

