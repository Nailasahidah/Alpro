#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Masukkan angka = " ;
    cin >> a;
    
    if (a % 2 == 0){
        cout<< a << " merupakan bilangan genap";
    } else {
        cout<< a << " merupakan bilangan ganjil";
    }
    return 0;
}


/*Buat program untuk menginputkan sebuah bilangan, 
kemudian cetak ke layar bilangan tersebut dan 
beri komentar apakah bilangan tersebut ganjil atau genap.
*/