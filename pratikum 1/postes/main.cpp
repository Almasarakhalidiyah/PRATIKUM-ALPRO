#include <math.h>	// NIM : 2100018192
#include <iostream> // ALMA SARA KHALIDIYAH
using namespace std;
int pangkat(int a, int b) {
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;


	
}
int main ()	{
	 int x;
	cout <<"menghitung akar pangkat dari x: ";
	cin>> x;
	
	double y = sqrt(x);
	cout << "akarnya adalah: "<< y << endl;
	
	int a;
	int b;
	cout<< "angka: ";
	cin >> a;
	cout<< "pangkat: ";
	cin >> b;
	cout << "hasil  = " << pangkat(a,b) << endl;
	 
    int jumlah, kurang, kali, bagi;

    cout << "Masukkan nilai a: ";

    cin >> a;

    cout << "Masukkan nilai b: ";
    
    cin >> b;
    cout << endl << endl << "Penjumlahan" << endl;
    jumlah = a + b;
    cout << "Hasil dari penjumlahan " << a << " + " << b << " = " << jumlah;
    
    cout << endl << endl << "Pengurangan" << endl;
    kurang = a - b;
    cout << "Hasil dari pengurangan " << a << " - " << b << " = " << kurang;
    
    cout << endl << endl << "Perkalian" << endl;
    kali = a * b;
    cout << "Hasil dari perkalian " << a << " x " << b << " = " << kali;
    
    cout << endl << endl << "Pembagian" << endl;
    bagi = a / b;
    cout << "Hasil dari pembagian " << a << " / " << b << " = " << bagi;
    
	
	return 0;
    
}
