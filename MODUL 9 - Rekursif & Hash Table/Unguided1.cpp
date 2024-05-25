#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis kasus: jika n adalah 0 atau 1, faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Langkah rekursif: faktorial(n) = n * faktorial(n-1)
    return n * faktorial(n - 1);
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

