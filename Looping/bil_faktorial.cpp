int main()
{
 
  int angka,hasil,i;
 
  cout << "Input angka: ";
  cin >> angka;
 
  cout << angka << "! = ";
 
  hasil = 1;
  for(i = 1; i <= angka; i++) {
    hasil = hasil * i;
 
    // untuk menampilkan angka
    cout << i;
    if(i != angka) {
      cout << " * ";
    }
  }
  cout << " = " << hasil;
  cout << endl;
 
  return 0;
}

/*
int main()
{
 
  int angka,hasil,i;
 
  cout << "Input angka: ";
  cin >> angka;
 
  cout << angka << "! = ";
 
  hasil = 1;
  for(i = 1; i <= angka; i++) {
    hasil = hasil * i;

  }
  cout <<  hasil;
  
 
  return 0;
}

*/

/*
Buatlah program yang meminta pengguna untuk menghitung dan menampilkan faktorial 
dari angka tersebut menggunakan perulangan for.

*/