# <h1 align="center">Laporan Praktikum Modul Priority Queue & Heaps</h1>

<p align="center">Fito Satrio</p>
<p align="center">2311110030</p>

## Dasar Teori

Priority Queue adalah jenis struktur data yang mirip dengan antrian biasa, tetapi setiap elemen memiliki prioritas yang terkait dengannya. Dalam priority queue, elemen dengan prioritas tertinggi akan selalu diproses lebih dahulu, terlepas dari urutan mereka ditambahkan ke dalam antrian. Prinsip priority queue adalah sebagai berikut:

- Dalam priority queue, elemen dengan prioritas tertinggi selalu berada di depan antrian.
- Jika ada elemen dengan prioritas yang sama, urutan mereka bisa ditentukan berdasarkan waktu masuk (FIFO) atau tidak, tergantung pada implementasinya.
  
  Operasi utama nya adalah:
- Insert (Enqueue), untuk menambahkan elemen baru dengan prioritas tertentu ke dalam antrian.
- Extract-Max/Extract-Min (Dequeue), untuk menghapus dan mengembalikan elemen dengan prioritas tertinggi (atau terendah) dari antrian.
- Peek/Top, untuk mengembalikan elemen dengan prioritas tertinggi (atau terendah) tanpa menghapusnya dari antrian.
- Change Priority, untuk mengubah prioritas dari elemen tertentu dalam antrian.
- Remove, untuk menghapus elemen tertentu dari antrian.
  
Priority queue banyak digunakan dalam algoritma graf seperti Dijkstra untuk menemukan jalur terpendek untuk menemukan minimum spanning tree [1]. Beberapa cara untuk mengimplementasikan priority queue adalah menggunakan array, linked list, heap, atau binary search tree. untuk materi kali ini kita memakai heap untuk melakukan implementasi pada priority queue.

## Heap

Heap adalah struktur data yang digunakan untuk menyimpan kumpulan elemen dengan sifat tertentu. Heap umumnya digunakan untuk operasi terkait prioritas, seperti menemukan elemen terbesar atau terkecil dalam kumpulan data. Struktur data heap untuk menjaga elemen-elemen dalam urutan yang memungkinkan operasi insert dan extract-max/min menjadi O(log n). Heap umumnya diimplementasikan sebagai pohon biner lengkap yang disimpan dalam array untuk efisiensi. Indeks dalam array membantu menentukan posisi anak-anak dan orang tua dengan rumus sederhana [2]. Ada dua jenis heap yaitu:

- Max Heap, setiap orang tua (parent) memiliki nilai yang lebih besar dari atau sama dengan nilai setiap anaknya (children). Dengan demikian, elemen terbesar terletak di akar heap.
- Min Heap, setiap orang tua memiliki nilai yang lebih kecil dari atau sama dengan nilai setiap anaknya. Dengan demikian, elemen terkecil terletak di akar heap.

## Guided

```C++
// Guided 1
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
	return (i - 1) / 2;
}

int leftChild(int i) {
	return ((2 * i) + 1);
}

int rightChild(int i) {
	return ((2 * i) + 2);
}

void shiftUp(int i) {
	while (i > 0 && H[parent(i)] < H[i]) {
		std::swap(H[parent(i)], H[i]);
		i = parent(i);
	}
}

void shiftDown(int i) {
	int maxIndex = i;
	int l = leftChild(i);
	if (l <= heapSize && H[l] > H[maxIndex]) {
		maxIndex = l;
	}
	int r = rightChild(i);
	if (r <= heapSize && H[r] > H[maxIndex]) {
		maxIndex = r;
	}
	if (i != maxIndex) {
		std::swap(H[i], H[maxIndex]);
		shiftDown(maxIndex);
	}
}

void insert(int p) {
	heapSize = heapSize + 1;
	H[heapSize] = p;
	shiftUp(heapSize);
}

int extractMax() {
	int result = H[0];
	H[0] = H[heapSize];
	heapSize = heapSize - 1;
	shiftDown(0);
	return result;
}

void changePriority(int i, int p) {
	int oldp = H[i];
	H[i] = p;
	if (p > oldp) {
		shiftUp(i);
	} else {
		shiftDown(i);
	}
}

int getMax() {
	return H[0];
}

void remove(int i) {
	H[i] = getMax() + 1;
	shiftUp(i);
	extractMax();
}

int main() {
	insert(45);
	insert(20);
	insert(14);
	insert(12);
	insert(31);
	insert(7);
	insert(11);
	insert(13);
	insert(7);

	std::cout << "Priority Queue : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}

	std::cout << "\n";

	std::cout << "Node with maximum priority : " << extractMax() << "\n";

	std::cout << "Priority queue after extracting maximum : ";

	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	changePriority(2, 49);
	std::cout << "Priority queue after priority change : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	remove(3);
	std::cout << "Priority queue after removing the element : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}

	return 0;
}

```

