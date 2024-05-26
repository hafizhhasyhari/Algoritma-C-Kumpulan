#include <iostream>
using namespace std;
//202331069
int main (){
	int array[10];
	int a;

//	array [0] = 2;
//	array [1] = 4;
//	array [2] = 6;
//	array [3] = 8;
//	array [4] = 10;

	a = sizeof(array) / sizeof(array[0]);
	
	for (int i = 0; i < a; i++){
		cout << "input angka :";
		cin >> a;
	}

}
