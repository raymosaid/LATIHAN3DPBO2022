/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang dibutuhkan
#include <iostream>
#include <string.h>
using namespace std;

//memanggil class yang sudah dibuat
#include "Pc.cpp"

int main(){
    //membuat kemudian mengisi seluruh class
    Processor pcpro("Apple_M1_Max", 2499);
    Disk pcdisk("SSD", 1, 197);
    Ram pcram(32, 139);
    Pc pcdata(pcpro, pcdisk, pcram);  //class yang sudah diisi sebelumnya dimasukkan ke class pc
    
    //print class pc
    pcdata.printpcdata();
    
    return 0;
}