Program ini adalah implementasi dari struktur data Priority Queue menggunakan Max Heap. Priority Queue adalah struktur data di mana setiap elemen memiliki prioritas yang ditentukan, dan elemen dengan prioritas tertinggi selalu berada di bagian depan. Max Heap adalah jenis heap di mana elemen dengan nilai terbesar selalu berada di akar heap. Program ini mengilustrasikan cara kerja priority queue berbasis Max Heap, termasuk operasi dasar seperti insert, extractMax, changePriority, dan remove. Dengan menggunakan struktur data ini, kita dapat dengan efisien mengelola elemen-elemen berdasarkan prioritas mereka. Priority Queue sangat berguna dalam berbagai aplikasi seperti penjadwalan tugas, algoritma graf, dan manajemen antrian di sistem operasi yang didalamnya terdapat fungsi untuk:

- Menambahkan beberapa elemen ke heap.
- Menampilkan elemen-elemen dalam priority queue.
- Mengekstrak dan menampilkan elemen dengan prioritas tertinggi.
- Mengubah prioritas salah satu elemen.
- Menghapus salah satu elemen dari heap.

## Unguided

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user.

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

void printHeap() {
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int value;

    // Insert up to 10 values
    std::cout << "Insert 10 values:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter value " << (i + 1) << ": ";
        std::cin >> value;
        insert(value);
    }

    // Print inserted values
    std::cout << "Values in the priority queue: ";
    printHeap();

    // Print maximum value
    std::cout << "Maximum value: " << getMax() << "\n";

    // Change priority
    int index, newPriority;
    std::cout << "Enter index to change priority: ";
    std::cin >> index;
    std::cout << "Enter new priority: ";
    std::cin >> newPriority;
    changePriority(index, newPriority);

    // Print heap after priority change
    std::cout << "Priority queue after priority change: ";
    printHeap();

    // Remove element
    std::cout << "Enter index to remove: ";
    std::cin >> index;
    remove(index);

    // Print heap after removal
    std::cout << "Priority queue after removing the element: ";
    printHeap();

	cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;
    return 0;

}


