#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    int num;
    bool compare;

    // Input dari pengguna
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> num;

    // Memeriksa apakah bilangan tersebut genap atau ganjil
    compare = (num % 2 == 0);

    // Menampilkan hasil
    if (compare) {
        cout << num << " adalah bilangan genap." << endl;
    } else {
        cout << num << " adalah bilangan ganjil." << endl;
    }
    
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "By: Fito Satrio (2311110030)" << std::endl;

    return 0;
}
