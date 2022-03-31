#include <iostream>
using namespace std;
int main()
{
    system("clear");
    double a, b, c, d, hasil_1, hasil_2, hasil_3, hasil_4;

    cout << "=====Program Penghasilan=====" << endl;
    cout << "Masukkan Gaji Bapak (%): ";
    cin >> a;
    cout << "Masukkan Jumlah Anak : ";
    cin >> b;
    hasil_1 = a * 30 / 100 * 14362;
    hasil_2 = a * 30 / 100 * 14362 / b;
    hasil_3 = (a * 14362 - (hasil_2 * b + hasil_1)) * 20 / 100;

    cout << "=============================" << endl;
    cout  << "Jatah Ibu      :Rp. " << hasil_1 << endl;
    cout << "Jatah per Anak :Rp. " << hasil_2 << endl;
    cout << "Tabungan       :Rp. " << hasil_3 << endl;
    cout << "=============================" << endl;

    return 0;
}