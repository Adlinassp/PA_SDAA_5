#include <iostream>
#include <conio.h>
#include <string>

#include "struct.h"

using namespace std;


//==========================Data Lokasi==============================
//CRUD
//TAMBAH DATA AWAL

void tekanLanjut()
{
	cout<<"\n<<<< Tekan ENTER Untuk Melanjutkan >>>>";
	getch();
	fflush(stdin);
}

void tambahdata(node_lokasi **Head){
	system("cls");
	int i;
	node_lokasi *nodebaru = new node_lokasi;
    cout<<"Input No.Pos Vaksinasi     : "; cin>>nodebaru->datas.no_pos;
	cout<<"Input Tempat Vaksinasi     : "; fflush(stdin); getline (cin, nodebaru->datas.tempat);
	cout<<"Input Jalan Vaksinasi      : "; fflush(stdin); getline (cin, nodebaru->datas.jalan);
	cout<<"Input Kelurahan Vaksinasi  : "; fflush(stdin); getline (cin, nodebaru->datas.kelurahan);
	cout<<"Input Waktu Vaksinasi      : "; fflush(stdin); getline (cin, nodebaru->datas.waktu);
    nodebaru->next = *Head;
	*Head=nodebaru;
	i++;
	system("cls");
}
//TAMPIL DATA
void tampildata(node_lokasi *Head){
	system("cls");
	if (Head==NULL){
	cout<<"linked list kosong"<<endl;
	}
	int i = 1;
	while (Head !=NULL){
		cout<<"No.Pos Vaksinasi     : "<<Head->datas.no_pos<<endl;
		cout<<"Tempat Vaksinasi     : "<<Head->datas.tempat<<endl;
		cout<<"Jalan Vaksinasi      : "<<Head->datas.jalan<<endl;
		cout<<"Kelurahan Vaksinasi  : "<<Head->datas.kelurahan<<endl;
		cout<<"Waktu Vaksinasi      : "<<Head->datas.waktu<<endl;
		cout<<endl;
		Head=Head->next;
		i++;

		
	} 
}
//UPDATE DATA 
void updatedata(node_lokasi **Head){
	system("cls");
    if (Head==NULL){
	cout<<"linked list kosong"<<endl;
	}
    int ubah,ubah2,i = 1;
    cout << "data ke berapa yang ingin diubah : ";
    cin >> ubah;
    node_lokasi *temp = (*Head);
    while (temp != NULL){
        if (i== ubah){
            cout<<"Apa yang akan diubah?\n[1]jenis\n[2]nama\n[3]umur\n[4]gejala\n[5]layanan\n:";
            cin>>ubah2;
            switch(ubah2){
            case 1:
                cout<<"Input No.Pos Vaksinasi     : "; cin>>temp->datas.no_pos;
                break;
            case 2:
                cout<<"Input Tempat Vaksinasi     : "; fflush(stdin); getline (cin, temp->datas.tempat);
                break;
            case 3:
                cout<<"Input Jalan Vaksinasi      : "; fflush(stdin); getline (cin, temp->datas.jalan);
                break;
            case 4:
                cout<<"Input Kelurahan Vaksinasi  : "; fflush(stdin); getline (cin, temp->datas.kelurahan);
                break;
            case 5:
                cout<<"Input Waktu Vaksinasi      : "; fflush(stdin); getline (cin, temp->datas.waktu);
                break;
            cout << "Data berhasil diubah" << endl;
            return;}
        }
        i++;
        temp = temp->next;
        }
		system("cls");
		}
