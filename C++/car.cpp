#include <iostream>
using namespace std;

int main()
{
    class Sepatu
    {
    public:
        string brand, model;
        int harga;

        void drive(int model)
        {
            harga += model;
        }

        void show_data()
        {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Ukuran: " << harga << endl;
        }
    };

    cout << "====================" << endl;
    cout << "Data Static" << endl;
    Sepatu sepatuku;
    sepatuku.brand = "Ando";
    sepatuku.model = "Sneakers";
    sepatuku.harga = 100000;
    sepatuku.drive(5000);
    sepatuku.show_data();
    cout << "====================" << endl;
    cout << endl;

    cout << "====================" << endl;
    cout << "Data Dynamic" << endl;
    Sepatu sepatuInput;
    cout << "Masukkan nama brand: ";
    cin >> sepatuInput.brand;

    cout << "Masukkan jenis model: ";
    cin >> sepatuInput.model;

    cout << "Masukkan harga sepatu: ";
    cin >> sepatuInput.harga;

    sepatuInput.show_data();
    cout << "====================" << endl;

    return 0;
}
