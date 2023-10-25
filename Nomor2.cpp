#include <iostream>

using namespace std;

int main(){

    int A, B, C;

    cout << "Tuliskan Tiga Angka ( Catatan : Menggunakan Spasi, Bukan Koma ): ";
    cin >> A >> B >> C;

    int terbesar = A;

    if (B > terbesar) {
        terbesar = B;
    }
    if (C > terbesar) {
        terbesar = C;
    }

    cout << "Angka terbesar dari ketiganya adalah : " << terbesar << endl; // Dari angka yang paling besar

    return 0;
}
