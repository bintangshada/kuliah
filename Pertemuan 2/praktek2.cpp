#include <iostream>
using namespace std;

int main() {
    int poin;
    cout << "Masukkaan poin : ";
    cin >> poin;

    if(poin >= 90) 
        cout << "Anda adalah member gold" << endl;  // disini ada adalah kondisi if tanpa kurung, jalan jika syarat terpenuhi
        cout << "Anda mendapat diskon" << endl; // jika kondisi tidak terpenuhi ini tetap jalan
}