<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Hardware dengan menunjuk parentnya yaitu Memory
class Hardware extends Memory{
    //membuat atribut private
	private $brand = "";
    private $model = "";

    //membuat konstruktor
    function __construct(){
    }

    //membuat fungsi untuk mengeset atribut private
    function setbrand($brand){
        $this->brand = $brand;
    }
    function setmodel($model){
        $this->model = $model;
    }

    //membuat fungsi untuk me-return atribut private
    function getbrand(){
        return $this->brand;
    }
    function getmodel(){
        return $this->model;
    }

    //membuat destruktor
    function __destruct(){
    }
}
?>
