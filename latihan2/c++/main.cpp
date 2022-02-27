/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>
using namespace std;

//memanggil class yang sudah dibuat
#include "product.cpp"
#include "memory.cpp"
#include "hardware.cpp"

int main(){
    //membuat class hardware1, serta mengset atribut dari class hardware1 beserta parentnya (Memory dan Product) dengan hanya memanggil Hardware saja
    hardware hardware1;
	hardware1.setbrand("NVIDIA");
	hardware1.setmodel("RTX_3080_Ti");
	hardware1.setfrequency(1365);
	hardware1.setmemorySize(12);
	hardware1.setsupportCuda(true);
	hardware1.setprice(119);
	hardware1.setidProduct("NRTX3080TI");

	//menampilkan isi dari class hardware1, serta hasil dari proses yang terjadi di konstruktor class hardware (inheritance)
    cout << "Brand: " << hardware1.getbrand() << endl;
	cout << "Model: " << hardware1.getmodel() << endl;
	cout << "Frequency: " << hardware1.getfrequency() << endl;
	cout << "Memory size: " << hardware1.getmemorySize() << endl;
	cout << "Support cuda: " << hardware1.getsupportCuda() << endl;
	cout << "Price: " << hardware1.getprice() << endl;
	cout << "Product: " << hardware1.getidProduct() << endl;
	
	return 0;
}
