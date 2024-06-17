#include <iostream>
using namespace std;

class Dosen
{
public:
    void dosen_wali(string nama_dosen)
    {
        cout << "\tDosen Wali Mahasiswa \t: "
             << "\e[1;32m" << nama_dosen << "\e[0m" << endl;
    };
};

class Mahasiswa : public Dosen
{
public:
    string nim;
    string nama;
    string prodi;
    string fakultas;
    string jenis_kelamin;
    string tempat_lahir;
    string tanggal_lahir;
    string status_menikah;
    string agama;
};

int main()
{
    bool loop = true;
    char input;

    while (loop)
    {
        /* code */

        Mahasiswa data_mahasiswa1;
        data_mahasiswa1.nim = "23060001";
        data_mahasiswa1.nama = "Fransisco";
        data_mahasiswa1.prodi = "Sistem dan Teknologi Informasi";
        data_mahasiswa1.fakultas = "STI";
        data_mahasiswa1.jenis_kelamin = "Laki-Laki";
        data_mahasiswa1.tempat_lahir = "Jakarta";
        data_mahasiswa1.tanggal_lahir = "13-04-2004";
        data_mahasiswa1.status_menikah = "Belum Menikah";
        data_mahasiswa1.agama = "Kristen";

        cout
            << "=========================================================================" << endl;
        cout
            << "======================== \e[1;31m UAS OOP C++ Semester 2 \e[m =======================" << endl;
        cout
            << "=========================================================================" << endl;
        cout << "\tNim\t\t\t: " << "\e[1;32m" << data_mahasiswa1.nim << "\e[0m" << endl;
        cout << "\tNama Mahasiswa\t\t: " << "\e[1;32m" << data_mahasiswa1.nama << "\e[0m" << endl;
        cout << "\tProdi\t\t\t: " << "\e[1;32m" << data_mahasiswa1.prodi << "\e[0m" << endl;
        cout << "\tFakultas\t\t: " << "\e[1;32m" << data_mahasiswa1.fakultas << "\e[0m" << endl;
        cout << "\tJenis Kelamin\t\t: " << "\e[1;32m" << data_mahasiswa1.jenis_kelamin << "\e[0m" << endl;
        cout << "\tTempat Lahir\t\t: " << "\e[1;32m" << data_mahasiswa1.tempat_lahir << "\e[0m" << endl;
        cout << "\tTanggal Lahir\t\t: " << "\e[1;32m" << data_mahasiswa1.tanggal_lahir << "\e[0m" << endl;
        cout << "\tStatus Menikah\t\t: " << "\e[1;32m" << data_mahasiswa1.status_menikah << "\e[0m" << endl;
        cout << "\tAgama\t\t\t: " << "\e[1;32m" << data_mahasiswa1.agama << "\e[0m" << endl;
        data_mahasiswa1.dosen_wali("Fauzan Azim, S.Kom., M.Kom");
        cout
            << "=========================================================================" << endl;
        cout
            << "=========================================================================" << endl;

        cout << "Apakah kamu mau mengulang program ini lagi?: ";
        cin >> input;

        if (input != 'y' && input != 'Y')
        {
            loop = false;
            system("cls");
        }
    }
    return 0;
}