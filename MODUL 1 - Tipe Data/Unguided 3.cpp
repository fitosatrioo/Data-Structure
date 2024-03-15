#include <iostream>
#include <map>

int main() {
    // sebuah map dengan key bertipe int dan value bertipe std::string dideklarasikan dengan nama Buah dan langsung diinisialisasi.
    std::map<int, std::string> Buah;

    // Elemen-elemen dengan key dan value tertentu ditambahkan ke dalam map. Setiap key (angka) diassign dengan nama buah yang sesuai.
    Buah[1] = "Jeruk";
    Buah[2] = "Apel";
    Buah[3] = "Pisang";
    Buah[4] = "Melon";
    Buah[5] = "Semangka";

    // menampilkan elemen-elemen map dengan menggunakan perintah std::cout. 
   //  Pesan yang ditampilkan memberikan judul "=== Nama Buah ===" dan menampilkan nama-nama buah sesuai dengan key-nya.
    std::cout << "=== Nama Buah ===" << std::endl;
    std::cout << "Buah 1: " << Buah[1] << std::endl;
    std::cout << "Buah 2: " << Buah[2] << std::endl;
    std::cout << "Buah 3: " << Buah[3] << std::endl;
    std::cout << "Buah 4: " << Buah[4] << std::endl;
    std::cout << "Buah 5: " << Buah[5] << std::endl;
    
    
	    std::cout << "" << std::endl;
	    std::cout << "" << std::endl;
	    std::cout << "By: Fito Satrio (2311110030)" << std::endl;

    return 0;
}

