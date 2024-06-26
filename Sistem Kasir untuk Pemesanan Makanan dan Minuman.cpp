// Kasir Makanan dan Minuman dengan C++ //
// Author by Hafizh H Asyhari //
// 2022 //

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int x;
    cout << "Masukkan jumlah data yang akan diinput : ";
    cin >> x;

    int harga[x];
    string makanan[x];
    string minuman[x];

    for (int i = 0; i < x; i++) {
        cout << "Data ke " << i+1 << endl;
        cout << "Masukkan makanan : ";
        cin >> makanan[i];
        cout << "Masukkan minuman : ";
        cin >> minuman[i];
        cout << "Masukkan harga : ";
        cin >> harga[i];
    }

    cout << endl;
    for (int j = 0; j < x; j++) {
        cout << "Data ke " << j+1 << endl;
        cout << "Makanan " << makanan[j]
        << ", Minuman " << minuman[j] 
        << ", Harga " << harga[j]  
        << endl;
    }
    return 0;
}

//Sistem Kasir: Bagian judul ini dengan jelas menyampaikan tujuan program sebagai alat untuk mengelola pesanan makanan dan minuman. //
//Pesanan Makanan dan Minuman: Bagian ini menentukan jenis pesanan yang ditangani program, yang melayani item makanan dan minuman. //
