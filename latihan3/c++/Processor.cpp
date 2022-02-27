/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

//membuat class Processor
class Processor{
    //membuat variabel class processor
    private:
        string name;
        int price;
    
    public:
        //membuat konstruktor
        Processor(string name, int price){
            this->name = name;
            this->price = price;
        }

        //membuat konstruktor dan juga prosedur set
        Processor(){
        }
        void setname(string name){
            this->name = name;
        }
        void setproprice(int price){
            this->price = price;
        }
        
        //membuat fungsi get untuk me-return atribut private
        string getname(){
            return this->name;
        }
        int getproprice(){
            return this->price;
        }

        //membuat prosedur print data processor
        void printprodata(){
            cout << "Processor:" << endl;
            cout << "   Processor Name: " << this->name << endl;
            cout << "   Price: $" << this->price << endl;
        }

        //membuat destruktor
        ~Processor(){
        }
};
