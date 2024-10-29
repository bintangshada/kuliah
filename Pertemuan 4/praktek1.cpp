#include <iostream>
using namespace std;
// do while perulangan
int main() {
    //pengulangan for
    for ( int i = 0; i <= 10; i++) {
        cout << "Hello " << i << endl;
    }

    //pengulangan do 
    int k = 0;
    do {
        cout << "World " << k << endl;
        k++;
    } while ( k <= 10);

    //pengulangan while 
    int j = 0;
    while ( j <= 10) {
        cout << "! " << j << endl;
        j++;
    }
}