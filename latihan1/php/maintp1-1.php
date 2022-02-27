<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil class yang sudah dibuat sebelumnya
include "classtp1-1.php";

//membuat class team1, serta mengset atribut dari class team1
$student1 = new studentdata("2004942", "Ray", "Male", "Computer Science", 4);

//menampilkan isi dari class team1, serta hasil dari proses yang terjadi di konstruktor class team1
echo "Student ID: ". $student1->getstudentID() ."<br/>";
echo "Student Name: ". $student1->getname() ."<br>";
echo "Gender: ". $student1->getgender() ."<br>";
echo "Major: ". $student1->getmajor() ."<br>";
echo "Semester: ". $student1->getsemester() ."<br>";

?>
