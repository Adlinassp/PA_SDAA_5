#include <iostream>
#include<conio.h>
#include <string>

#include "struct.h"

using namespace std;
//==========================Data Lokasi==============================
//CRUD
void tambahdata(node **Head){
	int i;
	node *nodebaru = new node;
    cout<<"Input No.Urut Hewan   : "; cin>>nodebaru->datas.no_pos;
	cout<<"Input Jenis Hewan     : "; fflush(stdin); getline (cin, nodebaru->datas.tempat);
	cout<<"Input Nama Hewan      : "; fflush(stdin); getline (cin, nodebaru->datas.jalan);
	cout<<"Input Gejala Hewan    : "; fflush(stdin); getline (cin, nodebaru->datas.kelurahan);
	cout<<"Input Layanan         : "; fflush(stdin); getline (cin, nodebaru->datas.waktu);
    nodebaru->next = *Head;
	*Head=nodebaru;
	i++;
}
//==========================Menu Admin==============================
void menuAdmin(){
	int menu;
	while(menu != 9){
		
		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"|+-+-+- Menu Admin Vaksinasi: -+-+-+|"<<endl;
		cout<<"|1. Operator Data Pasien Vaksinasi  |"<<endl;
		cout<<"|2. Penjadwalan dan PengaLokasian   |"<<endl;
		cout<<"|3. Masukkan Data Lokasi            |"<<endl;
		cout<<"|9. Kembali ke Menu Utama           |"<<endl;
		
		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"Pilih Menu? : ";cin>>menu;
		switch (menu){
			case 1:
			
			break;
			case 2:

			break;
			case 3:

			break;
			case 9:

			break;
			default:
			cout<<"Pilihan tidak ada"<<endl;
			break;
		}
	}
}
//==========================Menu Admin==============================

//==========================login Admin=============================
void loginAdmin(){
	system("color a");
	string user, pass;
	string username = "admin";
	string password = "admin";
	system("cls");
	cout 
	<< "\n\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n"
	<< "|                     Login Admin                    |\n"
	<< "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
	cout<<"Masukkan USERNAME : "; cin>>user;
    cout<<"Masukkan PASSWORD : "; cin>>pass;
    if (username==user && password==pass)
	{
    	cout
		<<"Username dan Password benar...\n"
		<<"=====ANDA BERHASIL LOGIN!====="<<endl;
		menuAdmin();	
	}else
	{
		cout
		<<"Username dan Password Salah...\n"
		<<"------Silahkan coba lagi!------"<<endl;
		loginAdmin();
	}
}
//==========================login Admin=============================
