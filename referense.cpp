#include <iostream>
using namespace std;

int main() {
	int a=2;
	
	
	
	cout<<" Value dari a :"<<a<<endl;
	cout<<" Alamat dari a : "<<&a<<endl;
	cout<<" Isi dari alamat a :"<<a<<endl;
	cout<<" Isi dari alamat a :"<<*&a<<endl<<endl;
	
	//reference
	int &b =a-1;
	cout<<" Value dari b :"<<b<<endl;
	cout<<" Alamat dari b : "<<&b<<endl;
}
