#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel celcius, fahrenheit , kelvin dan reamur
    float celcius, fahrenheit, kelvin, reamur;
    cout << "Program konversi suhu Celcius ke Fahrenheit, Kelvin, dan Reamur \n";
    cout << "Masukkan suhu celcius = ";

    // input untuk suhu celcius
    cin >> celcius;

    // deskripsi untuk rumus konversi suhu
    fahrenheit = (9.0/5.0 * celcius) + 32.0;
    kelvin = 273.0 + celcius;
    reamur = (4.0/9.0 * celcius) + 32.0;

    // output hasil konversi
    cout << "Celcius = " << celcius << " C" << endl;
    cout << "Fahrenheit = " << fahrenheit << " F" << endl;
    cout << "Kelvin = " << kelvin << " K" << endl;
    cout << "Reamur = " << reamur << " R" << endl;

}
