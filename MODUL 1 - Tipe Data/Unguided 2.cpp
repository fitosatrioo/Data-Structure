#include <iostream>
#include <string>

// menyimpan informasi mengenai produk, seperti nama produk, stok yang tersedia, harga, dan deskripsi.
struct Produk {
    std::string nama;
    int stok;
    double harga;
    std::string deskripsi;
};

// Deklarasi class
class Mobil {
public:
    // Terdapat fungsi SetInfo untuk mengatur nilai atribut dan DisplayInfo untuk menampilkan informasi mobil.
    void SetInfo(std::string m, std::string t, int y) {
        merk = m;
        tipe = t;
        tahunProduksi = y;
    }

    // Fungsi untuk menampilkan informasi mobil
    void DisplayInfo() {
        std::cout << "Mobil: " << merk << " " << tipe << " Tahun " << tahunProduksi << std::endl;
    }

private:
    std::string merk;
    std::string tipe;
    int tahunProduksi;
};

int main() {
    // Objek produk1 dari tipe Produk digunakan untuk menyimpan informasi mengenai produk dan menampilkannya ke layar.
    Produk produk1;
    produk1.nama = "Iphone 13 Promax";
    produk1.stok = 10;
    produk1.harga = 20000000;
    produk1.deskripsi = "lorem ipsum dolor sit amet";

    std::cout << "=== Data Produk ===" << std::endl;
    std::cout << "Nama: " << produk1.nama << std::endl;
    std::cout << "Stok: " << produk1.stok << std::endl;
    std::cout << "Harga: " << produk1.harga << std::endl;
    std::cout << "Deskripsi: " << produk1.deskripsi << std::endl;

    // Objek mobil1 dari tipe Mobil digunakan untuk menyimpan informasi mengenai mobil dan menampilkannya ke layar.
    Mobil mobil1;
    mobil1.SetInfo("BMW", "330i M Sport Pro", 2022);

    std::cout << "\n=== Data Mobil ===" << std::endl;
    mobil1.DisplayInfo();

    return 0;
}

