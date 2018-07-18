#include <iostream>
using namespace std;

class Data{
	public :
		string nama;
};

class Mahasiswa : public Data{
	public :
		string nim;
};

class Buku : public Mahasiswa{
	public :
		string kode_buku;
		string nama_buku;
};


int main(){
	Data obj; Mahasiswa mhs; Buku bk;
	int tgl,thn;
    string bln;

	cout<<"Masukkan nama\t    : ";
	getline(cin, obj.nama);

	cout<<"Masukkan nim\t    : ";
	cin>>mhs.nim;

	cout<<"Masukkan nama buku : ";
	cin>>bk.nama_buku;

	cout<<"Masukkan kode buku  : ";
	cin>>bk.kode_buku;

	cout<<"\nMasukkan tanggal peminjaman "<<endl;
        cout<<"Masukkan Tanggal    : "; cin>>tgl;
        cout<<"Masukkan Bulan      : "; cin>>bln;
        cout<<"Masukkan Tahun      : "; cin>>thn;
    
	system("cls");
	cout<<" \t  DATA PEMINJAM "<<endl;
	cout<<"===================================="<<endl;
	cout<<" Nama\t    : "<<obj.nama<<endl;
	cout<<" NIM\t    : "<<mhs.nim<<endl;
	cout<<" Nama buku  : "<<bk.nama_buku<<endl;
	cout<<" Kode buku  : "<<bk.kode_buku<<endl;
	cout<<" \n Tanggal peminjaman : "<<endl;
	cout<<"    "<<tgl<<"-"<<bln<<"-"<<thn<<endl;
	cout<<"===================================="<<endl;
	return 0;
}
