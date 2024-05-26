#include <iostream>
using namespace std;


void function (int*b){
	cout<<" value dari b : "<< *b<<endl;
	cout<<" alamat dari b :"<< b<<endl;
}

void kuadrat (int *valPtr){
	*valPtr = (*valPtr ) * (*valPtr);
}



int main() {
	int a=2;
	
	cout<<" Value dari a :"<< a <<endl;
	cout<<" Alamat dari a : "<< &a <<endl;
	cout<<" Isi dari alamat a :"<< a <<endl;
	cout<<" Isi dari alamat a :"<< *&a <<endl<<endl;
	
	//memanggil fungsi
	function(&a);
	kuadrat(&a);
	cout<<"Kuadrat a :"<< a <<endl;	
	
}
	

