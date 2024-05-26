#include <iostream>
using namespace std;
int main(){
	//type_data nama_array [jumlah_elemen]
	
	//array 1 dimensi
//	int array [5] = {3, 6, 9, 12, 15}; //mengisikan elemen
//
//	for (int i = 0; i < 5; i++){
//		cout << "indeks ke - [" << i << "] adalah : " <<array[i] <<endl;
//	}
// array 2 dimensi
int matriks [2][3] ={{1, 2, 3}, {4, 5, 6}};

for (int i = 0; i < 2; i++){
	for (int j = 0; j < 3; j++){
		cout << "baris ke - [" <<i<< "] kolom ke - [" <<j<< "] adalah " <<matriks [i][j] <<endl;
	}
}
cout <<endl;
for (int i = 0; i < 2; i++){
	for (int j = 0; j < 3; j++){
		cout << matriks [i][j] <<" ";
	}
	cout <<endl;
}
}
