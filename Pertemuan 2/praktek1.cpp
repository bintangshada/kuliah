#include <iostream>
using namespace std;
//if kondisional

int main() {
    int usia = 18;

    if ( usia >= 18 && usia >= 0) {
    cout << "cukup umur" << endl;
    } else if (usia >= 0) {
        cout << "anda masih kecil";
    } else {
        cout << "usia tidak boleh 0 atau minus";
    }
}