#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int isiArray(int array[]) {
    int n;
    cout << "Masukkan Jumlah elemen (max " << MAX_SIZE << ":";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "Jumlah elemen tidak boleh lebih dari" << MAX_SIZE << endl;
        cout << ". Menggunakan " << MAX_SIZE << "." << endl;
        n = MAX_SIZE;
    }

    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ":";
        cin >> array[i];
    }

    return n;

    // Fungsi mengecek apakah ada angka yang sama

    int cekDuplikasi (int array[], int n){
        bool adaDuplikasi = false;

        for(int i=0; i<n; i++) {
            for(int j=1 + 1; j<n; j++)
                if (array[i] == array[j]) {
                    cout << "Ada angka yang sama dalam array: "
                    cout << "pada indeks ke-" << "dan" << j << endl;
                    adaDuplikasi = true;

                }
        }
    }
 if (adaDuplikasi) {
    cout << "Tidak ada angka yang sama dalam array" << endl;
 }
}
//fungsi untuk menghitung total dan 
// menampilkan rata-arat
int hitungTotalRataRata