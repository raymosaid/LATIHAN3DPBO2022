<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Product sebagai parent dari seluruh proses inheritance
class Product{
    //membuat atribut private
	private $price = 0;
    private $idProduct = "";

    //membuat konstruktor sekaligus mengeset atribut private
    function __construct($price, $idProduct){
        $this->price = $price;
        $this->idProduct = $idProduct;
    }

    //membuat fungsi untuk mengeset atribut private
    function setprice($price){
        $this->price = $price;
    }
    function setidProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    //membuat fungsi untuk me-return atribut private
    function getprice(){
        return $this->price;
    }
    function getidProduct(){
        return $this->idProduct;
    }

    //membuat destruktor
    function __destruct(){
    }
}
?>
