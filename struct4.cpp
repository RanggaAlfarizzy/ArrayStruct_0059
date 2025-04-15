#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama;
    detailAlamat alamat;
};

int main(){
    mahasiswa mhs[2];

    for(int i = 0; i < 2; i++){
    cout << "Mahasiswa ke-" << i+1 << endl;
    cout << "Masukkan NIM = ";
    cin >> mhs[i].nim;
    cin.ignore();
    cout << "Masukkan Nama = ";
    getline(cin, mhs[i].nama);
    cout << "Masukan Alamat Desa = ";
    cin >> mhs[i].alamat.desa;    
    cout << "Masukan Alamat Kota = ";
    cin >> mhs[i].alamat.kota;
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;

    for(int i = 0; i < 2; i++){
    cout << "Data Mahasiswa ke-" << i+1 << endl;
    cout << "NIM = " << mhs[i].nim << endl;
    cout << "Nama = " << mhs[i].nama << endl;
    cout << "Alamat Desa = " << mhs[i].alamat.desa << endl;
    cout << "Alamat kota = " << mhs[i].alamat.kota << endl;
    }
}