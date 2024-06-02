#include <iostream>
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