//DELETE DATA AKHIR
void deletelast(node_lokasi **Head){
	system("cls");
    if(*Head==NULL){
        cout<<"kosong"<<endl;
    return;
    }
    if((*Head)->next==NULL){
        *Head=NULL;
        return;
    }
    node_lokasi *temp=*Head;
    while (temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
	system("cls");
}
//==========================Menu Admin==============================
// void menuAdmin(){
// 	int menu;
// 	while(menu != 9){
		
// 		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 		cout<<"|+-+-+- Menu Admin Vaksinasi: -+-+-+|"<<endl;
// 		cout<<"|1. Operator Data Pasien Vaksinasi  |"<<endl;
// 		cout<<"|2. Penjadwalan dan PengaLokasian   |"<<endl;
// 		cout<<"|3. Masukkan Data Lokasi            |"<<endl;
// 		cout<<"|9. Kembali ke Menu Utama           |"<<endl;
		
// 		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
// 		cout<<"Pilih Menu? : ";cin>>menu;
// 		switch (menu){
// 			case 1:
			
// 			break;
// 			case 2:

// 			break;
// 			case 3:

// 			break;
// 			case 9:

// 			break;
// 			default:
// 			cout<<"Pilihan tidak ada"<<endl;
// 			break;
// 		}
// 	}
// }
//==========================Menu Admin==============================


//==========================Menu CRUD Admin=============================
void dataadmin(){
	system("cls");
	node_lokasi *Head = NULL;
	int menu;
	while(menu != 9){
		
		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"|+-+-+- Menu Admin Vaksinasi: -+-+-+|"<<endl;
		cout<<"|1. Tambah Data Lokasi Vaksinasi    |"<<endl;
		cout<<"|2. LIhat Data Lokasi Vaksinasi     |"<<endl;
		cout<<"|3. Upadate Data Lokasi Vaksinasi   |"<<endl;
		cout<<"|4. Hapus Data Lokasi Vaksinasi     |"<<endl;
		cout<<"|9. Kembali ke Menu Admin           |"<<endl;

		cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		cout<<"Pilih Menu? : ";cin>>menu;
		switch (menu){
			case 1:
			tambahdata(&Head);
			break;
			case 2:
			tampildata(Head);
			break;
			case 3:
			updatedata(&Head);
			cout<<"Data Berhasil di Update!"<<endl;
			break;
			case 4:
			deletelast(&Head);
			cout<<"Data Berhasil Dihapus!"<<endl;
			break;
			case 9:
			continue;
			default:
			cout<<"Pilihan tidak ada"<<endl;
			break;
		}
	}
}

//==========================Menu CRUD Admin=============================



//==========================login Admin=============================
void loginAdmin(){
	system("color b");
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
		dataadmin();	
	}else
	{
		cout
		<<"Username dan Password Salah...\n"
		<<"------Silahkan coba lagi!------"<<endl;
		loginAdmin();
	}
}
//==========================login Admin=============================

//==========================  USER   ===================================
void daftar_vaksin (Node_vaksin **head){
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
	cout<<"|                   FORM PENDAFTARAN VAKSINASI              |"<<endl; 
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
	Node_vaksin *Nodebaru = new Node_vaksin();
    cout << " Input Nomor Urut            : "; cin >> Nodebaru->data.no_urut;
    cout << " Input Nama Lengkap          : "; fflush(stdin); getline(cin, Nodebaru->data.nama);
    cout << " Input NIK                   : "; cin >> Nodebaru->data.nik;
    cout << " Input Kelurahan Asal        : "; fflush(stdin); getline(cin, Nodebaru->data.kelurahan);
	cout << " Input Dosis yang Diinginkan : "; fflush(stdin); getline(cin, Nodebaru->data.dosis);
	cout<<"|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
    cout << endl;
	cout << "\n ---------------- Pendaftaran Telah Berhasil ! ----------------\n" << endl;
	Nodebaru->next = NULL;
    if (*head == NULL){
        *head = Nodebaru;
        return;
    };
    Node_vaksin *temp = *head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = Nodebaru;
}

//TAMPIL DATA AWAL
void tampil_data(Node_vaksin *head){
    if (head==NULL){
	cout<<"linked list kosong"<<endl;
	}
	int i = 1;
    while (head != NULL){
		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
		cout << "|             DATA PASIEN YANG TELAH MENDAFTAR              |" << endl;
		cout << "|+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|" << endl;
		cout << " Nama Pasien        : "<<head->data.nama<<endl;
		cout << " NIK  Pasien        : "<<head->data.nik<<endl;
		cout << " Kelurahan          : "<<head->data.kelurahan<<endl;
		cout << " Dosis yang diambil : "<<head->data.dosis<<endl;
		//garis bawah tabel
		cout << " |+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|"<<endl;
		head = head->next;  
		i++; 
	} 
}


void menuUser(){
    system("cls");
	Node_vaksin *head = NULL;
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
			daftar_vaksin(&head);
			break;
			case 2:
            tampil_data(head);
			break;
			case 9:
            continue;
			default:
			cout<<"|+-+-+-+-+- PILIHAN TIDAK ADA! +-+-+-+-+-+|"<<endl;
			break;
		}
	}
}
