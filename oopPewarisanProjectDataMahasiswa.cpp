#include <iostream>
using namespace std;

class Dosen
{
public:
    void dosen_wali(string nama_dosen)
    {
        cout << "\tDosen Wali Mahasiswa \t: " << "\e[1;32m" << nama_dosen << "\e[0m" << endl;
    };

    // TODO: KONSEP POLYMORPHISM UNTUK ANGKATAN DOSEN
    void angkatan(string angkatan)
    {
        cout << "\tDosen Angkatan \t\t: " << "\e[1;32m" << angkatan << "\e[0m" << endl;
    }
};

// TODO: PEWARISAN PADA MAHASISWA & DOSEN
class Mahasiswa : public Dosen
{
    // TODO: ENKAPSULASI PADA STATUS MAHASISWA
private:
    string status;

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

    // TODO: KONSEP POLYMORPHISM UNTUK ANGKATAN MAHASISWA
    void angkatan(string angkatan)
    {
        cout << "\tMahasiswa Angkatan \t: " << "\e[1;32m" << angkatan << "\e[0m" << endl;
    }

    // TODO: ENKAPSULASI PADA STATUS MAHASISWA
    void set_status_mahasiswa(string s)
    {
        status = s;
    }
    // TODO: ENKAPSULASI PADA STATUS MAHASISWA
    string menampilkan_status_mahasiswa()
    {
        return status;
    }
};

