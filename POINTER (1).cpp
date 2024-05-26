#include <iostream>
using namespace std;
int main (){
	int a = 10;
	int *p;
	
	p = &a;
	*p = 20;
	
	cout << "alamat dari a adalah : " <<p<< endl;
	cout << "nilai a adalah : " <<*p<<endl<< endl;;
	 
	int **pp; //pointer ke pointer
	pp = &p; //pointer ke pointer diberikan alamat dari pointer p
	**pp = 30;
	
	cout << "alamat pointer p adalah : " <<*pp<< endl;
	cout << "nilai pointer p adalah : " <<**pp<< endl; 
	cout << "alamat pointer ke pointer (pp) : " <<pp<< endl;
	
	return 0;
}
