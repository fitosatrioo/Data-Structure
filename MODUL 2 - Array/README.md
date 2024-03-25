# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

### ARRAY
<div style="text-align: justify">
Array adalah 
</div>


### 1. Array 2 Dimensi

### 2. Array 3 Dimensi
<div style="text-align: justify">
	

</div>


## Guided 

### 1. Array Tiga Dimensi

```C++
// Guided 1
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" <<
z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z
<< "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
				;
            }
            cout << endl;
        }
        cout << endl;
    }
}



```
interpretasi:



### 2. Nilai Maksimal pada Array

```C++
// Guided 2
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

```
interpretasi





## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!


```C++
#include <iostream>

using namespace std;

int main() {
    // Mendeklarasikan array untuk menyimpan data
    int data[10];
    int genap[10], ganjil[10];
    int count_genap = 0, count_ganjil = 0;

    // Meminta pengguna memasukkan data array
    cout << "Masukkan 10 angka untuk data array:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> data[i];
    }

    // Memisahkan nomor genap dan ganjil
    for (int i = 0; i < 10; ++i) {
        if (data[i] % 2 == 0) {
            genap[count_genap] = data[i];
            count_genap++;
        } else {
            ganjil[count_ganjil] = data[i];
            count_ganjil++;
        }
    }

    // Menampilkan hasil
    cout << "Data array: ";
    for (int i = 0; i < 10; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    cout << "Nomor genap: ";
    for (int i = 0; i < count_genap; ++i) {
        cout << genap[i] << " ";
    }
    cout << endl;

    cout << "Nomor ganjil: ";
    for (int i = 0; i < count_ganjil; ++i) {
        cout << ganjil[i] << " ";
    }
    cout << endl;
    
   	cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

```
#### Output:

![Screenshot (1080)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/10efef45-f7ba-4f59-a49b-36a7cf9e6c0e)

#### Full Screenshoot Code:

![Screenshot (1137)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/0f875934-bda5-453d-afe5-49534004b961)

<p><b>Penjelasan:</b></p>




### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
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

```
#### Output:
![Screenshot (1081)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/ea49e19e-eba3-4598-8275-e1e8164262b1)

#### Full Screenshoot Code:

![Screenshot (1138)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/7c29258f-e4ce-4fd9-a58c-bf26e8e91313)

<p><b>Penjelasan:</b></p>



### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user

```C++
#include <iostream>
using namespace std;

int main() {
    int a, i = 1, maks, min, sum = 0, lokasi_max, lokasi_min;
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
            lokasi_max = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Index ke " << lokasi_max << endl;
    
    // Mencari nilai minimum
    min = array[0];
    for (i = 0; i < a; i++) {
        if (array[i] < min) {
            min = array[i];
            lokasi_min = i;
        }
    }
    cout << "Nilai minimum adalah " << min << " berada di Index ke " << lokasi_min << endl;
    
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

```
#### Output:
![Screenshot (1082)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/6fe9df8f-0c90-45df-8ce7-c1c4f05cb785)

#### Full Screenshoot Code:

![Screenshot (1139)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/a699e72b-b3de-4c5b-932e-383ea87d3546)

<p><b>Penjelasan:</b></p>


## Kesimpulan
- ### Hasil Praktikum


- ### Pelajaran yang didapat


## Referensi
[1] Dr. Irmawati, Augury El Rayeb, Carudin, Budanis Dwi Mellani, Apriyanto Halim, Dr. Tutuk Indrayani, et al, "BUKU AJAR PEMROGRAMAN". PT. Sonpedia Publishing Indonesia, 2023.

[2] Raden Budiarto Hadiprakoso, "Pemrograman Berorientasi Objek Teori dan implementasi dengan Java", RBH, 2021

[3] Ema Utami, Sukrisno, "10 Langkah Belajar Logika dan Algoritma. menggunakan Bahasa C dan C++ di GnuLlinux", ANDI OFFSET, 2005

