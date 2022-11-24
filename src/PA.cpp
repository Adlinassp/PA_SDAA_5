#include <iostream> 
#include <stdio.h>
#include <iomanip>  //header untuk mengatur tampilan

#include "admin.h"
// #include "user.h"


using namespace std;
int pilihan;

int main() {
	cout << "\n ===================================================================================" << endl;
	cout << " ||                              SELAMAT DATANG DI                                ||"<< endl;
	cout << " ||                                                                               ||"<< endl;
	cout << " ||                         PROGRAM PENJADWALAN VAKSINASI                         ||"<< endl;
	cout << " ||                                                                               ||"<< endl;
	cout << " ||                                 KOTA BONTANG                                  ||"<< endl;
	cout << " ===================================================================================" << endl;
	cout << endl ;
	system("PAUSE");
	system("cls");

	while(pilihan != 9)
	{
		system("cls");
		cout<<"|==========================================|"<<endl;
		cout<<"|       Selamat Datang Di Program      |"<<endl;
		cout<<"|------------------------------------------|"<<endl;
		cout<<"| (1). Masuk Sebagai Administrasi          |"<<endl;
		cout<<"| (2). Masuk Sebagai Pendaftar Vaksinasi   |"<<endl;
		cout<<"| (9). Keluar                              |"<<endl;
		cout<<"|==========================================|"<<endl;
		cout<<"    Masukan Pilihan Anda : ";cin>>pilihan;
		cout<<"|==========================================|"<<endl;
		cin.ignore();
		switch(pilihan)
		{
			case 1:
				loginAdmin();
				break;
			case 2:
				menuUser();
				break;
			case 9:
				continue;
			default :
				cout<<"---------Pilihan tidak ada------------"<<endl;
				tekanLanjut();
		}
	}
	// int pilih_menu;
	// menuUser();
	// loginAdmin();

    //membuat garis pembatas
	// cout << "\n ================================================================================" << endl;
	// //fungsi setw() untuk mengatur lebar tampilan
	// cout << " ||" << setw(30) << " " << "SELAMAT DATANG DI " << setw(30) << "||" << endl;
	// cout << " ||" << setw(76) << " " << "||" << endl;
	// cout << " ||" << setw(23) << " " << "PROGRAM PENJADWALAN VAKSINASI" << setw(24) << " " << "||" << endl;
	// cout << " ||" << setw(76) << " " << "||" << endl;
	// cout << " ||" << setw(32) << " " << "KOTA BONTANG" << setw(32) << " " << "||" << endl;
	// //membuat garis pembatas
	// cout << " ================================================================================" << endl;
	// cout << endl ;
	// system("PAUSE");
	// system("CLS");
    // //membuat garis pembatas
	// cout << "\n ================================================================================" << endl;
	// //fungsi setw() untuk mengatur lebar tampilan
	// cout << " ||" << setw(34) << " " << "MENU UTAMA" << setw(34) << "||" << endl;
	// cout << " ||" << setw(76) << " " << "||" << endl;
	// cout << " ||" << setw(20) << " " << "1. Masuk sebagai Petugas Administrasi" << setw(19) << " " << "||" << endl;
	// cout << " ||" << setw(76) << " " << "||" << endl;
	// cout << " ||" << setw(20) << " " << "2. Masuk sebagai Pendaftar Vaksinasi" << setw(20) << " " << "||" << endl;
	// //membuat garis pembatas
	// cout << " ================================================================================" << endl;
	// cout << " " << setw(23) << " " << "Masukkan Pilihan Anda (1/2) : "; cin >> pilih_menu;
	// cout << " --------------------------------------------------------------------------------" << endl;
	// system("CLS");
	// if (pilih_menu == 1){
	// 	loginAdmin();
	// } else if (pilih_menu == 2){
	// 	menuUser();
	// } else {
	// 	cout << "\n ----------------- Pilihan Menu Tidak Tersedia! Silahkan Ulangi! ----------------\n" << endl;
	// }
	// cout << endl ;

}
