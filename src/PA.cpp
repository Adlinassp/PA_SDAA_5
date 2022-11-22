#include <iostream> 
#include <stdio.h>
#include <iomanip>  //header untuk mengatur tampilan

#include "admin.h"
#include "user.h"


using namespace std;

int banyak_data, indeks, i, pilih_menu, pilih_user;
char lagi;

int main() {
	menuUser();
	

    // //membuat garis pembatas
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
