#include <iostream>

using namespace std;

int main(){

    int nilai;
    cout << "Tulislah nilai mu: ";
    cin >> nilai;  // nilai di input

    if (nilai >= 90) {
    cout << "Selamat! Anda mendapatkan nilai A." << endl;   // Yang mendapat nilai 100 atau 90 akan mendapat nilai A.

    } else if (nilai >= 80 && nilai < 90) {
    cout << "Wow ! Anda mendapatkan nilai B." << endl;    // Yang mendapat nilai dibawah 90 atau 80 akan mendapat nilai B.

    } else if (nilai >= 70 && nilai < 80) {
    cout << "Anda mendapatkan nilai C." << endl;    // Yang mendapat nilai dibawah 80 ato 70 akan mendapat nilai C.

    } else if (nilai >= 60 && nilai < 70) {
    cout << "Anda mendapatkan nilai D." << endl;    // Yang mendapat nilai dibawah 70 ATO 60 akan mendapat nilai D.

    } else if (nilai >= 0 && nilai < 60)  {
    cout << "Anda mendapatkan nilai E. Tetap semangat, jangan menyerah !" << endl;    // Yang mendapat nilai dibawah 60 akan mendapat nilai E.

    } else { //Jawaban ngawur
    cout << "Ora Ono Iki Tok"; // Output yang dihasilkan jika Input tidak jelas.
    }

    return 0;
}
