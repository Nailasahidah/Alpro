#include <iostream>
using namespace std;

int main() {
    string jenis;
    int latihan, sisa;
    
    cout << "Masukan Jenis keanggotaan : " ;
    cin >> jenis;
    cout << "Masukan jumlah latihan ynag dilakukan : " ;
    cin >> latihan;
    
    if (jenis == "silver") {
        sisa = 10 - latihan;
        if (sisa == 0){
            cout << "Anda tidak bisa latihan lagi bulan ini";
        } else {
            if (sisa < 0){
            cout << "Anda sudah melebihi batas, silah upgrade jenis keanggotaan";
            } else {
                cout << "Anda masih bisa latihan sebanyak " << sisa<< "x lagi bulan ini";
            }
        }
    } 
    else {
        if (jenis == "gold") {
            sisa = 20 - latihan;
            if (sisa == 0){
            cout << "Anda tidak bisa latihan lagi bulan ini";
        } else {
            if (sisa < 0){
            cout << "Anda sudah melebihi batas, silah upgrade jebis keanggotaan";
            } else {
                cout << "Anda masih bisa latihan sebanyak " << sisa<< "x lagi bulan ini";
            }
        }
        } else {
            if (jenis == "platinum") {
                cout << "tidak terbatas, anda masih bisa latihan lagi bulan ini";
            }
        }
    }

    
    return 0;
}

/*
Sistem Keanggotaan Gym
Sebuah gym memiliki tiga jenis keanggotaan:
Silver → Maksimal latihan 10 kali per bulan
Gold → Maksimal latihan 20 kali per bulan
Platinum → Tidak terbatas
Buatlah program yang meminta pengguna memasukkan jenis keanggotaan mereka dan jumlah latihan yang sudah dilakukan dalam bulan ini. Program harus menentukan apakah mereka masih bisa latihan bulan ini atau tidak.
contoh input output :
masukan jenis keanggotaan : silver 
masukan jumlah latihan yang dilakukan : 7
anda masih bisa latihan sebanyak 3x lagi bulan ini

*/