#include <iostream>
using namespace std;

int main() {
    int total_belanja, discout = 0;
    
    cout << "Masukan total belanja : " ;
    cin >> total_belanja;
    
    if (total_belanja > 500000) {
        discout = 0.3 * total_belanja;
    } 
    else {
        if (total_belanja > 200000) {
        discout = 0.2 * total_belanja;
        }
        else {
            if (total_belanja > 100000) {
                discout = 0.1 * total_belanja;
            }else{
                discout = 0;
            }
        }
    }
    total_belanja -= discout;
    
    cout << "Total belanja yang harus dibayar adalah Rp " << total_belanja;
    return 0;
}

/*
Sebuah mesin kasir memberikan diskon berdasarkan total belanja pelanggan:
Jika total belanja lebih dari Rp100.000, pelanggan mendapatkan diskon 10%.
Jika total belanja lebih dari Rp200.000, pelanggan mendapatkan diskon 20%.
Jika total belanja lebih dari Rp500.000, pelanggan mendapatkan diskon 30%.
Jika total belanja kurang dari atau sama dengan Rp100.000, tidak ada diskon.
Buat program yang meminta input total belanja pelanggan dan menghitung harga setelah diskon

*/