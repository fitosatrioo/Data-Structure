# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori
<div style="text-align: justify">
Array adalah struktur data yang digunakan untuk menyimpan kumpulan elemen data dengan tipe yang sama, yang diidentifikasi oleh indeks atau nomor yang berurutan. Dalam array, setiap elemen dapat diakses melalui indeksnya. Indeks biasanya dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu.
</div>


### 1. Array satu Dimensi
array satu dimensi dapat dianggap sebagai barisan kotak memori yang ditempatkan berdampingan secara berurutan dalam memori komputer. Setiap kotak (elemen array) memiliki nomor indeksnya sendiri, yang memungkinkan program untuk mengakses elemen tertentu dalam array dengan menggunakan indeks tersebut. suatu array yang sudah di deklarasikan dpaat diisi elemennya[1]. Contoh dalam kehidupan sehari - hari adalah Daftar Nilai Siswa: Di sekolah, guru sering menggunakan array satu dimensi untuk menyimpan nilai-nilai siswa dalam satu kelas. Setiap elemen dalam array akan mewakili nilai dari satu siswa. Dengan menggunakan array, guru dapat dengan mudah mengakses dan mengelola data nilai siswa. yaitu  [85, 90, 78, 92, 88, 95, 87]

### 2. Array dua Dimensi
<div style="text-align: justify">
	

</div>

### 3. Array Multidimensi
<div style="text-align: justify">
	

</div>

### 4. Array Empat Dimensi
<div style="text-align: justify">
	

</div>

### 4. Array Empat Dimensi
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
Program diatas adalah contoh program sederhana dari array tiga dimensi dalam bahasa C++. Aplikasi semacam ini dapat digunakan dalam berbagai konteks di mana data perlu disimpan dan diakses dalam bentuk yang terstruktur dengan lebih dari dua dimensi.
Pengguna diminta untuk memasukkan nilai setiap elemen array dengan menggunakan tiga loop bersarang. Loop pertama (x) mengontrol indeks baris pertama, loop kedua (y) mengontrol indeks baris kedua, dan loop ketiga (z) mengontrol indeks kolom. etelah mencetak semua elemen, program mencetak kembali isi array dalam format yang lebih terstruktur, menampilkan setiap baris secara terpisah, dengan menggunakan loop yang serupa lagi.


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
Program di atas adalah contoh aplikasi sederhana dari konsep array dalam bahasa pemrograman C++. Program ini bertujuan untuk mencari nilai maksimum dalam sebuah array yang diinputkan oleh pengguna. Program ini melakukan iterasi melalui semua elemen array dan membandingkan setiap elemen dengan nilai maksimum yang saat ini disimpan dalam variabel maks. Jika suatu elemen lebih besar dari nilai maksimum yang disimpan, maka nilai maksimum diperbarui dengan nilai tersebut, dan indeksnya disimpan dalam variabel lokasi.





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
<p><b>Penjelasan:</b></p>
program diatas merupakan program untuk menyimpan 10 data array kemudian menyimpan bilangan genap dari panjang 10 array tersebut dan menyimpan bilangan ganjil dari panjang 10 array tersebut. dengan penjelasan:

Program mendeklarasikan array data dengan panjang 10 untuk menyimpan data yang dimasukkan oleh pengguna. Selain itu, dua array tambahan genap dan ganjil juga dideklarasikan untuk menyimpan angka genap dan ganjil secara terpisah. Variabel count_genap dan count_ganjil digunakan untuk melacak jumlah angka genap dan ganjil yang telah dimasukkan ke dalam array genap dan ganjil.

Setelah pengguna memasukkan angka, program menggunakan loop for untuk memeriksa setiap angka dalam array data. Jika angka tersebut habis dibagi dua (modulus 2 sama dengan 0), maka angka tersebut merupakan angka genap dan dimasukkan ke dalam array genap. Jika tidak, angka tersebut merupakan angka ganjil dan dimasukkan ke dalam array ganjil.

#### Output:

![Screenshot (1175)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/6b4d1e00-ea0a-4b4d-8542-91fc5ec784f0)


#### Full Screenshoot Code:

![Screenshot (1177)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/2e8efd94-659a-48c2-87cf-82eb7c44e890)






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
<p><b>Penjelasan:</b></p>
Program di atas adalah sebuah contoh program dalam bahasa C++ yang menggunakan array tiga dimensi. Program ini meminta pengguna untuk memasukkan ukuran atau jumlah elemen array tiga dimensi (dalam hal ini, ukuran untuk setiap dimensi: a, b, dan c), kemudian mengisi array tersebut dengan nilai-nilai yang dimasukkan oleh pengguna. Variabel a, b, dan c digunakan untuk menyimpan ukuran atau jumlah elemen dalam masing-masing dimensi array kemudian Program meminta pengguna untuk memasukkan ukuran atau jumlah elemen array untuk masing-masing dimensi.

Program menggunakan tiga loop bersarang (for) untuk meminta pengguna memasukkan nilai-nilai untuk setiap elemen array. Setiap loop mengatur indeks untuk masing-masing dimensi array, Setelah semua elemen array diisi, program mencetak nilai setiap elemen array ke layar bersama dengan indeksnya.




#### Output:
![Screenshot (1176)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/166af0de-fb7e-4790-a355-64897c9b94d9)

#### Full Screenshoot Code:

![Screenshot (1178)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/b36049aa-5c33-477b-9369-34296ec66b2c)





### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user

```C++
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


```
<p><b>Penjelasan:</b></p>
program diatas merupakan sebuah program untuk mencari suatu nilai maksimum, minimum kemudian rata - rata dari suatu panjang array yang diinputkan dari user. 
Variabel a, i, maks, min, sum, lokasi, dan rata_rata dideklarasikan. Variabel ini akan digunakan untuk menyimpan panjang array, iterasi, nilai maksimum, nilai minimum, total nilai, lokasi nilai maksimum/minimum, dan rata-rata, secara berturut-turut kemudian meminta pengguna untuk memasukkan panjang array yang diinginkan. Array array dideklarasikan dengan panjang yang telah dimasukkan oleh pengguna.

kemudian program meminta pengguna untuk memasukkan nilai-nilai untuk setiap elemen array menggunakan loop for selanjutnya program mencari nilai maksimum dalam array dengan melakukan iterasi melalui semua elemen dan membandingkan setiap elemen dengan nilai maksimum yang disimpan kemudian program mencari nilai minimum dalam array dengan melakukan iterasi melalui semua elemen dan membandingkan setiap elemen dengan nilai minimum yang disimpan. dan yang terakhir Program menghitung rata-rata dari semua elemen array dengan menjumlahkan semua elemen dan membaginya dengan jumlah elemen.




#### Output:

![Screenshot (1181)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/15bbff0d-c27b-44e3-9eec-667dc079a8cc)


#### Full Screenshoot Code:

![Screenshot (1179)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/3ca45f97-64d1-49a3-b4fd-c715436de84f)




## Kesimpulan
- ### Hasil Praktikum


- ### Pelajaran yang didapat


## Referensi
[1] I Komang Setia Buana, Gusti Ngurah Mega Nata, Ida Bagus Ketut Surya Arnawa, "STRUKTUR DATA", Andi, 2018.

[2] Raden Budiarto Hadiprakoso, "Pemrograman Berorientasi Objek Teori dan implementasi dengan Java", RBH, 2021

[3] Ema Utami, Sukrisno, "10 Langkah Belajar Logika dan Algoritma. menggunakan Bahasa C dan C++ di GnuLlinux", ANDI OFFSET, 2005

