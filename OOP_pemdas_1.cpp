#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
public: void cetak() {
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;

    }
};

class Matakuliah {
    private:
    string kode;
    string namaM;
    int sks;
public : void input () {
    cout << "Masukan kode Matakuliah : " ;
    cin >> kode;
    cout << "masukkan nama matakuliah : ";
    cin >> namaM;
    cout << "jumlah sks : " ; 
    cin >> sks;
public : void tampil() {
        cout << "\nKode Matakuliah : ";
        cout << "\nNama MAtakuliah : ";
        cout << "\nSKS : " ; 
   
       };
    }
};


int main ()
{
    Mahasiswa mhs2;
    Matakuliah mk ; 
    

    cout << "masukkan NIM : ";
    cin >> mhs2.nim;
    cout << "masukkan nama : "; 
    cin >> mhs2.nama;
    mhs2.cetak();
    
    mk.input();
    mk.tampil();
}