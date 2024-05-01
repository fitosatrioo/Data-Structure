#include <iostream>
#include <string>
#include <algorithm> // Inklusi untuk menggunakan fungsi transform()
using namespace std;

// Fungsi untuk melakukan pencarian biner pada sebuah string
bool binarySearch(string kalimat_030, char target_030, int& index_030) {
    int left_030 = 0;
    int right_030 = kalimat_030.length() - 1;

    // Melakukan pencarian biner
    while (left_030 <= right_030) {
        int mid_030 = left_030 + (right_030 - left_030) / 2;

        // Jika karakter yang dicari ditemukan pada indeks 'mid_030'
        if (kalimat_030[mid_030] == target_030) {
            index_030 = mid_030; // Simpan indeks karakter yang ditemukan
            return true; // Kembalikan true untuk menandakan karakter ditemukan
        } else if (kalimat_030[mid_030] < target_030) {
            left_030 = mid_030 + 1; // Cari di sebelah kanan 'mid_030'
        } else {
            right_030 = mid_030 - 1; // Cari di sebelah kiri 'mid_030'
        }
    }

    return false; // Jika karakter tidak ditemukan, kembalikan false
}

int main() {
    string kalimat_030 = "fito mau ke bank"; // Kalimat yang akan dicari
    char target_030 = 'f'; // Huruf yang ingin dicari
    int index_030;

    // Ubah kalimat menjadi huruf kecil untuk pencarian yang tidak peka huruf besar/kecil
    std::transform(kalimat_030.begin(), kalimat_030.end(), kalimat_030.begin(), ::tolower);

    // Lakukan pencarian menggunakan binary search
    if (binarySearch(kalimat_030, target_030, index_030)) {
        cout << "Huruf '" << target_030 << "' ditemukan dalam kalimat pada indeks ke-" << index_030 << endl;
    } else {
        cout << "Huruf '" << target_030 << "' tidak ditemukan dalam kalimat." << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

