#include <iostream>
#include <algorithm>
using namespace std;

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

