<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 2 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class Memory dengan menunjuk parentnya yaitu Product
class Memory extends Product{
    //membuat atribut private
	private $frequency = 0;
	private $memorySize = 0;
    private $supportsCuda;

    //membuat konstruktor sekaligus mengeset atribut private
    function __construct($frequency, $memorySize, $supportsCuda){
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->supportsCuda = $supportsCuda;
    }

    //membuat fungsi untuk mengeset atribut private
    function setfrequency($frequency){
        $this->frequency = $frequency;
    }
    function setmemorySize($memorySize){
        $this->memorySize = $memorySize;
    }
    function setsupportsCuda($supportsCuda){
        $this->supportsCuda = $supportsCuda;
    }

    //membuat fungsi untuk me-return atribut private
    function getfrequency(){
        return $this->frequency;
    }
    function getmemorySize(){
        return $this->memorySize;
    }
    function getsupportsCuda(){
        return $this->supportsCuda;
    }

    //membuat destruktor
    function __destruct(){
    }
}
?>