void menampilkan_data_statis()
{
    Mahasiswa data_mahasiswa1;
    Dosen dosen;
    data_mahasiswa1.nim = "23060001";
    data_mahasiswa1.nama = "Fransisco";
    data_mahasiswa1.prodi = "Sistem dan Teknologi Informasi";
    data_mahasiswa1.fakultas = "STI";
    data_mahasiswa1.jenis_kelamin = "Laki-Laki";
    data_mahasiswa1.tempat_lahir = "Jakarta";
    data_mahasiswa1.tanggal_lahir = "13-04-2004";
    data_mahasiswa1.status_menikah = "Belum Menikah";
    data_mahasiswa1.agama = "Kristen";
    data_mahasiswa1.set_status_mahasiswa("BELUM LULUS");

    cout << "=========================================================================" << endl;
    cout << "======================== \e[1;31m UAS OOP C++ Semester 2 \e[m =======================" << endl;
    cout << "=========================================================================" << endl;

    cout << "\t\t\t\t\e[1;31mDATA STATIC\e[m";
    cout << endl;
    cout << endl;

    cout << "\tNim\t\t\t: " << "\e[1;32m" << data_mahasiswa1.nim << "\e[0m" << endl;
    cout << "\tNama Mahasiswa\t\t: " << "\e[1;32m" << data_mahasiswa1.nama << "\e[0m" << endl;
    cout << "\tProdi\t\t\t: " << "\e[1;32m" << data_mahasiswa1.prodi << "\e[0m" << endl;
    cout << "\tFakultas\t\t: " << "\e[1;32m" << data_mahasiswa1.fakultas << "\e[0m" << endl;
    cout << "\tJenis Kelamin\t\t: " << "\e[1;32m" << data_mahasiswa1.jenis_kelamin << "\e[0m" << endl;
    cout << "\tTempat Lahir\t\t: " << "\e[1;32m" << data_mahasiswa1.tempat_lahir << "\e[0m" << endl;
    cout << "\tTanggal Lahir\t\t: " << "\e[1;32m" << data_mahasiswa1.tanggal_lahir << "\e[0m" << endl;
    cout << "\tStatus Menikah\t\t: " << "\e[1;32m" << data_mahasiswa1.status_menikah << "\e[0m" << endl;
    cout << "\tAgama\t\t\t: " << "\e[1;32m" << data_mahasiswa1.agama << "\e[0m" << endl;
    cout << "\tStatus Mahasiswa\t: " << "\e[1;32m" << data_mahasiswa1.menampilkan_status_mahasiswa() << "\e[0m" << endl;
    data_mahasiswa1.angkatan("2023");
    cout << "=========================================================================" << endl;
    data_mahasiswa1.dosen_wali("Fauzan Azim, S.Kom., M.Kom");
    dosen.angkatan("2020");
    cout << "=========================================================================" << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    int maksimal_input(10);

    string status, dosen_angkatan[maksimal_input], angkatan[maksimal_input], dosen_wali[maksimal_input];
    bool loop = true;
    char input;
    int jumlahMahasiswa;

    while (loop)
    {
        menampilkan_data_statis();

    maksimum:

        cout << ("Masukkan jumlah mahasiswa yang ingin di input: ");
        cin >> jumlahMahasiswa;
        cout << endl;

        if (jumlahMahasiswa <= 0 || jumlahMahasiswa >= maksimal_input)
        {
            cout << "\e[1;32mData melebihi  batas maksimum \e[0m" << endl;

            goto maksimum;
        }

        Mahasiswa data_mahasiswa_dinamis[maksimal_input];
        Dosen dosen[maksimal_input];

        for (int i = 0; i < jumlahMahasiswa; i++)
        {
            cout << "\t\t\t\t\e[1;31mData Mahasiswa ke-" << i + 1 << "\e[0m" << endl;
            cout << endl;
            cout << "\tNim Mahasiswa \t\t: ";
            getline(cin >> ws, data_mahasiswa_dinamis[i].nim);
            cout << "\tNama Mahasiswa \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].nama);
            cout << "\tProdi \t\t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].prodi);
            cout << "\tFakultas \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].fakultas);
            cout << "\tJenis Kelamin \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].jenis_kelamin);
            cout << "\tTempat Lahir \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].tempat_lahir);
            cout << "\tTanggal Lahir \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].tanggal_lahir);
            cout << "\tStatus Menikah \t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].status_menikah);
            cout << "\tAgama \t\t\t: ";
            getline(cin, data_mahasiswa_dinamis[i].agama);
            cout << "\tStatus Mahasiswa \t: ";
            getline(cin, status);
            data_mahasiswa_dinamis[i].set_status_mahasiswa(status);
            cout << "\tAngkatan \t\t: ";
            getline(cin, angkatan[i]);
            cout << "\tDosen Wali \t\t: ";
            getline(cin, dosen_wali[i]);
            cout << "\tDosen Angkatan \t\t: ";
            getline(cin, dosen_angkatan[i]);
            cout << "=========================================================================" << endl;
        }
        system("cls");

        menampilkan_data_statis();

        cout << "=========================================================================" << endl;
        cout << "======================== \e[1;31m UAS OOP C++ Semester 2 \e[m =======================" << endl;
        cout << "=========================================================================" << endl;

        cout << "\t\t\t\t\e[1;31mDATA DINAMIS\e[m";
        cout << endl;

        for (int i = 0; i < jumlahMahasiswa; i++)
        {
            cout << endl;
            cout << "\t\t\t\t\e[1;31mData Mahasiswa ke-" << i + 1 << "\e[0m" << endl;
            cout << endl;
            cout << "\tNim\t\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].nim << "\e[0m" << endl;
            cout << "\tNama Mahasiswa\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].nama << "\e[0m" << endl;
            cout << "\tProdi\t\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].prodi << "\e[0m" << endl;
            cout << "\tFakultas\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].fakultas << "\e[0m" << endl;
            cout << "\tJenis Kelamin\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].jenis_kelamin << "\e[0m" << endl;
            cout << "\tTempat Lahir\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].tempat_lahir << "\e[0m" << endl;
            cout << "\tTanggal Lahir\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].tanggal_lahir << "\e[0m" << endl;
            cout << "\tStatus Menikah\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].status_menikah << "\e[0m" << endl;
            cout << "\tAgama\t\t\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].agama << "\e[0m" << endl;
            cout << "\tStatus Mahasiswa\t: " << "\e[1;32m" << data_mahasiswa_dinamis[i].menampilkan_status_mahasiswa() << "\e[0m" << endl;
            data_mahasiswa_dinamis[i].angkatan(angkatan[i]);
            cout << "=========================================================================" << endl;
            data_mahasiswa_dinamis[i].dosen_wali(dosen_wali[i]);
            dosen[i].angkatan(dosen_angkatan[i]);
            cout
                << "=========================================================================" << endl;
        }

        cout << "Apakah kamu mau mengulang program ini lagi :>? : ";
        cin >> input;

        if (input != 'y' && input != 'Y')
        {
            loop = false;
            system("cls");
        }
        else
        {
            system("cls");
        }
    }
    return 0;
}