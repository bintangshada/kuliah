#include <iostream>
#include <math.h>
using namespace std;
int derett(int deret, int banyaknya) {
    if(banyaknya <= 1){
        return(deret);
    }else{
        int hasil = derett(deret, banyaknya-1);
                cout << hasil << " ";

        return(hasil +=hasil);
    }
}

int main() {
    int banyaknya;
    
    cin >> banyaknya;
    int hasil = derett( 3,banyaknya);
    cout << hasil; 
}

