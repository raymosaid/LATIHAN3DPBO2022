/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

//membuat class Ram
class Ram{
    //membuat variabel class ram
    private:
        int capacity;
        int price;
    
    public:
        //membuat konstruktor
        Ram(int capacity, int price){
            this->capacity = capacity;
            this->price = price;
        }

        //membuat konstruktor dan juga prosedur set
        Ram(){
        }
        void setcapacity(int capacity){
            this->capacity = capacity;
        }
        void setramprice(int price){
            this->price = price;
        }

        //membuat fungsi get untuk me-return atribut private
        int getcapacity(){
            return this->capacity;
        }
        int getramprice(){
            return this->price;
        }

        //membuat prosedur print data ram
        void printramdata(){
            cout << "Ram:" << endl;
            cout << "   Capacity: " << this->capacity << "GB" << endl;
            cout << "   Price: $" << this->price << endl;
        }

        ~Ram(){
        }
};
