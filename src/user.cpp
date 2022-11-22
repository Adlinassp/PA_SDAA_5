#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>  //header untuk membaca,menulis, dan membuat file

#include "admin.h"
#include "struct.h"

using namespace std;


//TAMBAH DATA AKHIR
void daftar_vaksin (Node **Head){
	int i = 1;
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
	cout<<"|                   FORM PENDAFTARAN VAKSINASI              |"<<endl; 
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
	Node *nodebaru = new Node();
    cout << " Input Nomor Urut            : "; cin >> nodebaru->data.no_urut;
    cout << " Input Nama Lengkap          : "; fflush(stdin); getline(cin>>ws, nodebaru->data.nama);
    cout << " Input NIK                   : "; cin >> nodebaru->data.nik;
    cout << " Input Kelurahan Asal        : "; fflush(stdin); getline(cin>>ws, nodebaru->data.kelurahan);
	cout << " Input Dosis yang Diinginkan : "; fflush(stdin); getline(cin>>ws, nodebaru->data.dosis);
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
    cout << endl;
	cout << "\n ---------------- Pendaftaran Telah Berhasil ! ----------------\n" << endl;
	nodebaru->next =* Head;
    nodebaru->next = NULL;
    if (*Head == NULL){
        *Head = nodebaru;
        return;
    };
    Node *temp = *Head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = nodebaru;
}

//TAMPIL DATA AWAL
void tampil_data(Node *Head){
    if (Head==NULL){
	cout<<"linked list kosong"<<endl;
	}
	int i = 1;
    while (Head != NULL){
		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
		cout << "|             DATA PASIEN YANG TELAH MENDAFTAR              |" << endl;
		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
		cout << " Nama Pasien        : "<<Head->data.nama<<endl;
		cout << " NIK  Pasien        : "<<Head->data.nik<<endl;
		cout << " Kelurahan          : "<<Head->data.kelurahan<<endl;
		cout << " Dosis yang diambil : "<<Head->data.dosis<<endl;
		//garis bawah tabel
		cout << " |+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		Head = Head->next;  
		i++; 
	} 
}


void menuUser(){
    system("cls");
	Node *Head = NULL;
    int menu;
	while(menu != 9){
		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"|+-+-+- MENU USER PENDAFTAR VAKSINASI : -+-+-+|"<<endl;
		cout<<"|1. Form Pendaftaran Vaksinasi                |"<<endl;
		cout<<"|2. Informasi Jadwal & Lokasi Vaksinasi       |"<<endl;
		cout<<"|9. Kembali ke Menu Utama                     |"<<endl;	
		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"Pilih Menu? : ";cin>>menu;
		switch (menu){
			case 1:
			daftar_vaksin(&Head);
			break;
			case 2:
            tampil_data(Head);
			break;
			case 9:
            continue;
			default:
			cout<<"|+-+-+-+-+- PILIHAN TIDAK ADA! +-+-+-+-+-+|"<<endl;
			break;
		}
	}
}
