/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

class hardware : public memory{
    //membuat atribut private
	private:
        string brand;
        string model;

    public:
        //membuat konstruktor
        hardware(){
        }
        
        //membuat fungsi untuk mengeset atribut private
        void setbrand(string brand){
            this->brand = brand;
        }
        void setmodel(string model){
            this->model = model;
        }

        //membuat fungsi untuk me-return atribut private
        string getbrand(){
            return brand;
        }
        string getmodel(){
            return model;
        }

        //membuat destruktor
        ~hardware(){
        }
};
