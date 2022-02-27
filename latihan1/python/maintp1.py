#Saya Mohammad Ray Mosaid mengerjakan Latihan 1 dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
#Aamiin.

#memanggil folder class agar dapat diakses di main
from classtp1 import teamdata

#membuat serta meminta masukan user untuk variabel berikut
team = input()
country = input()
est = input()
player = input()

#membuat class team1, serta mengset atribut dari class team1
team1 = teamdata(team, country, est, player)

#menampilkan isi dari class team1, serta hasil dari proses yang terjadi di konstruktor class team1
print("Team Name: " + str(team1.getteam()))
print("Country: " + str(team1.getcountry()))
print("Established: " + str(team1.getest()))
print("Player: " + str(team1.getplayer()))
