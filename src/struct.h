#include <iostream>
#include <string>

using namespace std;

//Deklarasi struct
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


