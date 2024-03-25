#include <iostream>

using namespace std;

int main() {
    // Mendeklarasikan array untuk menyimpan data
    int data[10];
    int genap[10], ganjil[10];
    int count_genap = 0, count_ganjil = 0;

    // Meminta pengguna memasukkan data array
    cout << "Masukkan 10 angka untuk data array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> data[i];
    }

    // Memisahkan nomor genap dan ganjil
    for (int i = 0; i < 10; ++i) {
        if (data[i] % 2 == 0) {
            genap[count_genap] = data[i];
            count_genap++;
        } else {
            ganjil[count_ganjil] = data[i];
            count_ganjil++;
        }
    }

    // Menampilkan hasil
    cout << "Data array: ";
    for (int i = 0; i < 10; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Nomor genap: ";
    for (int i = 0; i < count_genap; ++i) {
        cout << genap[i] << " ";
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    for (int i = 0; i < count_ganjil; ++i) {
        cout << ganjil[i] << " ";
    }
    cout << endl;
    
   	cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

