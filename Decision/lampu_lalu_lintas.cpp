#include <iostream>
using namespace std;

int main() {
    string warna;
    
    cout << "Masukan warna lampu lalu lintas : " ;
    cin >> warna;
    
    if (warna == "merah") {
        cout<< "Berhenti";
    } 
    else {
        if (warna == "kuning") {
        cout<< "Bersiap!";
        }
        else {
            if (warna == "hijau") {
                cout << "Jalan";
            }else{
                cout << "Warna tidak valid";
            }
        }
        
    }
    
    return 0;
}

/*
Buatlah program yang meminta pengguna memasukkan 
warna lampu lalu lintas (merah, kuning, atau hijau) dalam bentuk string. 
Program harus memberikan perintah sesuai warna yang dimasukkan.
📌 Aturan:
Merah → "Berhenti!"
Kuning → "Bersiap!"
Hijau → "Jalan!"
Jika pengguna memasukkan warna selain itu → "Warna tidak valid!"

*/