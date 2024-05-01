#include <iostream>
#include <string>
using namespace std;

struct buku {
    string JudulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    buku mybook;

    // Memasukkan data buku dari input pengguna
    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan data untuk buku " << i + 1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, mybook.JudulBuku[i]);
        cout << "Nama Pengarang: ";
        getline(cin, mybook.pengarang[i]);
        cout << "Nama penerbit: ";
        getline(cin, mybook.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> mybook.tebalHalaman[i];
        cout << "Harga Buku: ";
        cin >> mybook.hargaBuku[i];
        cin.ignore(); // Membersihkan buffer untuk input berikutnya
        cout << endl;
    }

    // Menampilkan data buku
    cout << "=== Deskripsi Buku ===" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Buku " << i + 1 << ":" << endl;
        cout << "Judul Buku: " << mybook.JudulBuku[i] << endl;
        cout << "Nama Pengarang: " << mybook.pengarang[i] << endl;
        cout << "Nama penerbit: " << mybook.penerbit[i] << endl;
        cout << "Tebal Halaman: " << mybook.tebalHalaman[i] << endl;
        cout << "Harga Buku: " << mybook.hargaBuku[i] << endl;
        cout << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
    
    
}

