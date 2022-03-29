#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int n, jam_1, menit_1, detik_1, sisjam_1, jam_2, menit_2, detik_2, jam_3, menit_3,
        detik_3;
    cout << "Masukkan waktu dalam detik (Nyata)\t= ";
    cin >> n;

    jam_1 = n / 3600;
    menit_1 = (n % 3600) / 60;
    detik_1 = (n % 60);

    jam_2 = (n / 5) / 3600;
    menit_2 = ((n / 5) % 3600) / 60;
    detik_2 = (n / 5) % 60;

    jam_3 = (n/8)/3600;
    menit_3 = ((n/8)%3600)/60;
    detik_3 = (n/8)%60;

    cout << "===== WAKTU DUNIA NYATA =====\n" << endl;
    cout << jam_1 << " jam " << menit_1 << " menit " << detik_1 << " detik " << endl;
    cout << "===== WAKTU DUNIA LAIN =====\n" << endl;
    cout << jam_2 << " jam " << menit_2 << " menit " << detik_2 << " detik " << endl;
    cout << "===== WAKTU DUNIA BAWAH =====\n" << endl;
    cout << jam_3 << " jam " << menit_3 << " menit " << detik_3 << " detik " << endl;

    return 0;
}
