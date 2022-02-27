<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil class yang sudah dibuat sebelumnya
include "Product.php";
include "Memory.php";
include "Hardware.php";

//membuat class hardware1, serta mengset atribut dari class hardware1 beserta parentnya (Memory dan Product) dengan hanya memanggil Hardware saja
$hardware1 = new Hardware();
$hardware1->setbrand("NVIDIA");
$hardware1->setmodel("RTX_3080_Ti");
$hardware1->setfrequency(1365);
$hardware1->setmemorySize(12);
$hardware1->setsupportsCuda(true);
$hardware1->setprice(119);
$hardware1->setidProduct("NRTX3080TI");

//menampilkan isi dari class hardware1, serta hasil dari proses yang terjadi di konstruktor class hardware (inheritance)
echo "Brand: ". $hardware1->getbrand() ."<br/>";
echo "Model: ". $hardware1->getmodel() ."<br>";
echo "Frequency: ". $hardware1->getfrequency() ."<br>";
echo "Memory size: ". $hardware1->getmemorySize() ."<br>";
echo "Support CUDA: ". $hardware1->getsupportsCuda() ."<br>";
echo "Price: ". $hardware1->getprice() ."<br>";
echo "ID Product: ". $hardware1->getidProduct() ."<br>";
?>