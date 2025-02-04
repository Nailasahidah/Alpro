#include <iostream>
using namespace std;

int main() {
    float total_pembelian, potongan_harga = 0, total;
    
    cout << "Masukkan total pembelian = " ;
    cin >> total_pembelian;
    
    if (total_pembelian >= 100000){
        potongan_harga = 0.05 * total_pembelian;
    } else {
       potongan_harga = 0;
    }
    total = total_pembelian - potongan_harga;
     
    cout <<  "Total yang harus dibayar adalah RP " << total;
    
    return 0;
}

int main() {
    float total_pembelian, potongan_harga = 0;
    
    cout << "Masukkan total pembelian = " ;
    cin >> total_pembelian;
    
    if (total_pembelian >= 100000){
        potongan_harga = 0.05 * total_pembelian;
    } else {
      potongan_harga = 0;
    }
    total_pembelian -= potongan_harga;
     
    cout <<  "Total yang harus dibayar adalah RP " << total_pembelian;
    
    return 0;
}



/*Buat program menggunaan pernyataan if adalah untuk 
menentukan besarnya potongan harga yang diterima 
oleh seorang pembeli, berdasarkan kriteria :
- tidak ada potongan harga jika total pembelian kurang dari Rp. 100.000 (dalam hal ini potongan harga diinisialisasi dengan nol).
- bila total pembelian lebih dari atau sama dengan Rp. 100.000, potongan harga yang diterima dirubah menjadi sebesar 5% dari total pembelian.
*/