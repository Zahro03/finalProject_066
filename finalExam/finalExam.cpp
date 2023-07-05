#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y; //Variabel untuk menyimpan input dari lingkaran maupun persegipanjang 
public:
	bidangDatar() { //Constructor
		x = 0;
		y = 0;
	}
	virtual void input() {

	}//Fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) {
		 return 0; 
	} //Fungsi untuk menghitung luas
	virtual float Keliling(int a) {
		return 0;
	} //Fungsi untuk menghitung keliling 
	virtual void cekUkuran() {
		return ;
	}
	void setX(int a) { //fungsi untuk memberi/mengirim nilai x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai x
		return x;
	}	
};

class Lingkaran :public bidangDatar {
public:
	int jarijari;
	void input() {
		cout << "Masukan jejari :" << endl;
		cin >> jarijari;
		setX(jarijari);
	}
	float Luas(int a) {
		return 113.04 * a * a;
	}
	float Keliling(int a) {
		return 37.68 * 2 * a;
	}
};

class Persegipanjang :public bidangDatar {
public:
	int panjang;
	void input() {
		cout << "Masukan panjang:" << endl;
		cin >> panjang;
		setX(panjang);
	}
	float Luas(int a) {
		return 30 * a;
	}
	float Keliling(int a) {
		return 22 * a;
	}
};

int main() {
	Lingkaran lingkaran;
	Persegipanjang persegipanjang;

	bidangDatar* a = &lingkaran;
	bidangDatar* b = &persegipanjang;

	a->input();
	int x = a->getX();
	cout << "Luas : " << a->Luas(x) << endl;
	cout << "Keliling : " << a->Keliling(x) << endl;

	b->input();
	x = b->getX();
	cout << "Luas : " << b->Luas(x) << endl;
	cout << "Keliling : " << b->Keliling(x) << endl;

}
