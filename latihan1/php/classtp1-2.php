<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class teamdata
class teamdata{
    //membuat atribut private
	private $team = "";
    private $country = "";
    private $est = "";
    private $playername = "";

    //membuat konstruktor sekaligus mengeset atribut private
    function __construct($team, $country, $est, $playername){
        $this->team = $team;
        $this->country = $country;
        $this->est = $est;
        $this->playername = $playername;
    }

    //membuat fungsi untuk me-return atribut private
    function getteam(){
        return $this->team;
    }
    function getcountry(){
        return $this->country;
    }
    function getest(){
        return $this->est;
    }
    function getsplayer(){
        return $this->playername;
    }

    //membuat destruktor
    function __destruct(){
    }
}
?>
