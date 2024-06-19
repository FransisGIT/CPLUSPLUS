#include <iostream>
using namespace std;

int main()
{
    char loop;
    int umur;

input_umur:

    // Meminta pengguna untuk memasukkan umur
    cout << "Masukkan umur Anda: ";

    // Membaca umur dari input pengguna
    if (!(cin >> umur))
    { // Memeriksa apakah input adalah angka
        // Jika input bukan angka, membersihkan buffer input
        cin.clear();
        // Mengabaikan karakter non-angka yang tersisa di buffer
        cin.ignore(10000, '\n');
        // Menampilkan pesan kesalahan
        cout << "================" << endl;
        cout << "Umur harus berupa angka. Silakan coba lagi \n";
        cout << "================" << endl;
        // Kembali ke label input_umur
        goto input_umur;
    }
    else
    {
        //  Menampilkan pesan berdasarkan
        //  kriteria umur menggunakan switch case
        switch (umur)
        {
        case 1 ... 10:
            cout << "================" << endl;
            cout << "Kamu masih kecil banyakin minum susu sgm" << endl;
            cout << "================" << endl;
            break;
        case 11 ... 17:
            cout << "================" << endl;
            cout << "Kamu masih bocah belajar yang rajin dek" << endl;
            cout << "================" << endl;
            break;
        case 18 ... 28:
            cout << "================" << endl;
            cout << "Kamu masih sangat muda perjuangkan masa depanmu ;>" << endl;
            cout << "================" << endl;
            break;
        case 29 ... 40:
            cout << "================" << endl;
            cout << "Kamu masih muda semangat jalanin hidup ;>" << endl;
            cout << "================" << endl;
            break;
        case 41 ... 100:
            cout << "================" << endl;
            cout << "Kamu sudah tua ingat yang diatas ;>" << endl;
            cout << "================" << endl;
            break;
        default:
            cout << "Data yang kamu input tidak valid" << endl;
            goto input_umur; // Kembali ke label input_umur jika umur tidak valid
        }
    }

    cout << "Apakah kamu mau memasukkan umur lagi y/n: ";
    cin >> loop;
    system("cls");

    if (loop == 'Y' || loop == 'y')
    {
        goto input_umur; // Kembali ke label input_umur jika pengguna ingin memasukkan umur lagi
    }
    else
    {
        return 0; // Keluar dari program jika pengguna tidak ingin memasukkan umur lagi
    }
}