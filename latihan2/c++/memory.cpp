/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>

using namespace std;

//membuat class Memory dengan menunjuk parentnya yaitu Product
class memory : public product{
    //membuat atribut private
	private:
        int frequency;
        int memorySize;
        bool supportCuda;

    public:
        //membuat konstruktor
        memory(){
        }

        //membuat fungsi untuk mengeset atribut private
        void setfrequency(int frequency){
            this->frequency = frequency;
        }
        void setmemorySize(int memorySize){
            this->memorySize = memorySize;
        }
        void setsupportCuda(bool supportCuda){
            this->supportCuda = supportCuda;
        }

        //membuat fungsi untuk me-return atribut private
        int getfrequency(){
            return frequency;
        }
        int getmemorySize(){
            return memorySize;
        }
        bool getsupportCuda(){
            return supportCuda;
        }

        //membuat destruktor
        ~memory(){
        }
};
