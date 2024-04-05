#include <iostream>
using namespace std;

int main() {
    int a, i = 1, maks, min, sum = 0, lokasi;
    double rata_rata;
    
    // Meminta panjang array dari pengguna
    cout << "Masukkan panjang array: ";
    cin >> a;
    
    // Mendeklarasikan array
    int array[a];
    
    // Memasukkan elemen-elemen array
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++) {
        cout << "Index ke-" << (i) << ": ";
        cin >> array[i];
    }
    
    // Mencari nilai maksimum
    maks = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Index ke " << lokasi << endl;
    
    // Mencari nilai minimum
    min = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] < min) {
            min = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai minimum adalah " << min << endl;
    
    // Menghitung rata-rata
    for (i = 0; i < a; i++) {
        sum += array[i];
    }
    rata_rata = (double)sum / a;
    cout << "Rata-rata adalah " << rata_rata << endl;
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;


    return 0;
}

