#include <iostream>
#include <string>

#include "struct.h"

using namespace std;

int i =0, n;
//namespace crud {
	void tambah_data(){
	
	cout<<"Jumlah Data Yang Akan diinput : ";cin>>n;
	//perulangan untuk menginput data sebanyak n
	for(i=0;i<n;i++){
	cout<<"===MENAMBAH DATA "<<(i+1)<<"==="<<endl;
	cout<<"Input Jenis Hewan: "; fflush(stdin); cin>>hwn[i].jenis;
	cout<<"Input Nama Hewan : "; fflush(stdin); cin>>hwn[i].nama;
	cout<<"Input Umur Hewan : "; cin>>hwn[i].umur;
	cout<<endl;
}
}


//fungsi tampil data
void tampil_data(){
     for (i=0; i<n; i++){
		cout<<i+1<<".Jenis hewan   : "<<hwn[i].jenis<<endl;
		cout<<"   Nama hewan   : "<<hwn[i].nama<<endl;
		cout<<"   Umur hewan   : "<<hwn[i].umur<<endl;
		cout<<endl;
	}
}
//}

