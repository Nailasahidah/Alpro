int main() {
    int n = 10, t1 = 0, t2 = 1, fibbo = 0;

    cout << "Fibonacci : ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        } 
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        fibbo = t1 + t2;
        t1 = t2;
        t2 = fibbo;
        
        cout << fibbo << ", ";
    }
    return 0;
}

/*
Buatlah program yang menampilkan deret fibonacci hingga suku ke-10 menggunakan perulangan for.
*/