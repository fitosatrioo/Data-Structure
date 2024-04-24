#include <iostream>
using namespace std;

int sequentialSearch_030(int data_030[], int n_030, int target_030) {
    int count_030 = 0; // Inisialisasi variabel count untuk menghitung jumlah kemunculan angka 4

    // Melakukan iterasi untuk setiap elemen dalam array
    for (int i_030 = 0; i_030 < n_030; ++i_030) {
        // Mengecek apakah elemen saat ini adalah angka 4
        if (data_030[i_030] == target_030) {
            count_030++; // Jika ya, increment count
        }
    }

    return count_030; // Mengembalikan jumlah kemunculan angka 4
}

int main() {
    int data_030[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n_030 = sizeof(data_030) / sizeof(data_030[0]); // Menghitung panjang array
    int target_030 = 4; // Angka yang ingin dicari

    int count_030 = sequentialSearch_030(data_030, n_030, target_030);

    cout << "Jumlah kemunculan angka 4 dalam array adalah: " << count_030 << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

