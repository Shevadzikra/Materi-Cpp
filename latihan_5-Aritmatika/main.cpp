#include <iostream>
using namespace std;

int main() {

    int num1;
    float num2;
    int num3;

    num1 = 10;
    num2 = 6;
    num3 = 8;

    int operasiTambah = num1 + num2;
    int operasiKurang = num1 - num2;
    int operasiKali = num1 * num2;
    float operasiBagi = num1 / num2; 
    // operasi pembagian salah satu tipe datanya harus float, 
    // dan dikembalikan dalam bentuk float jika disimpan pada sebuah variable.

    int operasiModulus = num1 % num3;
    // operasi modulus semua tipe datanya harus berupa integer.

    cout << "Hasil dari operasi tambah: " << operasiTambah << "\n" << endl;
    cout << "Hasil dari operasi kurang: " << operasiKurang << "\n" << endl;
    cout << "Hasil dari operasi kali: " << operasiKali << "\n" << endl;
    cout << "Hasil dari operasi bagi: " << operasiBagi << "\n" << endl;
    cout << "Hasil dari operasi modulus: " << operasiModulus << "\n" << endl;

    return 0;
}