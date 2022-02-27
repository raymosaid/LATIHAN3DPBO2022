/*
    Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/

//memanggil header yang sudah dibuat sebelumnya
#include "classtp1.cpp"

using namespace std;

int main(){
    //membuat variabel untuk menampung masukan user
    string team;
    string country;
    string est;
    string playername;

    //meminta masukan user
    cin >> team;
    cin >> country;
    cin >> est;
    cin >> playername;

    //membuat class team1
	teamdata team1;
    //meng-set atribut dari team1 berdasarkan masukan user sebelumnya dengan menggunakan class teamdata
    team1.setteam(team);
    team1.setcountry(country);
    team1.setest(est);
    team1.setplayer(playername);

    //menampilkan hasil akhir setelah atribut dalam class team1 diset
    cout << "Team Name: " << team1.getteam() << endl;
    cout << "Country: " << team1.getcountry() << endl;
    cout << "Established: " << team1.getest() << endl;
    cout << "Player: " << team1.getplayer() << endl;
	
	return 0;
}
