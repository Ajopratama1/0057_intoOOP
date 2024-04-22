#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifer
	string nama;
	int umur;
	string jurusan;

	void input() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class Matakuliah {
 private:
	 string kodeMk;
	 string namaMk;
	 int sks;
 public :
	 void input() {
		 cout << "Kode MK: ";
		 cin >> kodeMk;
		 cout << "Nama MK: ";
		 cin >> namaMk;
		 cout << "SKS: ";
		 cin >> sks;
	 }
};