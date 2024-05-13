#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Menghapus spasi dari string
string removeSpaces(const string& str) {
    string processedStr;
    for(size_t i = 0; i < str.length(); ++i) {
        if(str[i] != ' ') {
            processedStr += str[i];
        }
    }
    return processedStr;
}

// Fungsi untuk menentukan apakah sebuah string adalah palindrom atau tidak
bool isPalindrome(const string& str) {
    stack<char> charStack;
    int length = str.length();

    // Masukkan setengah karakter pertama ke dalam stack
    for (int i = 0; i < length/2; i++) {
        charStack.push(str[i]);
    }

    // Bandingkan setengah karakter kedua dengan karakter yang ada di stack
    int i = (length + 1) / 2;
    while (i < length) {
        if (str[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
        i++;
    }
    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Hapus spasi dari string
    string processedInput = removeSpaces(input);

    // Cek apakah string yang sudah diproses adalah palindrom atau tidak
    if (isPalindrome(processedInput)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
    
    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Fito Satrio (2311110030)" << endl;

    return 0;
}

