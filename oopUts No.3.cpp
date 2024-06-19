#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    string nama, nim;
    int nilai;

    // Method untuk mengatur nilai atribut
    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setNim(string nim)
    {
        this->nim = nim;
    }

    void setNilai(int nilai)
    {
        this->nilai = nilai;
    }

    // Method untuk mendapatkan nilai atribut
    string getNama() const
    {
        return nama;
    }

    string getNim() const
    {
        return nim;
    }

    int getNilai() const
    {
        return nilai;
    }

    // Method untuk menghitung nilai rata-rata
    double hitungRataRata(int nilai_siswa[], int jumlahMahasiswa)
    {
        double total = 0;
        for (int i = 0; i < jumlahMahasiswa; ++i)
        {
            total += nilai_siswa[i];
        }
        return total / jumlahMahasiswa;
    }

    // Method untuk menampilkan data
    void tampilData()
    {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main()
{
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Deklarasi array untuk menyimpan data mahasiswa
    Mahasiswa dataMahasiswa[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> dataMahasiswa[i].nama;
        cout << "NIM: ";
        cin >> dataMahasiswa[i].nim;
        cout << "Nilai: ";
        cin >> dataMahasiswa[i].nilai;
    }

    // Menyimpan nilai mahasiswa ke array nilaiSiswa
    int nilaiSiswa[jumlahMahasiswa];
    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        nilaiSiswa[i] = dataMahasiswa[i].nilai;
    }

    system("cls");

    // Menampilkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i)
    {
        cout << "Data mahasiswa ke-" << i + 1 << ":" << endl;
        dataMahasiswa[i].tampilData();
        cout << endl;

        // Hitung rata-rata dan simpan ke variabel rataRata
    }
    Mahasiswa test;
    double rataRata = test.hitungRataRata(nilaiSiswa, jumlahMahasiswa);

    cout << "Rata-rata nilai mahasiswa adalah: " << rataRata << endl;

    return 0;
}