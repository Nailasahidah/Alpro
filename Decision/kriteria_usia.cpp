#include <iostream>
using namespace std;

int main() {
    int usia;
    
    cout << "Maukan Usia : " ;
    cin >> usia;
    
    if (usia <= 5) {
        cout<< "Balita";
    } 
    else {
        if (usia <= 12) {
        cout<< "Anak-anak";
        }
        else {
            if (usia <= 17) {
                cout << "Remaja";
            }else{
                if (usia <= 59) {
                cout << "Dewasa";
                }else{
                    cout << "Lansia";
                }
            }
        }
        
    }
    
    return 0;
}

/*
Buatlah program yang meminta pengguna memasukkan usia mereka. 
Program harus menentukan golongan usia berdasarkan input tersebut.
📌 Kriteria:
Balita (0 - 5 tahun)
Anak-anak (6 - 12 tahun)
Remaja (13 - 17 tahun)
Dewasa (18 - 59 tahun)
Lansia (60 tahun ke atas)

*/