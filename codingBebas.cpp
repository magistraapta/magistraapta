#include <iostream>
using namespace std;

int main()
{
    system("clear");
    float dollar;
    cout << "Masukkan harga (dollar)=  ";
    cin >> dollar;

    cout << fixed << "Harga mobil dalam rupiah = " << dollar * 14351.40 << endl;
    cout << "Harga mobil dalam rupiah = " << dollar * 0.90 << endl;
    return 0;
}
