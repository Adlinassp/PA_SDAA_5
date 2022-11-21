#include <iostream>
#include<conio.h>
#include <string>

#include "struct.h"

using namespace std;


//==========================Data Lokasi==============================
//CRUD
//TAMBAH DATA
void tambahdata(node **Head){
	int i;
	node *nodebaru = new node;
    cout<<"Input No.Pos Vaksinasi     : "; cin>>nodebaru->datas.no_pos;
	cout<<"Input Tempat Vaksinasi     : "; fflush(stdin); getline (cin, nodebaru->datas.tempat);
	cout<<"Input Jalan Vaksinasi      : "; fflush(stdin); getline (cin, nodebaru->datas.jalan);
	cout<<"Input Kelurahan Vaksinasi  : "; fflush(stdin); getline (cin, nodebaru->datas.kelurahan);
	cout<<"Input Waktu Vaksinasi      : "; fflush(stdin); getline (cin, nodebaru->datas.waktu);
    nodebaru->next = *Head;
	*Head=nodebaru;
	i++;
}
//TAMPIL DATA
void tampildata(node *Head){
	if (Head==NULL){
	cout<<"linked list kosong"<<endl;
	}
	int i = 1;
	while (Head !=NULL){
		cout<<"Input No.Pos Vaksinasi     : "<<Head->datas.no_pos<<endl;
		cout<<"Input Tempat Vaksinasi     : "<<Head->datas.tempat<<endl;
		cout<<"Input Jalan Vaksinasi      : "<<Head->datas.jalan<<endl;
		cout<<"Input Kelurahan Vaksinasi  : "<<Head->datas.kelurahan<<endl;
		cout<<"Input Waktu Vaksinasi      : "<<Head->datas.waktu<<endl;
		cout<<endl;
		Head=Head->next;
		i++;

		
	}
}
//UPDATE DATA 
void updatedata(node **Head){
    if (Head==NULL){
	cout<<"linked list kosong"<<endl;
	}
    int ubah,ubah2,i = 1;
    cout << "data ke berapa yang ingin diubah : ";
    cin >> ubah;
    node *temp = (*Head);
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
		}
//DELETE DATA 
void justdelete(node **Head){
    int pilihan,i=1;
    cout<<"Hapus Pada Data Ke: ";cin>>pilihan;
    pilihan=pilihan-1;
    if(*Head==NULL){
        cout<<"kosong"<<endl;
    return;
    }
    if((*Head)->next==NULL){
        *Head=NULL;
        return;
    }
    node *temp=*Head;
    while (temp->next->next!=NULL && pilihan>=1 && i<pilihan){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}
// //==========================Menu Admin==============================
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
// //==========================Menu Admin==============================


//==========================login Admin=============================
void dataadmin(){
	node *Head = NULL;
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
			break;
			case 9:
			justdelete(&Head);
			break;
			default:
			cout<<"Pilihan tidak ada"<<endl;
			break;
		}
	}
}

//==========================login Admin=============================



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
