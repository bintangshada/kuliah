#include <iostream>
#include <math.h>
using namespace std;

int pangkat(int basis, int pangkatt) {
    if(pangkatt <= 1){
        return(basis);
    }else{
        return(basis * pangkat(basis, pangkatt-1));
    }
}

int main() {
    int pangkatt;
    
    cin >> pangkatt;
    int hasil = pangkat( 3,pangkatt);
    cout << hasil; 
}

