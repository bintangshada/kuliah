#include <iostream>
using namespace std;

int main(){
    int kuota = 1000;
    int menu;
    cout << "\tTicket Konser/n";
    cout << "\t1. Pesan Ticket\n";
    cout << "\t2. List Area Konser\n";
    cout << "\t3. List Harga\n";
    cout << "\t4. History Ticket\n\n";

    cout << "Masukkan menu : ";
    cin >> menu;
    
    swith(menu){
        case 1:
            char exit;
            do{
                cout << "Total sisa kuota adalah : " << kuota << enld;
            }while( exit != 'n' || exit != 'N')
            break;
    }
}