#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

int main()
{
	string angka;
	cout<<"MENU"<<endl;
	cout<<"1. Baca Data"<<endl;
	cout<<"2. Cetak Data"<<endl;
	cout<<"3. Ubah Data"<<endl;
	cout<<"4. Hapus Data"<<endl;
	cout<<"5. Keluar Program"<<endl;
	cout<<"========================="<<endl;
	cout<<"Pilihan Anda: ";
	cin>>angka;
	
		if (angka=="1")
		cout<<"Baca Data"<<endl;
		if (angka=="2")
		cout<<"Cetak Data"<<endl;
		if (angka=="3")
		cout<<"Ubah Data"<<endl;
		if (angka=="4")
		cout<<"Hapus Data"<<endl;
		if (angka=="5")
		cout<<"Keluar Program"<<endl;






	getch();
}
