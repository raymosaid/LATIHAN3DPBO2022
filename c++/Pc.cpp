/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/
//memanggil class yang sudah dibuat
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>
using namespace std;

//membuat class Pc
class Pc{
    private:
        //membuat variabel class untuk menampung isi class (composition)
        Processor prodata;
        Disk diskdata;
        Ram ramdata;
        //membuat variabel class processor
        int totalprice;

    public:
        //membuat konstruktor
        Pc(Processor p, Disk d, Ram r){
            this->prodata = p;
            this->diskdata = d;
            this->ramdata = r;
            this->totalprice = this->prodata.getproprice() + this->diskdata.getdiskprice() + this->ramdata.getramprice();
        }

        //membuat konstruktor dan juga prosedur set
        Pc(){
        }
        void setprodata(Processor p){
            this->prodata = p;
        }
        void setdiskdata(Disk d){
            this->diskdata = d;
        }
        void setramdata(Ram r){
            this->ramdata = r;
        }
        void settotalprice(){
            this->totalprice = this->prodata.getproprice() + this->diskdata.getdiskprice() + this->ramdata.getramprice();
        }

        //membuat fungsi get untuk me-return atribut private
        Processor getprodata(){
            return this->prodata;
        }
        Disk gediskdata(){
            return this->diskdata;
        }
        Ram getramdata(){
            return this->ramdata;
        }
        int gettotalprice(){
            return this->totalprice;
        }

        //membuat prosedur print data pc
        void printpcdata(){
            this->prodata.printprodata(); //print data processor dengan memanggil prosedur print yang ada di class processor
            this->diskdata.printdiskdata(); //print data disk dengan memanggil prosedur print yang ada di class disk
            this->ramdata.printramdata(); //print data ram dengan memanggil prosedur print yang ada di class ram
            cout << "=========================" << endl;
            cout << "Total price: $" << this->totalprice << endl;
        }

        ~Pc(){
        }
};
