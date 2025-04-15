#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, tetapi wajib mengisikan data
int nilai[] = {2,5,9,19,34};
//deklarasi array dengan ukuran dan diberi nilai awal
int skor[5] = {8,12,18,6};
//deklarasi array dengan ukuran dan tidak ada nilai awal
string nama[3];

int main (){
    cout << "Skor ke 3 = " << skor[2] << endl;
    //mengisi array pada lokasi/index tertentu
    skor[2] = 25;
    cout << "Skor ke 3 = " << skor[2] << endl;    
    //mengisi array dengan loop for
    for(int i = 0; i < 3; i++){
        cout << "Nama Mahasiswa ke-" << i+1 << " = ";
        cin >> nama[i];
    }
    cout<<endl;
    //menampilkan array dengan loop for
    for(int i = 0; i < 3; i++){
        cout << "Data Mahasiswa ke-" << i+1 << " = " << nama[i]
        <<endl;
    }
}
