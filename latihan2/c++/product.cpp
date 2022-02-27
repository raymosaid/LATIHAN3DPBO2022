/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

//membuat class Product sebagai parent dari seluruh proses inheritance
class product{
    //membuat atribut private
	private:
        int price;
        string idProduct;

    public:
        //membuat konstruktor
        product(){
        }
        //membuat fungsi untuk mengeset atribut private
        void setprice(int price){
            this->price = price;
        }
        void setidProduct(string idProduct){
            this->idProduct = idProduct;
        }

        //membuat fungsi untuk me-return atribut private
        int getprice(){
            return price;
        }
        string getidProduct(){
            return idProduct;
        }

        //membuat destruktor
        ~product(){
        }
};
