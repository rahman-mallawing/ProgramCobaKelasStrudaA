
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	/*
		Deklarasi mahasiswa 1 
		dengan memberi penomoran pada variabel
	*/
	string nama_1 = "Arifudding"; 
	char nim_1[10] = "080940101"; 
	char jenisKelamin_1 = 'L';
	int umur_1 = 19;
	int angkatan_1 = 2019;

	/*
		Deklarasi mahasiswa 2 
		dengan memberi penomoran berbeda pada variabel
	*/
	string nama_2 = "Salma Roshidin"; 
	char nim_2[10] = "080940102"; 
	char jenisKelamin_2 = 'P';
	int umur_2 = 19;
	int angkatan_2 = 2019;

	cout << "Berikut identitas mahasiswa 2 : \n"
		 << setw(16) << left << "Nama " << ": " 
		 << nama_2 << endl
		 << setw(16) << left << "NIM " << ": " 
		 << nim_2 << endl
		 << setw(16) << left << "Jenis Kelamin " << ": " 
		 << jenisKelamin_2 << endl
		 << setw(16) << left << "Umur " << ": " 
		 << umur_2 << endl
		 << setw(16) << left << "Angkatan " << ": " 
		 << angkatan_2 << endl;

	system("pause");
	return 0;
}