```

<p><b>Penjelasan:</b></p>
Program ini adalah contoh implementasi Max Heap untuk mengelola priority queue. Ini memungkinkan pengguna untuk menambahkan elemen, mengubah prioritas elemen, menghapus elemen, dan mendapatkan elemen dengan prioritas tertinggi dengan diinputkan oleh ussr. Penjelasan sebagai berikut:

- H adalah array yang digunakan untuk menyimpan elemen-elemen heap.
- heapSize adalah variabel yang melacak ukuran heap saat ini. Dimulai dari -1 karena tidak ada elemen dalam heap pada awalnya.
- parent(int i): Mengembalikan indeks parent dari elemen di indeks i.
- leftChild(int i): Mengembalikan indeks left child dari elemen di indeks i.
- rightChild(int i): Mengembalikan indeks right child dari elemen di indeks i.
- shiftUp(int i): Memperbaiki heap dengan menggeser elemen ke atas sampai heap property terpenuhi.
- shiftDown(int i): Memperbaiki heap dengan menggeser elemen ke bawah sampai heap property terpenuhi.
- insert(int p): Menambahkan elemen baru p ke heap dan memperbaiki heap dengan shiftUp.
- extractMax(): Menghapus dan mengembalikan elemen dengan prioritas tertinggi (elemen di akar heap), kemudian memperbaiki heap dengan shiftDown.
- changePriority(int i, int p): Mengubah prioritas elemen di indeks i ke nilai p dan menyesuaikan heap dengan shiftUp atau shiftDown sesuai kebutuhan.
- getMax(): Mengembalikan elemen dengan prioritas tertinggi tanpa menghapusnya dari heap.
- remove(int i): Menghapus elemen di indeks i dari heap dengan mengatur elemen tersebut ke nilai yang lebih tinggi dari maksimum saat ini, kemudian menghapusnya dengan extractMax.

#### Output:

![Screenshot (1350)](https://github.com/fitosatrioo/Data-Structure-Practice/assets/109860844/90040cc7-654d-4724-91c5-147bf0bb3cdc)

Penjelasan output
```
Values in the priority queue: 74 67 9 51 11 6 8 26 40 2
```
- Ini adalah tampilan awal dari priority queue setelah semua nilai dimasukkan. Angka-angka ini ditampilkan dalam urutan sesuai dengan properti heap, yaitu nilai tertinggi (74) berada di bagian depan, diikuti oleh nilai-nilai lainnya yang terurut secara descending.

```
Maximum value: 74
```
- Ini adalah nilai maksimum (nilai teratas) dalam priority queue saat ini.

```
Enter index to change priority: 1
```
- Program meminta pengguna untuk memasukkan indeks elemen yang ingin diubah prioritasnya. Indeks dihitung dari 1, sehingga indeks 1 merujuk pada elemen pertama dalam priority queue.

```
Enter new priority: 102
```
- Program meminta pengguna untuk memasukkan nilai prioritas baru untuk elemen yang dipilih. Pengguna memasukkan nilai 102.

```
Priority queue after priority change: 102 74 9 51 11 6 8 26 40 2
```
- Ini adalah tampilan priority queue setelah perubahan prioritas. Prioritas elemen pertama telah diubah menjadi 102, dan sisa elemen tetap dalam urutan yang sama seperti sebelumnya.

```
Enter index to remove: 5
```
- Program meminta pengguna untuk memasukkan indeks elemen yang ingin dihapus dari priority queue. Pengguna memilih untuk menghapus elemen pada indeks 5.

```
Priority queue after removing the element: 102 74 9 51 11 2 8 26 40
```
- Ini adalah tampilan priority queue setelah elemen pada indeks 5 dihapus. Elemen tersebut (nilai 11) telah dihapus, dan elemen-elemen di belakangnya telah bergeser ke posisi yang sesuai untuk menjaga sifat heap.

## Kesimpulan

Priority queue dan heap adalah konsep penting dalam struktur data dan algoritma. Mereka memungkinkan pengembang untuk menangani situasi yang memerlukan manajemen prioritas dengan efisien. Dengan menggunakan operasi pada priority queue dan heap, kita dapat mengoptimalkan berbagai aplikasi, mulai dari pengurutan data hingga pencarian jalur terpendek dalam graf. Pemahaman yang kuat tentang priority queue dan heap dapat membantu dalam merancang solusi yang efektif dan efisien untuk berbagai masalah dalam pemrograman dan ilmu komputer secara umum.

## Referensi

[1] J. Wise, J. Bader, C. Wong, J. Aldrich, É. Tanter, and J. Sunshine, "Gradual verification of recursive heap data structures", Proc. ACM Program. Lang. , vol. 4, no. 228, pp. 1-28, Oct. 2020.

[2] A. Nurcholis, S. Batara, and M. Octamanullah, "Penerapan struktur data Heap Priority Queue pada algoritma Djikstra untuk mendapatkan kompleksitas O((n + m)log n)", Jurnal Laboratorium Ilmu dan Rekayasa Komputasi, vol. 1, no. 1, pp. 1-4, 2023.
