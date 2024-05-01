#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string Nama_hewan;
    string Jenis_kelamin;
    string cara_berkembangbiak;
    string alat_pernafasan;
    string tempat_hidup;
    bool karnivora;
};

struct hewanDarat {
    hewan info_hewan;
    int jumlah_kaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    hewan info_hewan;
    string sirip;
    string pertahanan_diri;
};

int main() {
    hewanDarat hewan_darat1; // Renamed variable to hewan_darat1
    hewanLaut hewan_laut1;   // Renamed variable to hewan_laut1
    
    hewan_darat1.info_hewan.Nama_hewan = "Kucing Ireng";
    hewan_darat1.info_hewan.Jenis_kelamin = "betina";
    hewan_darat1.info_hewan.cara_berkembangbiak = "Vivipar / melahirkan";
    hewan_darat1.info_hewan.alat_pernafasan = "Paru - Paru";
    hewan_darat1.info_hewan.tempat_hidup = "Darat";
    hewan_darat1.info_hewan.karnivora = true;
    hewan_darat1.jumlah_kaki = 4;
    hewan_darat1.menyusui = true;
    hewan_darat1.suara = "meow";

    hewan_laut1.info_hewan.Nama_hewan = "Ikan Hiu";
    hewan_laut1.info_hewan.Jenis_kelamin = "jantan";
    hewan_laut1.info_hewan.cara_berkembangbiak = "Ovovivipar";
    hewan_laut1.info_hewan.alat_pernafasan = "Insang";
    hewan_laut1.info_hewan.tempat_hidup = "Laut";
    hewan_laut1.info_hewan.karnivora = true;
    hewan_laut1.sirip = "besar dan kuat";
    hewan_laut1.pertahanan_diri = "menggunakan gigi dan sirip";

    cout <<"=== HEWAN DARAT ===" << endl;
    cout <<"Nama Hewan: " << hewan_darat1.info_hewan.Nama_hewan << endl;
    cout <<"Jenis Kelamin: " << hewan_darat1.info_hewan.Jenis_kelamin << endl;
    cout <<"Cara Berkembangbiak: " << hewan_darat1.info_hewan.cara_berkembangbiak << endl;
    cout <<"Alat Pernafasan: " << hewan_darat1.info_hewan.alat_pernafasan << endl;
    cout <<"Tempat Hidup: " << hewan_darat1.info_hewan.tempat_hidup << endl;
    cout <<"Apakah Karnivora?: " << (hewan_darat1.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout <<"Jumlah Kaki: " << hewan_darat1.jumlah_kaki << endl;
    cout <<"Apakah Menyusui?: " << (hewan_darat1.menyusui ? "Ya" : "Tidak") << endl;
    cout <<"Suara: " << hewan_darat1.suara << endl;

    cout <<"\n=== HEWAN LAUT ===" << endl;
    cout <<"Nama Hewan: " << hewan_laut1.info_hewan.Nama_hewan << endl;
    cout <<"Jenis Kelamin: " << hewan_laut1.info_hewan.Jenis_kelamin << endl;
    cout <<"Cara Berkembangbiak: " << hewan_laut1.info_hewan.cara_berkembangbiak << endl;
    cout <<"Alat Pernafasan: " << hewan_laut1.info_hewan.alat_pernafasan << endl;
    cout <<"Tempat Hidup: " << hewan_laut1.info_hewan.tempat_hidup << endl;
    cout <<"Apakah Karnivora?: " << (hewan_laut1.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout <<"Bentuk Sirip: " << hewan_laut1.sirip << endl;
    cout <<"Pertahanan Diri: " << hewan_laut1.pertahanan_diri << endl;

    return 0;
}

