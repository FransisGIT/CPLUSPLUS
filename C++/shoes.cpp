#include <iostream>
using namespace std;

class Sepatu
{
public:
    string brand, model;
    int harga;

    // fungsi untuk menghitung jumlah diskon yang ada
    void diskonHarga(float diskon)
    {
        harga = harga - (harga * diskon);
    }

    // menampilkan data yang telah di buat
    void show_data()
    {
        // menampilkan data brand
        cout << "Brand: " << brand << endl;
        // menampilkan data model
        cout << "Model: " << model << endl;
        // menampilkan data harga
        cout << "Harga: " << harga << endl;
    }
};

int main()
{
    // membuat data static atau data yang sudah di buat oleh programmernya
    cout << "====================" << endl;
    cout << "Data Static" << endl;
    Sepatu sepatuku;

    sepatuku.brand = "Ando";
    sepatuku.model = "Sneakers";
    sepatuku.harga = 100000;
    // membawa object yang berisi 0.20 atau 20% ke dalam fungsi diskonHarga()
    sepatuku.diskonHarga(0.20);
    // memanggil fungsi show_data() untuk menampilkan data
    sepatuku.show_data();
    cout << "====================" << endl;
    cout << endl;

    // membuat data dynamic atau data yang dapat berubah ubah valuenya ketika user menginput
    cout << "====================" << endl;
    cout << "Data Dynamic" << endl;
    Sepatu sepatuInput;

    cout << "Masukkan nama brand: ";
    cin >> sepatuInput.brand;

    cout << "Masukkan jenis model: ";
    cin >> sepatuInput.model;

    cout << "Masukkan harga sepatu: ";
    cin >> sepatuInput.harga;

    // membawa object yang berisi 0.20 atau 20% ke dalam fungsi diskonHarga()
    sepatuInput.diskonHarga(0.20);
    // memanggil fungsi show_data() untuk menampilkan data yang telah di input
    sepatuInput.show_data();
    cout << "====================" << endl;

    return 0;
}
