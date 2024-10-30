#include <iostream>
using namespace std;

double pembagian(int a, int b) { //fungsi dengan nilai kembali
    double hasil = a / b;
    return hasil;
}

int main() {
    int a, b;
    cout << "Masukkan angka pertama : "; cin >> a;
    cout << "Masukkan angka kedua : "; cin >> b;
    cout << pembagian(a, b) << endl;
}