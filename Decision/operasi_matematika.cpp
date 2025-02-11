#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, jml, pilihan;
    
    cout << "Masukkan bilangan pertama : " ;
    cin >> a;
    cout << "Masukkan bilangan kedua : " ;
    cin >> b;
    cout <<"Menu Matematika \n1. Penjumlahan \n2. Pengurangan \n3. Pembagian \n4. Perkalian ";
    cout << "\nMasukkan pilihan anda :" ;
    cin >> pilihan;
    
    if (pilihan ==1 ) {
        jml = a + b ;
        cout << "Hasil operasi tersebut adalah = " << jml;
    } else if (pilihan == 2) {
        jml = a - b ;
        cout << "Hasil operasi tersebut adalah = "<< jml;
    } else if (pilihan == 3) {
        jml = a / b ;
        cout << "Hasil operasi tersebut adalah = " << jml;
    } else if (pilihan == 4){
        jml = a * b ;
        cout << "Hasil operasi tersebut adalah = " << jml;
    } else {
        cout << "Pilihan tidak tersedia";
    } 
    return 0;
}


/*
Dengan menggunakan pernyataan else..if , buatlah program kalkulator
sederhana, untuk mendapatkan tanpilan hasil sebagai berikut :
Masukkan bilangan pertama : 5
Masukkan bilangan kedua : 3
Menu Matematika
1. Penjumlahan
2. Pengurangan
3. Pembagian
4. Perkalian
Masukkan pilihan anda : 4
Hasil operasi tersebut = 15
*/
