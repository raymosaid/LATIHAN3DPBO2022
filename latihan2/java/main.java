/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

import java.util.*;

public class main {
    public static void main(String[] args){
        //membuat class hardware1, serta mengset atribut dari class hardware1 beserta parentnya (Memory dan Product) dengan hanya memanggil Hardware saja
        Hardware hardware1 = new Hardware();
        hardware1.setbrand("NVIDIA");
        hardware1.setmodel("RTX 3080 Ti");
        hardware1.setfrequency(1365);
        hardware1.setmemorySize(12);
        hardware1.setsupportsCuda(true);
        hardware1.setprice(1119);
        hardware1.setidProduct("NRTX3080TI");

        //menampilkan isi dari class hardware1, serta hasil dari proses yang terjadi di konstruktor class hardware (inheritance)
        System.out.println("Brand : " + hardware1.getbrand());
        System.out.println("Model : " + hardware1.getmodel());
        System.out.println("Frequency : " + hardware1.getfrequency() + " MHz");
        System.out.println("Memory size : " + hardware1.getmemorySize() + " GB");
        System.out.println("Supports cuda : " + hardware1.getsupportsCuda());
        System.out.println("Price : $ " + hardware1.getprice());
        System.out.println("Id product : " + hardware1.getidProduct());
    }
}
