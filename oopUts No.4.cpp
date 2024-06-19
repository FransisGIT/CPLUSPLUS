
#include <iostream>
#include <string>

using namespace std;

struct Produk
{
    string nama;
    int harga;
    int stok;
};

struct Pembeli
{
    string nama;
    int saldo;
};

void beliProduk(Produk &produk, Pembeli &pembeli, int jumlah)
{
    int totalBiaya = jumlah * produk.harga;
    if (jumlah <= produk.stok && totalBiaya <= pembeli.saldo)
    {
        produk.stok -= jumlah;
        pembeli.saldo -= totalBiaya;
        cout << "Pembelian berhasil. Saldo " << pembeli.nama << " sekarang: Rp" << pembeli.saldo << endl;
    }
    else
    {
        cout << "Pembelian gagal. Stok tidak mencukupi atau saldo tidak mencukupi.\n";
    }
}

int main()
{
    // Membuat beberapa produk
    Produk produk1 = {"Buku", 5000, 10};
    Produk produk2 = {"Pensil", 2000, 20};

    // Membuat beberapa pembeli
    Pembeli pembeli1 = {"Ahmad", 30000};
    Pembeli pembeli2 = {"Budi", 10000};

    // Melakukan transaksi
    cout << "Transaksi pembeli 1:\n";
    beliProduk(produk1, pembeli1, 3);
    cout << endl;

    cout << "Transaksi pembeli 2:\n";
    beliProduk(produk2, pembeli2, 15);
    cout << endl;

    // Menampilkan stok dan saldo setelah transaksi
    cout << "Stok Produk 1: " << produk1.stok << endl;
    cout << "Stok Produk 2: " << produk2.stok << endl;
    cout << "Saldo Pembeli 1: Rp" << pembeli1.saldo << endl;
    cout << "Saldo Pembeli 2: Rp" << pembeli2.saldo << endl;

    return 0;
}