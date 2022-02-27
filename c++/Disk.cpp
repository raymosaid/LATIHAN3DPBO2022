/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

//membuat class Disk
class Disk{
    //membuat variabel class disk
    private:
        string type;
        int capacity;
        int price;
    
    //membuat konstruktor
    public:
        //membuat konstruktor
        Disk(string type, int capacity, int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        //membuat konstruktor dan juga prosedur set
        Disk(){
        }
        void settype(string type){
            this->type = type;
        }
        void setcapacity(int capacity){
            this->capacity = capacity;
        }
        void setdiskprice(int price){
            this->price = price;
        }

        //membuat fungsi get untuk me-return atribut private
        string gettype(){
            return this->type;
        }
        int getcapacity(){
            return this->capacity;
        }
        int getdiskprice(){
            return this->price;
        }

        //membuat prosedur print data disk
        void printdiskdata(){
            cout << "Disk:" << endl;
            cout << "   Disk Type: " << this->type << endl;
            cout << "   Capacity: " << this->capacity << "TB" << endl;
            cout << "   Price: $" << this->price << endl;
        }

        //membuat destruktor
        ~Disk(){
        }
};
