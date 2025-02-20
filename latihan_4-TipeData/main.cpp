#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    
    // bilangan bulat
    int a = 10;
    cout << a << endl;
    cout << sizeof(a) << " bytes" << endl; // memeriksa besar data variable a => 4 bytes
    // 1 byte = 8 bit
    cout << INT_MAX << endl; // memeriksa besar maksimal data integer
    cout << INT_MIN << "\n" << endl; // memeriksa kecil maksimal data integer

    // sama seperti int namun data dapat lebih besar dari int
    long b = 100;
    cout << b << endl;
    cout << sizeof(b) << " bytes" << endl; // 4 bytes
    cout << LONG_MAX << endl;
    cout << LONG_MIN << "\n" << endl;

    // <long long> nilai data yang lebih besar dari long
    long long c = 10000;
    cout << c << endl;
    cout << sizeof(c) << " bytes" << endl; // 8 bytes
    cout << LLONG_MAX << endl;
    cout << LLONG_MIN << "\n" << endl;

    // <short> nilai data yang lebih kecil dari integer
    short d = 1;
    cout << d << endl;
    cout << sizeof(d) << " bytes" << endl; // 2 bytes
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << "\n" << endl;

    // bilangan bulat
    float e = 1.2;
    cout << e << endl;
    cout << sizeof(e) << " bytes" << endl; // 4 bytes
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<float>::min() << "\n" << endl;

    // sama seperti <float> namun lebih besar
    double f = 1.8;
    cout << f << endl;
    cout << sizeof(f) << " bytes" << endl; // 8 bytes
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<double>::min() << "\n" << endl;

    // tipe data character
    char g = 'a';
    cout << g << endl;
    cout << sizeof(g) << " byte" << "\n" << endl; // 1 byte

    // tipe data kondisi => true atau false
    bool h = false; // false bernilai 0, true bernilai 1
    cout << h << endl;
    cout << sizeof(h) << " byte" << "\n" << endl; // 1 byte

    // tipe data text
    string i = "hello world";
    cout << i << endl;
    cout << sizeof(i) << " bytes" << "\n" << endl; // 32 bytes

    return 0;
}