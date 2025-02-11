#include <iostream>

using namespace std;

int main() {
    int pilihan, sisi, panjabg, tinggi, jari, hasil;
    
    cout <<"Menu : \n1. Menghitung volume kubus \n2. Menghitung luas lingkaran \n3. Menghitung voluume silinder ";
    cout << "\nMasukkan pilihan anda : " ;
    cin >> pilihan;
    
    switch (pilihan) {
        case 1 :
        cout << "== Menghitung Volume Kubus ==";
        cout << "\nMasukkan panjnag sisi kubus : " ;
        cin >> sisi;
        hasil = sisi * sisi * sisi ;
        cout << "Volume Kubus adalah " << hasil;
        break;
        case 2 :
        cout << "== Menghitung Luas Lingkaran ==";
        cout << "\nMasukkan panjang jari-jari lingkaran : " ;
        cin >> jari;
        hasil = 3.14 * (jari * jari) ;
        cout << "\nLuas lingkaran adalah  " << hasil;
        break;
        case 3 :
        cout << "== Menghitung Volume Silinder ==";
        cout << "\nMasukkan panjang jari-jari lingkaran : " ;
        cin >> jari;
        cout << "\nMasukkan tinggi sillinder : " ;
        cin >> tinggi;
        hasil = 3.14 * (jari * jari) * tinggi;
        cout << "\nVolume Kubus adalah " << hasil;
        break;
        default :
        cout << "\nPilihan tidak tersedia" ;
    }
    return 0;
}

/*
Buatlah program untuk menampilkan menu dan melakukan proses sbb :
Menu : 
1. Menghitung volume kubus
2. Menghitung luas lingkaran
3. Menghitung volume silinder.
Input : pilihan user (1, 2 atau 3)
Jika pilihan = 1, maka :
Input : panjang sisi kubus
Output : Volume kubus (vol = sisi3)
Jika pilihan = 2, maka :
Input : panjang jari-jari lingkaran
Output : Luas lingkaran (luas = 3.14 * r2)
Jika pilihan = 3, maka :
Input : panjang jari-jari lingkaran & tinggi silinder
Output : Volume silinder (vol = 3.14 * r2 * t)
Jika pilihan selain 1, 2 & 3 (default) : Tampilkan pesan kesalahan.
Petunjuk : gunakan switch-case
*/