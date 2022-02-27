/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 3 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

import java.util.*;

public class main {
    public static void main(String[] args){
        //memanggil kemudian mengisi seluruh class
        Processor prodata = new Processor("Apple_M1_Max", 2499);
        Disk diskdata = new Disk("SSD", 1, 197);
        Ram ramdata = new Ram(32, 139);
        Pc pcdata = new Pc(prodata, diskdata, ramdata); //class yang sudah diisi sebelumnya dimasukkan ke class pc

        //print class pc
        pcdata.printpcdata();
    }
}
