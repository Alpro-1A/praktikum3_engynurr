#include <iostream>

using namespace std;

int main(){

    int Pilihan;
    float P, L, A, T; // Nilai panjang (P), lebar (L), alas (A), tinggi (T)

    // Pilihan bangun datar

    cout << "Pilihlah hanya dengan menuliskan angkanya saja" << endl << endl;
    cout << "1. Persegi" << endl << endl;
    cout << "2. Persegi Panjang" << endl << endl;
    cout << "3. Segitiga" << endl << endl;
    cout << "Pilihlah bangun datar yang mau dihitung luasnya: "; // Menghitung luas bangun datar yang ingin dihitung
    cin >> Pilihan;

    switch (Pilihan) {  // Mencari pilihan diantara 3 case dibawah

        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> P; // Menginput panjang sisi persegi
            cout << "Luasnya adalah: " << P * P << endl;    // Menghitung luas menggunakan rumus persegi
            break;

        case 2:
            cout << "Masukkan panjang sisi persegi panjang: ";
            cin >> P; // Menginput panjang persegi panjang
            cout << "Masukkan lebar: ";
            cin >> L; // Menginput lebar persegi panjang
            cout << "Luasnya adalah " << P * L << endl; // Menghitung luas menggunakan rumus persegi panjang
            break;

        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> A;  // Menginput alas segitiga
            cout << "Masukkan tinggi: ";
            cin >> T;  // Menginput tinggi segitiga
            cout << "Luasnya adalah: " << 0.5 * A * T << endl;  // Menghitung luasnya menggunakan rumus segitiga
            break;

        default:
            cout << "Waduh gabisa inimah ya." << endl; // Jika memilih case selain 1,2,3 akan seperti ini
    }

    ;
    return 0;
}
