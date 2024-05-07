
#include <iostream>
#include <string>

using namespace std;

struct Mobil
{
    string merk;
    int tahunPembuatan;
    double biayaSewaPerHari;
};

struct Penyewa
{
    string nama;
    string nomorTelepon;
    int jumlahHariSewa;

    // Method to calculate total rental cost
    double hitungBiayaTotal(Mobil mobil)
    {
        return mobil.biayaSewaPerHari * jumlahHariSewa;
    }
};

int main()
{
    // Membuat beberapa mobil
    Mobil mobil1 = {"Toyota", 2018, 100.0};
    Mobil mobil2 = {"Honda", 2020, 120.0};

    // Membuat beberapa penyewa
    Penyewa penyewa1 = {"Ahmad", "08123456789", 3};
    Penyewa penyewa2 = {"Budi", "087654321", 5};

    // Melakukan penyewaan dan mencetak biaya total penyewaan
    cout << "Biaya total penyewaan mobil 1 oleh " << penyewa1.nama << ": Rp" << penyewa1.hitungBiayaTotal(mobil1) << endl;
    cout << "Biaya total penyewaan mobil 2 oleh " << penyewa2.nama << ": Rp" << penyewa2.hitungBiayaTotal(mobil2) << endl;

    return 0;
}