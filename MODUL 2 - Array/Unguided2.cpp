#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan ukuran atau jumlah elemen
    int a, b, c;

    // Meminta pengguna memasukkan ukuran atau jumlah elemen
    cout << "Masukkan ukuran atau jumlah elemen array (a b c): ";
    cin >> a >> b >> c;

    // Deklarasi array
    int arr[a][b][c];

    // Input elemen
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                cout << "Data Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                cout << arr[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;



    return 0;
}

