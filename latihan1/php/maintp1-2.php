<?php

/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil class yang sudah dibuat sebelumnya
include "classtp1-2.php";

//membuat class team1, serta mengset atribut dari class team1
$team1 = new teamdata("Bayern Munich", "Germany", "1900", "Neuer");

//menampilkan isi dari class team1, serta hasil dari proses yang terjadi di konstruktor class team1
echo "Team Name: ". $team1->getteam() ."<br/>";
echo "Country: ". $team1->getcountry() ."<br>";
echo "Established: ". $team1->getest() ."<br>";
echo "Player: ". $team1->getsplayer() ."<br>";
?>
