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
	   
	 void output() {
		 cout << "Kode MK: " << kodeMk << endl;
		 cout << "Nama MK: " << namaMk << endl;
		 cout << "SKS: " << sks << endl;
	 }
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "Busi";
	mhs.umur = 20;
	mhs.jurusan = "Hukum";
    mhs.output();

	mk.input();
	mk.output();
	return 0;
	
}    

#include <iostream>
using namespace std;

class bangunDatar {
private:
	float Panjang, Lebar;
public:
	float luas;
	void input() {
		cout << "Masukan Panjangnya = ";
		cin >> Panjang;
		cout << "Masukan Lebar = ";
		cin >> Lebar;
	}

	float hitungluas() {
		return panjang * lebar;

	}

	

};