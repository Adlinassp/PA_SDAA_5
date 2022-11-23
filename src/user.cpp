#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>  //header untuk membaca,menulis, dan membuat file

#include "struct.h"

using namespace std;


//TAMBAH DATA AKHIR
// void daftar_vaksin (Node **head){
// 	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 	cout<<"|                   FORM PENDAFTARAN VAKSINASI              |"<<endl; 
// 	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 	Node *Nodebaru = new Node();
//     cout << " Input Nomor Urut            : "; cin >> Nodebaru->data.no_urut;
//     cout << " Input Nama Lengkap          : "; fflush(stdin); getline(cin>>ws, Nodebaru->data.nama);
//     cout << " Input NIK                   : "; cin >> Nodebaru->data.nik;
//     cout << " Input Kelurahan Asal        : "; fflush(stdin); getline(cin>>ws, Nodebaru->data.kelurahan);
// 	cout << " Input Dosis yang Diinginkan : "; fflush(stdin); getline(cin>>ws, Nodebaru->data.dosis);
// 	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
//     cout << endl;
// 	cout << "\n ---------------- Pendaftaran Telah Berhasil ! ----------------\n" << endl;
// 	Nodebaru->next =* head;
//     Nodebaru->next = NULL;
//     if (*head == NULL){
//         *head = Nodebaru;
//         return;
//     };
//     Node *temp = *head;
//     while(temp->next !=NULL){
//         temp = temp->next;
//     }
//     temp->next = Nodebaru;
// }

// //TAMPIL DATA AWAL
// void tampil_data(Node *head){
//     if (head==NULL){
// 	cout<<"linked list kosong"<<endl;
// 	}
// 	int i = 1;
//     while (head != NULL){
// 		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
// 		cout << "|             DATA PASIEN YANG TELAH MENDAFTAR              |" << endl;
// 		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
// 		cout << " Nama Pasien        : "<<head->data.nama<<endl;
// 		cout << " NIK  Pasien        : "<<head->data.nik<<endl;
// 		cout << " Kelurahan          : "<<head->data.kelurahan<<endl;
// 		cout << " Dosis yang diambil : "<<head->data.dosis<<endl;
// 		//garis bawah tabel
// 		cout << " |+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 		head = head->next;  
// 		i++; 
// 	} 
// }


// void menuUser(){
//     system("cls");
// 	Node *head = NULL;
//     int menu;
// 	while(menu != 9){
// 		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 		cout<<"|+-+-+- MENU USER PENDAFTAR VAKSINASI : -+-+-+|"<<endl;
// 		cout<<"|1. Form Pendaftaran Vaksinasi                |"<<endl;
// 		cout<<"|2. Informasi Jadwal & Lokasi Vaksinasi       |"<<endl;
// 		cout<<"|9. Kembali ke Menu Utama                     |"<<endl;	
// 		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 		cout<<"Pilih Menu? : ";cin>>menu;
// 		switch (menu){
// 			case 1:
// 			daftar_vaksin(&head);
// 			break;
// 			case 2:
//             tampil_data(head);
// 			break;
// 			case 9:
//             continue;
// 			default:
// 			cout<<"|+-+-+-+-+- PILIHAN TIDAK ADA! +-+-+-+-+-+|"<<endl;
// 			break;
// 		}
// 	}
// }
