#include <iostream>
#include <conio.h>
using namespace std;

class Data{
	public :
		string nama;
};

class Mahasiswa : public Data{
	public :
		string nama;
		string nim;
};

class Buku : public Mahasiswa{
	public :
		string nama;
		string nim;
		string nomor_buku;
};


int main(){
	Data obj; Mahasiswa mhs; Buku bk;
	int tgl,thn;
    string bln;

	cout<<"Masukkan nama\t    : ";
	getline(cin, obj.nama);

	cout<<"Masukkan nim\t    : ";
	cin>>mhs.nim;

	cout<<"Masukkan kode buku  : ";
	cin>>bk.nomor_buku;

	cout<<"\nMasukkan tanggal peminjaman "<<endl;
    cout<<"Masukkan Tanggal    : "; cin>>tgl;
    cout<<"Masukkan Bulan      : "; cin>>bln;
    cout<<"Masukkan Tahun      : "; cin>>thn;
    
	system("cls");

	cout<<"===================================="<<endl;
	cout<<" Nama\t    : "<<obj.nama<<endl;
	cout<<" NIM\t    : "<<mhs.nim<<endl;
	cout<<" Kode buku  : "<<bk.nomor_buku<<endl;
	cout<<" \n Tanggal peminjaman : "<<endl;
	cout<<"    "<<tgl<<"-"<<bln<<"-"<<thn<<endl;
	cout<<"===================================="<<endl;

	getch();
	return 0;
}