#include <iostream>
using namespace std;
// do while perulangan
int main() {
    int i = 0;
    while (i <= 10) {
        cout << "Hello " << i << endl;
        i++;
        if (i == 5) {
            break;
        }
    }
    cout << "Done";
 }