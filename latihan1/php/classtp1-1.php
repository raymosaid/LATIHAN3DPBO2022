<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//membuat class studentdata
class studentdata{
    //membuat atribut private
    private $studentID = "";
    private $name = "";
    private $gender = "";
    private $major = "";
    private $semester = 0;

    //membuat konstruktor sekaligus mengeset atribut private
    function __construct($studentID, $name, $gender, $major, $semester){
        $this->studentID = $studentID;
        $this->name = $name;
        $this->gender = $gender;
        $this->major = $major;
        $this->semester = $semester;
    }

    //membuat fungsi untuk me-return atribut private
    function getstudentID(){
        return $this->studentID;
    }
    function getname(){
        return $this->name;
    }
    function getgender(){
        return $this->gender;
    }
    function getmajor(){
        return $this->major;
    }
    function getsemester(){
        return $this->semester;
    }

    //membuat destruktor
    function __destruct(){
    }
}
?>
