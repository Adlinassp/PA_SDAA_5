#include <iostream>
#include <string>

using namespace std;

//Deklarasi struct peserta vaksin
struct vaksin{
	int no_urut;
	string nama, kelurahan, dosis;
	long nik;
};
// Struct Node  
struct Node{
    vaksin data;
    struct Node *next;
};


//Deklarasi struct lokasi vaksin
struct lokasi{
	int no_tenda;
	string waktu, tempat, jalan, kelurahan;
};
//struct Node
struct Node{
	lokasi datas;
	struct Node *next;
};
