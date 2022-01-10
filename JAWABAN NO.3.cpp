#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() 
{
	
int menu;
cout<<"\t Menu"<<endl;	
cout<<"1). Luas Persegi Panjang"<<endl;
cout<<"2). Keliling Persegi Panjang"<<endl;
cout<<"3). Panjang Diagonal Persegi Panjang"<<endl;
cout<<"4). Keluar"<<endl;

float luas,keliling,diagonal,panjang,lebar,keluar;
cout<<"Input Data= ";
cin>>menu;
switch(menu)

case 1:
{
cout<<"Input Nilai Panjang= ";
cin>>panjang;
cout<<"Input Nilai Lebar= ";
cin>>lebar;
luas=panjang * lebar;
cout<<"Luas Persegi Panjang= "<<luas;
break;
}
switch (menu)
case 2:
{
cout<<"Input Nilai Panjang= ";
cin>>panjang;
cout<<"Input Nilai Lebar= ";
cin>>lebar;
keliling=2*panjang+2*lebar;
cout<<"keliling Persegi Panjang= "<<keliling;
break;
}
switch (menu)
case 3:
{
cout<<"Input Nilai Panjang= ";
cin>>panjang;
cout<<"Input Nilai Lebar= ";
cin>>lebar;
diagonal=(panjang*panjang+lebar*lebar);
cout<<"Diagonal Persegi Panjang= "<<diagonal;
break;
}
switch (menu)
case 4:
	cout<<"keluar"<<endl;
}


